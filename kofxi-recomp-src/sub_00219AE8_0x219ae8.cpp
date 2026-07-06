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

// Function: sub_00219AE8
// Address: 0x219ae8 - 0x219c48
void sub_00219AE8_0x219ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219AE8_0x219ae8");
#endif

    switch (ctx->pc) {
        case 0x219b04u: goto label_219b04;
        case 0x219b14u: goto label_219b14;
        case 0x219b74u: goto label_219b74;
        case 0x219b88u: goto label_219b88;
        case 0x219b98u: goto label_219b98;
        case 0x219c04u: goto label_219c04;
        case 0x219c18u: goto label_219c18;
        case 0x219c20u: goto label_219c20;
        default: break;
    }

    ctx->pc = 0x219ae8u;

label_219ae8:
    // 0x219ae8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x219ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x219aec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x219aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x219af0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x219af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x219af4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x219af4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219af8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x219af8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x219afc: 0xc043e52  jal         func_10F948
    ctx->pc = 0x219AFCu;
    SET_GPR_U32(ctx, 31, 0x219B04u);
    ctx->pc = 0x219B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219AFCu;
    // 0x219b00: 0x24841330  addiu       $a0, $a0, 0x1330 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x219AFCu, 0x219B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219B04u;
label_219b04:
    // 0x219b04: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x219b04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x219b08: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x219b08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x219b0c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x219B0Cu;
    SET_GPR_U32(ctx, 31, 0x219B14u);
    ctx->pc = 0x219B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219B0Cu;
    // 0x219b10: 0x248410e0  addiu       $a0, $a0, 0x10E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x219B0Cu, 0x219B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219B14u;
label_219b14:
    // 0x219b14: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x219b14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x219b18: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x219b18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x219b1c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x219b1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x219b20: 0x248410f0  addiu       $a0, $a0, 0x10F0
    ctx->pc = 0x219b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4336));
    // 0x219b24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x219b24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219b28: 0x8043e52  j           func_10F948
    ctx->pc = 0x219B28u;
    ctx->pc = 0x219B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219B28u;
    // 0x219b2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x219B30u;
    // 0x219b30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x219b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x219b34: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x219b34u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x219b38: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x219b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x219b3c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x219b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x219b40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x219b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x219b44: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x219b44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219b48: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x219b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x219b4c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x219b4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219b50: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x219b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x219b54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x219b54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219b58: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x219b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x219b5c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x219b5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219b60: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x219b60u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x219b64: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x219b64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x219b68: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x219b68u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x219b6c: 0xc0844dc  jal         func_211370
    ctx->pc = 0x219B6Cu;
    SET_GPR_U32(ctx, 31, 0x219B74u);
    ctx->pc = 0x219B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219B6Cu;
    // 0x219b70: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x219B6Cu, 0x219B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219B74u;
label_219b74:
    // 0x219b74: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x219b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219b78: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x219b78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219b7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x219b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219b80: 0xc0844dc  jal         func_211370
    ctx->pc = 0x219B80u;
    SET_GPR_U32(ctx, 31, 0x219B88u);
    ctx->pc = 0x219B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219B80u;
    // 0x219b84: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x219B80u, 0x219B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219B88u;
label_219b88:
    // 0x219b88: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x219b88u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x219b8c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x219b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219b90: 0xc0866ba  jal         func_219AE8
    ctx->pc = 0x219B90u;
    SET_GPR_U32(ctx, 31, 0x219B98u);
    ctx->pc = 0x219B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219B90u;
    // 0x219b94: 0x24f9023  subu        $s2, $s2, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219AE8u;
    goto label_219ae8;
    ctx->pc = 0x219B98u;
label_219b98:
    // 0x219b98: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x219b98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219b9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x219b9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219ba0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x219ba0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x219ba4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x219ba4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219ba8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x219ba8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x219bac: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x219bacu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x219bb0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x219bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x219bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x219BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219BB4u;
        // 0x219bb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219BBCu;
    // 0x219bbc: 0x0  nop
    ctx->pc = 0x219bbcu;
    // NOP
    // 0x219bc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x219bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x219bc4: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x219bc4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x219bc8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x219bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x219bcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x219bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x219bd0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x219bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x219bd4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x219bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x219bd8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x219bd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219bdc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x219bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x219be0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x219be0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219be4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x219be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x219be8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x219be8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219bec: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x219becu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x219bf0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x219bf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219bf4: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x219bf4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x219bf8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x219bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x219bfc: 0xc084612  jal         func_211848
    ctx->pc = 0x219BFCu;
    SET_GPR_U32(ctx, 31, 0x219C04u);
    ctx->pc = 0x219C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219BFCu;
    // 0x219c00: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x219BFCu, 0x219C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219C04u;
label_219c04:
    // 0x219c04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x219c04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219c08: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x219c08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219c0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x219c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219c10: 0xc084612  jal         func_211848
    ctx->pc = 0x219C10u;
    SET_GPR_U32(ctx, 31, 0x219C18u);
    ctx->pc = 0x219C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219C10u;
    // 0x219c14: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x219C10u, 0x219C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219C18u;
label_219c18:
    // 0x219c18: 0xc0866ba  jal         func_219AE8
    ctx->pc = 0x219C18u;
    SET_GPR_U32(ctx, 31, 0x219C20u);
    ctx->pc = 0x219C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219C18u;
    // 0x219c1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219AE8u;
    goto label_219ae8;
    ctx->pc = 0x219C20u;
label_219c20:
    // 0x219c20: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x219c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x219c24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x219c24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x219c28: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x219c28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x219c2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x219c2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219c30: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x219c30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219c34: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x219c34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x219c38: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x219c38u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x219c3c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x219c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x219c40: 0x3e00008  jr          $ra
    ctx->pc = 0x219C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C40u;
        // 0x219c44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219C40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219C48u;
}
