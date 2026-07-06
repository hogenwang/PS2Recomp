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

// Function: sub_00214DC8
// Address: 0x214dc8 - 0x215010
void sub_00214DC8_0x214dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214DC8_0x214dc8");
#endif

    switch (ctx->pc) {
        case 0x214de4u: goto label_214de4;
        case 0x214df4u: goto label_214df4;
        case 0x214e04u: goto label_214e04;
        case 0x214e14u: goto label_214e14;
        case 0x214e24u: goto label_214e24;
        case 0x214e34u: goto label_214e34;
        case 0x214e9cu: goto label_214e9c;
        case 0x214eb0u: goto label_214eb0;
        case 0x214ec4u: goto label_214ec4;
        case 0x214ed8u: goto label_214ed8;
        case 0x214eecu: goto label_214eec;
        case 0x214f00u: goto label_214f00;
        case 0x214f10u: goto label_214f10;
        case 0x214f7cu: goto label_214f7c;
        case 0x214f90u: goto label_214f90;
        case 0x214fa4u: goto label_214fa4;
        case 0x214fb8u: goto label_214fb8;
        case 0x214fccu: goto label_214fcc;
        case 0x214fe0u: goto label_214fe0;
        case 0x214fe8u: goto label_214fe8;
        default: break;
    }

    ctx->pc = 0x214dc8u;

label_214dc8:
    // 0x214dc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x214dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x214dcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x214dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x214dd0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x214dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x214dd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x214dd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214dd8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x214dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x214ddc: 0xc043e52  jal         func_10F948
    ctx->pc = 0x214DDCu;
    SET_GPR_U32(ctx, 31, 0x214DE4u);
    ctx->pc = 0x214DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214DDCu;
    // 0x214de0: 0x248409c8  addiu       $a0, $a0, 0x9C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x214DDCu, 0x214DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214DE4u;
label_214de4:
    // 0x214de4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x214de4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x214de8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x214de8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x214dec: 0xc043e52  jal         func_10F948
    ctx->pc = 0x214DECu;
    SET_GPR_U32(ctx, 31, 0x214DF4u);
    ctx->pc = 0x214DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214DECu;
    // 0x214df0: 0x24840928  addiu       $a0, $a0, 0x928 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x214DECu, 0x214DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214DF4u;
label_214df4:
    // 0x214df4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x214df4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x214df8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x214df8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x214dfc: 0xc043e52  jal         func_10F948
    ctx->pc = 0x214DFCu;
    SET_GPR_U32(ctx, 31, 0x214E04u);
    ctx->pc = 0x214E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214DFCu;
    // 0x214e00: 0x248409e8  addiu       $a0, $a0, 0x9E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x214DFCu, 0x214E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214E04u;
label_214e04:
    // 0x214e04: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x214e04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x214e08: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x214e08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x214e0c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x214E0Cu;
    SET_GPR_U32(ctx, 31, 0x214E14u);
    ctx->pc = 0x214E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214E0Cu;
    // 0x214e10: 0x248409f8  addiu       $a0, $a0, 0x9F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x214E0Cu, 0x214E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214E14u;
label_214e14:
    // 0x214e14: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x214e14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x214e18: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x214e18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x214e1c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x214E1Cu;
    SET_GPR_U32(ctx, 31, 0x214E24u);
    ctx->pc = 0x214E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214E1Cu;
    // 0x214e20: 0x248408d8  addiu       $a0, $a0, 0x8D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x214E1Cu, 0x214E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214E24u;
label_214e24:
    // 0x214e24: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x214e24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x214e28: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x214e28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x214e2c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x214E2Cu;
    SET_GPR_U32(ctx, 31, 0x214E34u);
    ctx->pc = 0x214E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214E2Cu;
    // 0x214e30: 0x248408e8  addiu       $a0, $a0, 0x8E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x214E2Cu, 0x214E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214E34u;
label_214e34:
    // 0x214e34: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x214e34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x214e38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x214e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214e3c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x214e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x214e40: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x214e40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x214e44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x214e44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214e48: 0x248408f8  addiu       $a0, $a0, 0x8F8
    ctx->pc = 0x214e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2296));
    // 0x214e4c: 0x8043e52  j           func_10F948
    ctx->pc = 0x214E4Cu;
    ctx->pc = 0x214E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214E4Cu;
    // 0x214e50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x214E54u;
    // 0x214e54: 0x0  nop
    ctx->pc = 0x214e54u;
    // NOP
    // 0x214e58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x214e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x214e5c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x214e5cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x214e60: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x214e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x214e64: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x214e64u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x214e68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x214e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x214e6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x214e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x214e70: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x214e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x214e74: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x214e74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214e78: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x214e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x214e7c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x214e7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214e80: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x214e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x214e84: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x214e84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214e88: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x214e88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214e8c: 0x8cd30000  lw          $s3, 0x0($a2)
    ctx->pc = 0x214e8cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x214e90: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x214e90u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x214e94: 0xc0844dc  jal         func_211370
    ctx->pc = 0x214E94u;
    SET_GPR_U32(ctx, 31, 0x214E9Cu);
    ctx->pc = 0x214E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214E94u;
    // 0x214e98: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x214E94u, 0x214E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214E9Cu;
label_214e9c:
    // 0x214e9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x214e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214ea0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x214ea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214ea4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x214ea4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214ea8: 0xc0844dc  jal         func_211370
    ctx->pc = 0x214EA8u;
    SET_GPR_U32(ctx, 31, 0x214EB0u);
    ctx->pc = 0x214EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214EA8u;
    // 0x214eac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x214EA8u, 0x214EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214EB0u;
label_214eb0:
    // 0x214eb0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x214eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214eb4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x214eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214eb8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x214eb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214ebc: 0xc0844dc  jal         func_211370
    ctx->pc = 0x214EBCu;
    SET_GPR_U32(ctx, 31, 0x214EC4u);
    ctx->pc = 0x214EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214EBCu;
    // 0x214ec0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x214EBCu, 0x214EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214EC4u;
label_214ec4:
    // 0x214ec4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x214ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214ec8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x214ec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214ecc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x214eccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214ed0: 0xc0844dc  jal         func_211370
    ctx->pc = 0x214ED0u;
    SET_GPR_U32(ctx, 31, 0x214ED8u);
    ctx->pc = 0x214ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214ED0u;
    // 0x214ed4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x214ED0u, 0x214ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214ED8u;
label_214ed8:
    // 0x214ed8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x214ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214edc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x214edcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214ee0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x214ee0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214ee4: 0xc0844dc  jal         func_211370
    ctx->pc = 0x214EE4u;
    SET_GPR_U32(ctx, 31, 0x214EECu);
    ctx->pc = 0x214EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214EE4u;
    // 0x214ee8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x214EE4u, 0x214EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214EECu;
label_214eec:
    // 0x214eec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x214eecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214ef0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x214ef0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214ef4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x214ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214ef8: 0xc08449a  jal         func_211268
    ctx->pc = 0x214EF8u;
    SET_GPR_U32(ctx, 31, 0x214F00u);
    ctx->pc = 0x214EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214EF8u;
    // 0x214efc: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211268u, 0x214EF8u, 0x214F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214F00u;
label_214f00:
    // 0x214f00: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x214f00u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x214f04: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x214f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214f08: 0xc085372  jal         func_214DC8
    ctx->pc = 0x214F08u;
    SET_GPR_U32(ctx, 31, 0x214F10u);
    ctx->pc = 0x214F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214F08u;
    // 0x214f0c: 0x26f9823  subu        $s3, $s3, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214DC8u;
    goto label_214dc8;
    ctx->pc = 0x214F10u;
label_214f10:
    // 0x214f10: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x214f10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214f14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x214f14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214f18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x214f18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x214f1c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x214f1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214f20: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x214f20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x214f24: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x214f24u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x214f28: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x214f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x214f2c: 0x3e00008  jr          $ra
    ctx->pc = 0x214F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214F2Cu;
        // 0x214f30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214F34u;
    // 0x214f34: 0x0  nop
    ctx->pc = 0x214f34u;
    // NOP
    // 0x214f38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x214f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x214f3c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x214f3cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x214f40: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x214f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x214f44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x214f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x214f48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x214f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x214f4c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x214f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x214f50: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x214f50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214f54: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x214f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x214f58: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x214f58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214f5c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x214f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x214f60: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x214f60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214f64: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x214f64u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x214f68: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x214f68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214f6c: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x214f6cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x214f70: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x214f70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x214f74: 0xc084612  jal         func_211848
    ctx->pc = 0x214F74u;
    SET_GPR_U32(ctx, 31, 0x214F7Cu);
    ctx->pc = 0x214F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214F74u;
    // 0x214f78: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x214F74u, 0x214F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214F7Cu;
label_214f7c:
    // 0x214f7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x214f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214f80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x214f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214f84: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x214f84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214f88: 0xc084612  jal         func_211848
    ctx->pc = 0x214F88u;
    SET_GPR_U32(ctx, 31, 0x214F90u);
    ctx->pc = 0x214F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214F88u;
    // 0x214f8c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x214F88u, 0x214F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214F90u;
label_214f90:
    // 0x214f90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x214f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214f94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x214f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214f98: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x214f98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214f9c: 0xc084612  jal         func_211848
    ctx->pc = 0x214F9Cu;
    SET_GPR_U32(ctx, 31, 0x214FA4u);
    ctx->pc = 0x214FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214F9Cu;
    // 0x214fa0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x214F9Cu, 0x214FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214FA4u;
label_214fa4:
    // 0x214fa4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x214fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214fa8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x214fa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214fac: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x214facu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214fb0: 0xc084612  jal         func_211848
    ctx->pc = 0x214FB0u;
    SET_GPR_U32(ctx, 31, 0x214FB8u);
    ctx->pc = 0x214FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214FB0u;
    // 0x214fb4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x214FB0u, 0x214FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214FB8u;
label_214fb8:
    // 0x214fb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x214fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214fbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x214fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214fc0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x214fc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214fc4: 0xc084612  jal         func_211848
    ctx->pc = 0x214FC4u;
    SET_GPR_U32(ctx, 31, 0x214FCCu);
    ctx->pc = 0x214FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214FC4u;
    // 0x214fc8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x214FC4u, 0x214FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214FCCu;
label_214fcc:
    // 0x214fcc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x214fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214fd0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x214fd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214fd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x214fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214fd8: 0xc0845c2  jal         func_211708
    ctx->pc = 0x214FD8u;
    SET_GPR_U32(ctx, 31, 0x214FE0u);
    ctx->pc = 0x214FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214FD8u;
    // 0x214fdc: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211708u, 0x214FD8u, 0x214FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214FE0u;
label_214fe0:
    // 0x214fe0: 0xc085372  jal         func_214DC8
    ctx->pc = 0x214FE0u;
    SET_GPR_U32(ctx, 31, 0x214FE8u);
    ctx->pc = 0x214FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214FE0u;
    // 0x214fe4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214DC8u;
    goto label_214dc8;
    ctx->pc = 0x214FE8u;
label_214fe8:
    // 0x214fe8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x214fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x214fec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x214fecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x214ff0: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x214ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x214ff4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x214ff4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214ff8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x214ff8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214ffc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x214ffcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x215000: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x215000u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x215004: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x215004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x215008: 0x3e00008  jr          $ra
    ctx->pc = 0x215008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21500Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215008u;
        // 0x21500c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215010u;
}
