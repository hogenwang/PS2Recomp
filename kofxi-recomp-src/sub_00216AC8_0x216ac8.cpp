#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00216AC8
// Address: 0x216ac8 - 0x216c28
void sub_00216AC8_0x216ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216AC8_0x216ac8");
#endif

    switch (ctx->pc) {
        case 0x216ae4u: goto label_216ae4;
        case 0x216af4u: goto label_216af4;
        case 0x216b54u: goto label_216b54;
        case 0x216b68u: goto label_216b68;
        case 0x216b78u: goto label_216b78;
        case 0x216be4u: goto label_216be4;
        case 0x216bf8u: goto label_216bf8;
        case 0x216c00u: goto label_216c00;
        default: break;
    }

    ctx->pc = 0x216ac8u;

label_216ac8:
    // 0x216ac8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x216ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x216acc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x216accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x216ad0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x216ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x216ad4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x216ad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216ad8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x216ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x216adc: 0xc043e52  jal         func_10F948
    ctx->pc = 0x216ADCu;
    SET_GPR_U32(ctx, 31, 0x216AE4u);
    ctx->pc = 0x216AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216ADCu;
    // 0x216ae0: 0x24840db8  addiu       $a0, $a0, 0xDB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x216ADCu, 0x216AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216AE4u;
label_216ae4:
    // 0x216ae4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x216ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x216ae8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x216ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216aec: 0xc043e52  jal         func_10F948
    ctx->pc = 0x216AECu;
    SET_GPR_U32(ctx, 31, 0x216AF4u);
    ctx->pc = 0x216AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216AECu;
    // 0x216af0: 0x24840868  addiu       $a0, $a0, 0x868 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x216AECu, 0x216AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216AF4u;
label_216af4:
    // 0x216af4: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x216af4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x216af8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x216af8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x216afc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x216afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x216b00: 0x24840d88  addiu       $a0, $a0, 0xD88
    ctx->pc = 0x216b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3464));
    // 0x216b04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x216b04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216b08: 0x8043e52  j           func_10F948
    ctx->pc = 0x216B08u;
    ctx->pc = 0x216B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216B08u;
    // 0x216b0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x216B10u;
    // 0x216b10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x216b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x216b14: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x216b14u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x216b18: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x216b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x216b1c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x216b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x216b20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x216b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x216b24: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x216b24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216b28: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x216b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x216b2c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x216b2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216b30: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x216b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x216b34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x216b34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216b38: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x216b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x216b3c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x216b3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216b40: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x216b40u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x216b44: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x216b44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x216b48: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x216b48u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x216b4c: 0xc08447c  jal         func_2111F0
    ctx->pc = 0x216B4Cu;
    SET_GPR_U32(ctx, 31, 0x216B54u);
    ctx->pc = 0x216B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216B4Cu;
    // 0x216b50: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2111F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2111F0u, 0x216B4Cu, 0x216B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216B54u;
label_216b54:
    // 0x216b54: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x216b54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216b58: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x216b58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216b5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x216b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216b60: 0xc0844dc  jal         func_211370
    ctx->pc = 0x216B60u;
    SET_GPR_U32(ctx, 31, 0x216B68u);
    ctx->pc = 0x216B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216B60u;
    // 0x216b64: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x216B60u, 0x216B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216B68u;
label_216b68:
    // 0x216b68: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x216b68u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x216b6c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x216b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216b70: 0xc085ab2  jal         func_216AC8
    ctx->pc = 0x216B70u;
    SET_GPR_U32(ctx, 31, 0x216B78u);
    ctx->pc = 0x216B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216B70u;
    // 0x216b74: 0x24f9023  subu        $s2, $s2, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216AC8u;
    goto label_216ac8;
    ctx->pc = 0x216B78u;
label_216b78:
    // 0x216b78: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x216b78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216b7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x216b7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216b80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x216b80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x216b84: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x216b84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216b88: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x216b88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x216b8c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x216b8cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x216b90: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x216b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x216b94: 0x3e00008  jr          $ra
    ctx->pc = 0x216B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216B94u;
        // 0x216b98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216B94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216B9Cu;
    // 0x216b9c: 0x0  nop
    ctx->pc = 0x216b9cu;
    // NOP
    // 0x216ba0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x216ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x216ba4: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x216ba4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x216ba8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x216ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x216bac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x216bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x216bb0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x216bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x216bb4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x216bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x216bb8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x216bb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216bbc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x216bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x216bc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x216bc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216bc4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x216bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x216bc8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x216bc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216bcc: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x216bccu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x216bd0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x216bd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216bd4: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x216bd4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x216bd8: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x216bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x216bdc: 0xc084582  jal         func_211608
    ctx->pc = 0x216BDCu;
    SET_GPR_U32(ctx, 31, 0x216BE4u);
    ctx->pc = 0x216BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216BDCu;
    // 0x216be0: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211608u, 0x216BDCu, 0x216BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216BE4u;
label_216be4:
    // 0x216be4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x216be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216be8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x216be8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216bec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x216becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216bf0: 0xc084612  jal         func_211848
    ctx->pc = 0x216BF0u;
    SET_GPR_U32(ctx, 31, 0x216BF8u);
    ctx->pc = 0x216BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216BF0u;
    // 0x216bf4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x216BF0u, 0x216BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216BF8u;
label_216bf8:
    // 0x216bf8: 0xc085ab2  jal         func_216AC8
    ctx->pc = 0x216BF8u;
    SET_GPR_U32(ctx, 31, 0x216C00u);
    ctx->pc = 0x216BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216BF8u;
    // 0x216bfc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216AC8u;
    goto label_216ac8;
    ctx->pc = 0x216C00u;
label_216c00:
    // 0x216c00: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x216c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x216c04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x216c04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x216c08: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x216c08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x216c0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x216c0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216c10: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x216c10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216c14: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x216c14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x216c18: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x216c18u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x216c1c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x216c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x216c20: 0x3e00008  jr          $ra
    ctx->pc = 0x216C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216C20u;
        // 0x216c24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216C20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216C28u;
}
