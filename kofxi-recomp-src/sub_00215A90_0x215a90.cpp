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

// Function: sub_00215A90
// Address: 0x215a90 - 0x215cd8
void sub_00215A90_0x215a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215A90_0x215a90");
#endif

    switch (ctx->pc) {
        case 0x215aacu: goto label_215aac;
        case 0x215abcu: goto label_215abc;
        case 0x215accu: goto label_215acc;
        case 0x215adcu: goto label_215adc;
        case 0x215aecu: goto label_215aec;
        case 0x215afcu: goto label_215afc;
        case 0x215b64u: goto label_215b64;
        case 0x215b78u: goto label_215b78;
        case 0x215b8cu: goto label_215b8c;
        case 0x215ba0u: goto label_215ba0;
        case 0x215bb4u: goto label_215bb4;
        case 0x215bc8u: goto label_215bc8;
        case 0x215bd8u: goto label_215bd8;
        case 0x215c44u: goto label_215c44;
        case 0x215c58u: goto label_215c58;
        case 0x215c6cu: goto label_215c6c;
        case 0x215c80u: goto label_215c80;
        case 0x215c94u: goto label_215c94;
        case 0x215ca8u: goto label_215ca8;
        case 0x215cb0u: goto label_215cb0;
        default: break;
    }

    ctx->pc = 0x215a90u;

label_215a90:
    // 0x215a90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x215a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x215a94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x215a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x215a98: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x215a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x215a9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x215a9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215aa0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x215aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x215aa4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x215AA4u;
    SET_GPR_U32(ctx, 31, 0x215AACu);
    ctx->pc = 0x215AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215AA4u;
    // 0x215aa8: 0x24840b68  addiu       $a0, $a0, 0xB68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x215AA4u, 0x215AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215AACu;
label_215aac:
    // 0x215aac: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x215aacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x215ab0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x215ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x215ab4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x215AB4u;
    SET_GPR_U32(ctx, 31, 0x215ABCu);
    ctx->pc = 0x215AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215AB4u;
    // 0x215ab8: 0x24840928  addiu       $a0, $a0, 0x928 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x215AB4u, 0x215ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215ABCu;
label_215abc:
    // 0x215abc: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x215abcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x215ac0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x215ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x215ac4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x215AC4u;
    SET_GPR_U32(ctx, 31, 0x215ACCu);
    ctx->pc = 0x215AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215AC4u;
    // 0x215ac8: 0x24840b88  addiu       $a0, $a0, 0xB88 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x215AC4u, 0x215ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215ACCu;
label_215acc:
    // 0x215acc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x215accu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x215ad0: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x215ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x215ad4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x215AD4u;
    SET_GPR_U32(ctx, 31, 0x215ADCu);
    ctx->pc = 0x215AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215AD4u;
    // 0x215ad8: 0x24840b98  addiu       $a0, $a0, 0xB98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x215AD4u, 0x215ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215ADCu;
label_215adc:
    // 0x215adc: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x215adcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x215ae0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x215ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x215ae4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x215AE4u;
    SET_GPR_U32(ctx, 31, 0x215AECu);
    ctx->pc = 0x215AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215AE4u;
    // 0x215ae8: 0x24840ba8  addiu       $a0, $a0, 0xBA8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x215AE4u, 0x215AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215AECu;
label_215aec:
    // 0x215aec: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x215aecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x215af0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x215af0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x215af4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x215AF4u;
    SET_GPR_U32(ctx, 31, 0x215AFCu);
    ctx->pc = 0x215AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215AF4u;
    // 0x215af8: 0x24840bb8  addiu       $a0, $a0, 0xBB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x215AF4u, 0x215AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215AFCu;
label_215afc:
    // 0x215afc: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x215afcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x215b00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x215b00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215b04: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x215b04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x215b08: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x215b08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x215b0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x215b0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215b10: 0x24840bc8  addiu       $a0, $a0, 0xBC8
    ctx->pc = 0x215b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3016));
    // 0x215b14: 0x8043e52  j           func_10F948
    ctx->pc = 0x215B14u;
    ctx->pc = 0x215B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215B14u;
    // 0x215b18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x215B1Cu;
    // 0x215b1c: 0x0  nop
    ctx->pc = 0x215b1cu;
    // NOP
    // 0x215b20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x215b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x215b24: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x215b24u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x215b28: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x215b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x215b2c: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x215b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x215b30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x215b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x215b34: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x215b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x215b38: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x215b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x215b3c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x215b3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215b40: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x215b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x215b44: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x215b44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215b48: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x215b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x215b4c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x215b4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215b50: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x215b50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215b54: 0x8cd30000  lw          $s3, 0x0($a2)
    ctx->pc = 0x215b54u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x215b58: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x215b58u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x215b5c: 0xc0844dc  jal         func_211370
    ctx->pc = 0x215B5Cu;
    SET_GPR_U32(ctx, 31, 0x215B64u);
    ctx->pc = 0x215B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215B5Cu;
    // 0x215b60: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x215B5Cu, 0x215B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215B64u;
label_215b64:
    // 0x215b64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x215b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215b68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x215b68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215b6c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x215b6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215b70: 0xc0844dc  jal         func_211370
    ctx->pc = 0x215B70u;
    SET_GPR_U32(ctx, 31, 0x215B78u);
    ctx->pc = 0x215B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215B70u;
    // 0x215b74: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x215B70u, 0x215B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215B78u;
label_215b78:
    // 0x215b78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x215b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215b7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x215b7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215b80: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x215b80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215b84: 0xc08447c  jal         func_2111F0
    ctx->pc = 0x215B84u;
    SET_GPR_U32(ctx, 31, 0x215B8Cu);
    ctx->pc = 0x215B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215B84u;
    // 0x215b88: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2111F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2111F0u, 0x215B84u, 0x215B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215B8Cu;
label_215b8c:
    // 0x215b8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x215b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215b90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x215b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215b94: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x215b94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215b98: 0xc0844dc  jal         func_211370
    ctx->pc = 0x215B98u;
    SET_GPR_U32(ctx, 31, 0x215BA0u);
    ctx->pc = 0x215B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215B98u;
    // 0x215b9c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x215B98u, 0x215BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215BA0u;
label_215ba0:
    // 0x215ba0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x215ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215ba4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x215ba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215ba8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x215ba8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215bac: 0xc0844dc  jal         func_211370
    ctx->pc = 0x215BACu;
    SET_GPR_U32(ctx, 31, 0x215BB4u);
    ctx->pc = 0x215BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215BACu;
    // 0x215bb0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x215BACu, 0x215BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215BB4u;
label_215bb4:
    // 0x215bb4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x215bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215bb8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x215bb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215bbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x215bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215bc0: 0xc08449a  jal         func_211268
    ctx->pc = 0x215BC0u;
    SET_GPR_U32(ctx, 31, 0x215BC8u);
    ctx->pc = 0x215BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215BC0u;
    // 0x215bc4: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211268u, 0x215BC0u, 0x215BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215BC8u;
label_215bc8:
    // 0x215bc8: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x215bc8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x215bcc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x215bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215bd0: 0xc0856a4  jal         func_215A90
    ctx->pc = 0x215BD0u;
    SET_GPR_U32(ctx, 31, 0x215BD8u);
    ctx->pc = 0x215BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215BD0u;
    // 0x215bd4: 0x26f9823  subu        $s3, $s3, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A90u;
    goto label_215a90;
    ctx->pc = 0x215BD8u;
label_215bd8:
    // 0x215bd8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x215bd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215bdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x215bdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215be0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x215be0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x215be4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x215be4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215be8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x215be8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x215bec: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x215becu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x215bf0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x215bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x215bf4: 0x3e00008  jr          $ra
    ctx->pc = 0x215BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215BF4u;
        // 0x215bf8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215BF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215BFCu;
    // 0x215bfc: 0x0  nop
    ctx->pc = 0x215bfcu;
    // NOP
    // 0x215c00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x215c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x215c04: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x215c04u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x215c08: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x215c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x215c0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x215c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x215c10: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x215c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x215c14: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x215c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x215c18: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x215c18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215c1c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x215c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x215c20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x215c20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215c24: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x215c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x215c28: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x215c28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215c2c: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x215c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x215c30: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x215c30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215c34: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x215c34u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x215c38: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x215c38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x215c3c: 0xc084612  jal         func_211848
    ctx->pc = 0x215C3Cu;
    SET_GPR_U32(ctx, 31, 0x215C44u);
    ctx->pc = 0x215C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215C3Cu;
    // 0x215c40: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x215C3Cu, 0x215C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215C44u;
label_215c44:
    // 0x215c44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x215c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215c48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x215c48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215c4c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x215c4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215c50: 0xc084612  jal         func_211848
    ctx->pc = 0x215C50u;
    SET_GPR_U32(ctx, 31, 0x215C58u);
    ctx->pc = 0x215C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215C50u;
    // 0x215c54: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x215C50u, 0x215C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215C58u;
label_215c58:
    // 0x215c58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x215c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215c5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x215c5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215c60: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x215c60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215c64: 0xc084582  jal         func_211608
    ctx->pc = 0x215C64u;
    SET_GPR_U32(ctx, 31, 0x215C6Cu);
    ctx->pc = 0x215C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215C64u;
    // 0x215c68: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211608u, 0x215C64u, 0x215C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215C6Cu;
label_215c6c:
    // 0x215c6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x215c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215c70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x215c70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215c74: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x215c74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215c78: 0xc084612  jal         func_211848
    ctx->pc = 0x215C78u;
    SET_GPR_U32(ctx, 31, 0x215C80u);
    ctx->pc = 0x215C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215C78u;
    // 0x215c7c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x215C78u, 0x215C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215C80u;
label_215c80:
    // 0x215c80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x215c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215c84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x215c84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215c88: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x215c88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215c8c: 0xc084612  jal         func_211848
    ctx->pc = 0x215C8Cu;
    SET_GPR_U32(ctx, 31, 0x215C94u);
    ctx->pc = 0x215C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215C8Cu;
    // 0x215c90: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x215C8Cu, 0x215C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215C94u;
label_215c94:
    // 0x215c94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x215c94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215c98: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x215c98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215c9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x215c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215ca0: 0xc0845c2  jal         func_211708
    ctx->pc = 0x215CA0u;
    SET_GPR_U32(ctx, 31, 0x215CA8u);
    ctx->pc = 0x215CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215CA0u;
    // 0x215ca4: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211708u, 0x215CA0u, 0x215CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215CA8u;
label_215ca8:
    // 0x215ca8: 0xc0856a4  jal         func_215A90
    ctx->pc = 0x215CA8u;
    SET_GPR_U32(ctx, 31, 0x215CB0u);
    ctx->pc = 0x215CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215CA8u;
    // 0x215cac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A90u;
    goto label_215a90;
    ctx->pc = 0x215CB0u;
label_215cb0:
    // 0x215cb0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x215cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x215cb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x215cb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x215cb8: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x215cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x215cbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x215cbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215cc0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x215cc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215cc4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x215cc4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x215cc8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x215cc8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x215ccc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x215cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x215cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x215CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215CD0u;
        // 0x215cd4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215CD8u;
}
