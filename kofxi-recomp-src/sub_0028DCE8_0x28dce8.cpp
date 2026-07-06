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

// Function: sub_0028DCE8
// Address: 0x28dce8 - 0x28e090
void sub_0028DCE8_0x28dce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028DCE8_0x28dce8");
#endif

    switch (ctx->pc) {
        case 0x28dcf8u: goto label_28dcf8;
        case 0x28dd04u: goto label_28dd04;
        case 0x28dd10u: goto label_28dd10;
        case 0x28dd20u: goto label_28dd20;
        case 0x28dd30u: goto label_28dd30;
        case 0x28dd3cu: goto label_28dd3c;
        case 0x28dd40u: goto label_28dd40;
        case 0x28dd50u: goto label_28dd50;
        case 0x28dd60u: goto label_28dd60;
        case 0x28dd70u: goto label_28dd70;
        case 0x28dd80u: goto label_28dd80;
        case 0x28dd90u: goto label_28dd90;
        case 0x28dda0u: goto label_28dda0;
        case 0x28ddb0u: goto label_28ddb0;
        case 0x28ddc0u: goto label_28ddc0;
        case 0x28ddd0u: goto label_28ddd0;
        case 0x28dde0u: goto label_28dde0;
        case 0x28ddf0u: goto label_28ddf0;
        case 0x28de00u: goto label_28de00;
        case 0x28de10u: goto label_28de10;
        case 0x28de20u: goto label_28de20;
        case 0x28de30u: goto label_28de30;
        case 0x28de40u: goto label_28de40;
        case 0x28de50u: goto label_28de50;
        case 0x28de60u: goto label_28de60;
        case 0x28de70u: goto label_28de70;
        case 0x28de80u: goto label_28de80;
        case 0x28de90u: goto label_28de90;
        case 0x28dea0u: goto label_28dea0;
        case 0x28deb0u: goto label_28deb0;
        case 0x28dec0u: goto label_28dec0;
        case 0x28ded0u: goto label_28ded0;
        case 0x28dee0u: goto label_28dee0;
        case 0x28def0u: goto label_28def0;
        case 0x28df00u: goto label_28df00;
        case 0x28df10u: goto label_28df10;
        case 0x28df20u: goto label_28df20;
        case 0x28df30u: goto label_28df30;
        case 0x28df40u: goto label_28df40;
        case 0x28df50u: goto label_28df50;
        case 0x28df60u: goto label_28df60;
        case 0x28df70u: goto label_28df70;
        case 0x28df80u: goto label_28df80;
        case 0x28df90u: goto label_28df90;
        case 0x28dfa0u: goto label_28dfa0;
        case 0x28dfb0u: goto label_28dfb0;
        case 0x28dfc0u: goto label_28dfc0;
        case 0x28dfd0u: goto label_28dfd0;
        case 0x28dfe0u: goto label_28dfe0;
        case 0x28dff0u: goto label_28dff0;
        case 0x28e000u: goto label_28e000;
        case 0x28e010u: goto label_28e010;
        case 0x28e020u: goto label_28e020;
        case 0x28e030u: goto label_28e030;
        case 0x28e040u: goto label_28e040;
        case 0x28e050u: goto label_28e050;
        case 0x28e060u: goto label_28e060;
        case 0x28e070u: goto label_28e070;
        case 0x28e080u: goto label_28e080;
        default: break;
    }

    ctx->pc = 0x28dce8u;

    // 0x28dce8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28dce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28dcec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28dcecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28dcf0: 0xc0a3824  jal         func_28E090
    ctx->pc = 0x28DCF0u;
    SET_GPR_U32(ctx, 31, 0x28DCF8u);
    ctx->pc = 0x28E090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E090u, 0x28DCF0u, 0x28DCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DCF8u;
label_28dcf8:
    // 0x28dcf8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28dcf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dcfc: 0xc0a382a  jal         func_28E0A8
    ctx->pc = 0x28DCFCu;
    SET_GPR_U32(ctx, 31, 0x28DD04u);
    ctx->pc = 0x28DD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DCFCu;
    // 0x28dd00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E0A8u, 0x28DCFCu, 0x28DD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DD04u;
label_28dd04:
    // 0x28dd04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x28dd04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28dd08: 0xc0a382a  jal         func_28E0A8
    ctx->pc = 0x28DD08u;
    SET_GPR_U32(ctx, 31, 0x28DD10u);
    ctx->pc = 0x28DD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DD08u;
    // 0x28dd0c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E0A8u, 0x28DD08u, 0x28DD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DD10u;
label_28dd10:
    // 0x28dd10: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x28dd10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x28dd14: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x28dd14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28dd18: 0xc0a3836  jal         func_28E0D8
    ctx->pc = 0x28DD18u;
    SET_GPR_U32(ctx, 31, 0x28DD20u);
    ctx->pc = 0x28DD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DD18u;
    // 0x28dd1c: 0x24a55768  addiu       $a1, $a1, 0x5768 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E0D8u, 0x28DD18u, 0x28DD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DD20u;
label_28dd20:
    // 0x28dd20: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x28dd20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x28dd24: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x28dd24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28dd28: 0xc0a3836  jal         func_28E0D8
    ctx->pc = 0x28DD28u;
    SET_GPR_U32(ctx, 31, 0x28DD30u);
    ctx->pc = 0x28DD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DD28u;
    // 0x28dd2c: 0x24a55820  addiu       $a1, $a1, 0x5820 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E0D8u, 0x28DD28u, 0x28DD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DD30u;
label_28dd30:
    // 0x28dd30: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x28dd30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x28dd34: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x28dd34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28dd38: 0xc0a3836  jal         func_28E0D8
label_28dd3c:
    if (ctx->pc == 0x28DD3Cu) {
        ctx->pc = 0x28DD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DD38u;
        // 0x28dd3c: 0x24a50360  addiu       $a1, $a1, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DD40u;
        goto label_28dd40;
    }
    ctx->pc = 0x28DD38u;
    SET_GPR_U32(ctx, 31, 0x28DD40u);
    ctx->pc = 0x28DD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DD38u;
    // 0x28dd3c: 0x24a50360  addiu       $a1, $a1, 0x360 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E0D8u, 0x28DD38u, 0x28DD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DD40u;
label_28dd40:
    // 0x28dd40: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x28dd40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x28dd44: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x28dd44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x28dd48: 0xc0a3836  jal         func_28E0D8
    ctx->pc = 0x28DD48u;
    SET_GPR_U32(ctx, 31, 0x28DD50u);
    ctx->pc = 0x28DD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DD48u;
    // 0x28dd4c: 0x24a50488  addiu       $a1, $a1, 0x488 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E0D8u, 0x28DD48u, 0x28DD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DD50u;
label_28dd50:
    // 0x28dd50: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x28dd50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x28dd54: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x28dd54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x28dd58: 0xc0a3836  jal         func_28E0D8
    ctx->pc = 0x28DD58u;
    SET_GPR_U32(ctx, 31, 0x28DD60u);
    ctx->pc = 0x28DD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DD58u;
    // 0x28dd5c: 0x24a55468  addiu       $a1, $a1, 0x5468 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E0D8u, 0x28DD58u, 0x28DD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DD60u;
label_28dd60:
    // 0x28dd60: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x28dd60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x28dd64: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x28dd64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x28dd68: 0xc0a3836  jal         func_28E0D8
    ctx->pc = 0x28DD68u;
    SET_GPR_U32(ctx, 31, 0x28DD70u);
    ctx->pc = 0x28DD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DD68u;
    // 0x28dd6c: 0x24a55548  addiu       $a1, $a1, 0x5548 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E0D8u, 0x28DD68u, 0x28DD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DD70u;
label_28dd70:
    // 0x28dd70: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x28dd70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x28dd74: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x28dd74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x28dd78: 0xc0a3836  jal         func_28E0D8
    ctx->pc = 0x28DD78u;
    SET_GPR_U32(ctx, 31, 0x28DD80u);
    ctx->pc = 0x28DD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DD78u;
    // 0x28dd7c: 0x24a55800  addiu       $a1, $a1, 0x5800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E0D8u, 0x28DD78u, 0x28DD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DD80u;
label_28dd80:
    // 0x28dd80: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x28dd80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x28dd84: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x28dd84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x28dd88: 0xc0a3836  jal         func_28E0D8
    ctx->pc = 0x28DD88u;
    SET_GPR_U32(ctx, 31, 0x28DD90u);
    ctx->pc = 0x28DD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DD88u;
    // 0x28dd8c: 0x24a5f5f8  addiu       $a1, $a1, -0xA08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E0D8u, 0x28DD88u, 0x28DD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DD90u;
label_28dd90:
    // 0x28dd90: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x28dd90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x28dd94: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x28dd94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x28dd98: 0xc0a3836  jal         func_28E0D8
    ctx->pc = 0x28DD98u;
    SET_GPR_U32(ctx, 31, 0x28DDA0u);
    ctx->pc = 0x28DD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DD98u;
    // 0x28dd9c: 0x24a5f0f8  addiu       $a1, $a1, -0xF08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E0D8u, 0x28DD98u, 0x28DDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DDA0u;
label_28dda0:
    // 0x28dda0: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x28dda0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x28dda4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x28dda4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x28dda8: 0xc0a3836  jal         func_28E0D8
    ctx->pc = 0x28DDA8u;
    SET_GPR_U32(ctx, 31, 0x28DDB0u);
    ctx->pc = 0x28DDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DDA8u;
    // 0x28ddac: 0x24a5f120  addiu       $a1, $a1, -0xEE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E0D8u, 0x28DDA8u, 0x28DDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DDB0u;
label_28ddb0:
    // 0x28ddb0: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x28ddb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x28ddb4: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x28ddb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x28ddb8: 0xc0a3836  jal         func_28E0D8
    ctx->pc = 0x28DDB8u;
    SET_GPR_U32(ctx, 31, 0x28DDC0u);
    ctx->pc = 0x28DDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DDB8u;
    // 0x28ddbc: 0x24a5f130  addiu       $a1, $a1, -0xED0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E0D8u, 0x28DDB8u, 0x28DDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DDC0u;
label_28ddc0:
    // 0x28ddc0: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x28ddc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x28ddc4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x28ddc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x28ddc8: 0xc0a3836  jal         func_28E0D8
    ctx->pc = 0x28DDC8u;
    SET_GPR_U32(ctx, 31, 0x28DDD0u);
    ctx->pc = 0x28DDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DDC8u;
    // 0x28ddcc: 0x24a5f3e0  addiu       $a1, $a1, -0xC20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E0D8u, 0x28DDC8u, 0x28DDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DDD0u;
label_28ddd0:
    // 0x28ddd0: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x28ddd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
    // 0x28ddd4: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x28ddd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x28ddd8: 0xc0a3836  jal         func_28E0D8
    ctx->pc = 0x28DDD8u;
    SET_GPR_U32(ctx, 31, 0x28DDE0u);
    ctx->pc = 0x28DDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DDD8u;
    // 0x28dddc: 0x24a5d920  addiu       $a1, $a1, -0x26E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E0D8u, 0x28DDD8u, 0x28DDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DDE0u;
label_28dde0:
    // 0x28dde0: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x28dde0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
    // 0x28dde4: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x28dde4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x28dde8: 0xc0a3836  jal         func_28E0D8
    ctx->pc = 0x28DDE8u;
    SET_GPR_U32(ctx, 31, 0x28DDF0u);
    ctx->pc = 0x28DDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DDE8u;
    // 0x28ddec: 0x24a5da90  addiu       $a1, $a1, -0x2570 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E0D8u, 0x28DDE8u, 0x28DDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DDF0u;
label_28ddf0:
    // 0x28ddf0: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x28ddf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
    // 0x28ddf4: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x28ddf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x28ddf8: 0xc0a3836  jal         func_28E0D8
    ctx->pc = 0x28DDF8u;
    SET_GPR_U32(ctx, 31, 0x28DE00u);
    ctx->pc = 0x28DDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DDF8u;
    // 0x28ddfc: 0x24a5daf8  addiu       $a1, $a1, -0x2508 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E0D8u, 0x28DDF8u, 0x28DE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DE00u;
label_28de00:
    // 0x28de00: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x28de00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
    // 0x28de04: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x28de04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x28de08: 0xc0a3836  jal         func_28E0D8
    ctx->pc = 0x28DE08u;
    SET_GPR_U32(ctx, 31, 0x28DE10u);
    ctx->pc = 0x28DE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DE08u;
    // 0x28de0c: 0x24a524e0  addiu       $a1, $a1, 0x24E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E0D8u, 0x28DE08u, 0x28DE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DE10u;
label_28de10:
    // 0x28de10: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x28de10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
    // 0x28de14: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x28de14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x28de18: 0xc0a3836  jal         func_28E0D8
    ctx->pc = 0x28DE18u;
    SET_GPR_U32(ctx, 31, 0x28DE20u);
    ctx->pc = 0x28DE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DE18u;
    // 0x28de1c: 0x24a52578  addiu       $a1, $a1, 0x2578 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E0D8u, 0x28DE18u, 0x28DE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DE20u;
label_28de20:
    // 0x28de20: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x28de20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x28de24: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x28de24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x28de28: 0xc0a3836  jal         func_28E0D8
    ctx->pc = 0x28DE28u;
    SET_GPR_U32(ctx, 31, 0x28DE30u);
    ctx->pc = 0x28DE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DE28u;
    // 0x28de2c: 0x24a50428  addiu       $a1, $a1, 0x428 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E0D8u, 0x28DE28u, 0x28DE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DE30u;
label_28de30:
    // 0x28de30: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x28de30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x28de34: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x28de34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x28de38: 0xc0a3836  jal         func_28E0D8
    ctx->pc = 0x28DE38u;
    SET_GPR_U32(ctx, 31, 0x28DE40u);
    ctx->pc = 0x28DE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DE38u;
    // 0x28de3c: 0x24a5f290  addiu       $a1, $a1, -0xD70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E0D8u, 0x28DE38u, 0x28DE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DE40u;
label_28de40:
    // 0x28de40: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x28de40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x28de44: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x28de44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x28de48: 0xc0a3836  jal         func_28E0D8
    ctx->pc = 0x28DE48u;
    SET_GPR_U32(ctx, 31, 0x28DE50u);
    ctx->pc = 0x28DE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DE48u;
    // 0x28de4c: 0x24a5f150  addiu       $a1, $a1, -0xEB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E0D8u, 0x28DE48u, 0x28DE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DE50u;
label_28de50:
    // 0x28de50: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x28de50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
    // 0x28de54: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x28de54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x28de58: 0xc0a3836  jal         func_28E0D8
    ctx->pc = 0x28DE58u;
    SET_GPR_U32(ctx, 31, 0x28DE60u);
    ctx->pc = 0x28DE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DE58u;
    // 0x28de5c: 0x24a52228  addiu       $a1, $a1, 0x2228 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E0D8u, 0x28DE58u, 0x28DE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DE60u;
label_28de60:
    // 0x28de60: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x28de60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
    // 0x28de64: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x28de64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x28de68: 0xc0a3836  jal         func_28E0D8
    ctx->pc = 0x28DE68u;
    SET_GPR_U32(ctx, 31, 0x28DE70u);
    ctx->pc = 0x28DE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DE68u;
    // 0x28de6c: 0x24a51fe0  addiu       $a1, $a1, 0x1FE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E0D8u, 0x28DE68u, 0x28DE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DE70u;
label_28de70:
    // 0x28de70: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x28de70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
    // 0x28de74: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x28de74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x28de78: 0xc0a3836  jal         func_28E0D8
    ctx->pc = 0x28DE78u;
    SET_GPR_U32(ctx, 31, 0x28DE80u);
    ctx->pc = 0x28DE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DE78u;
    // 0x28de7c: 0x24a5db60  addiu       $a1, $a1, -0x24A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E0D8u, 0x28DE78u, 0x28DE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DE80u;
label_28de80:
    // 0x28de80: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x28de80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x28de84: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x28de84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x28de88: 0xc0a3836  jal         func_28E0D8
    ctx->pc = 0x28DE88u;
    SET_GPR_U32(ctx, 31, 0x28DE90u);
    ctx->pc = 0x28DE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DE88u;
    // 0x28de8c: 0x24a51d68  addiu       $a1, $a1, 0x1D68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E0D8u, 0x28DE88u, 0x28DE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DE90u;
label_28de90:
    // 0x28de90: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x28de90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x28de94: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x28de94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x28de98: 0xc0a3836  jal         func_28E0D8
    ctx->pc = 0x28DE98u;
    SET_GPR_U32(ctx, 31, 0x28DEA0u);
    ctx->pc = 0x28DE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DE98u;
    // 0x28de9c: 0x24a51e80  addiu       $a1, $a1, 0x1E80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E0D8u, 0x28DE98u, 0x28DEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DEA0u;
label_28dea0:
    // 0x28dea0: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x28dea0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
    // 0x28dea4: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x28dea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x28dea8: 0xc0a3836  jal         func_28E0D8
    ctx->pc = 0x28DEA8u;
    SET_GPR_U32(ctx, 31, 0x28DEB0u);
    ctx->pc = 0x28DEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DEA8u;
    // 0x28deac: 0x24a5dbe0  addiu       $a1, $a1, -0x2420 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E0D8u, 0x28DEA8u, 0x28DEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DEB0u;
label_28deb0:
    // 0x28deb0: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x28deb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x28deb4: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x28deb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x28deb8: 0xc0a3836  jal         func_28E0D8
    ctx->pc = 0x28DEB8u;
    SET_GPR_U32(ctx, 31, 0x28DEC0u);
    ctx->pc = 0x28DEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DEB8u;
    // 0x28debc: 0x24a5fc00  addiu       $a1, $a1, -0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E0D8u, 0x28DEB8u, 0x28DEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DEC0u;
label_28dec0:
    // 0x28dec0: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x28dec0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
    // 0x28dec4: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x28dec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x28dec8: 0xc0a3836  jal         func_28E0D8
    ctx->pc = 0x28DEC8u;
    SET_GPR_U32(ctx, 31, 0x28DED0u);
    ctx->pc = 0x28DECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DEC8u;
    // 0x28decc: 0x24a5d988  addiu       $a1, $a1, -0x2678 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E0D8u, 0x28DEC8u, 0x28DED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DED0u;
label_28ded0:
    // 0x28ded0: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x28ded0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
    // 0x28ded4: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x28ded4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x28ded8: 0xc0a3836  jal         func_28E0D8
    ctx->pc = 0x28DED8u;
    SET_GPR_U32(ctx, 31, 0x28DEE0u);
    ctx->pc = 0x28DEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DED8u;
    // 0x28dedc: 0x24a5d9b8  addiu       $a1, $a1, -0x2648 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E0D8u, 0x28DED8u, 0x28DEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DEE0u;
label_28dee0:
    // 0x28dee0: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x28dee0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x28dee4: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x28dee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x28dee8: 0xc0a3836  jal         func_28E0D8
    ctx->pc = 0x28DEE8u;
    SET_GPR_U32(ctx, 31, 0x28DEF0u);
    ctx->pc = 0x28DEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DEE8u;
    // 0x28deec: 0x24a501d0  addiu       $a1, $a1, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E0D8u, 0x28DEE8u, 0x28DEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DEF0u;
label_28def0:
    // 0x28def0: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x28def0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x28def4: 0x24040021  addiu       $a0, $zero, 0x21
    ctx->pc = 0x28def4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x28def8: 0xc0a3836  jal         func_28E0D8
    ctx->pc = 0x28DEF8u;
    SET_GPR_U32(ctx, 31, 0x28DF00u);
    ctx->pc = 0x28DEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DEF8u;
    // 0x28defc: 0x24a5d130  addiu       $a1, $a1, -0x2ED0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E0D8u, 0x28DEF8u, 0x28DF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DF00u;
label_28df00:
    // 0x28df00: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x28df00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x28df04: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x28df04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x28df08: 0xc0a3836  jal         func_28E0D8
    ctx->pc = 0x28DF08u;
    SET_GPR_U32(ctx, 31, 0x28DF10u);
    ctx->pc = 0x28DF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DF08u;
    // 0x28df0c: 0x24a503c8  addiu       $a1, $a1, 0x3C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E0D8u, 0x28DF08u, 0x28DF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DF10u;
label_28df10:
    // 0x28df10: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x28df10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x28df14: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x28df14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x28df18: 0xc0a3836  jal         func_28E0D8
    ctx->pc = 0x28DF18u;
    SET_GPR_U32(ctx, 31, 0x28DF20u);
    ctx->pc = 0x28DF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DF18u;
    // 0x28df1c: 0x24a5f950  addiu       $a1, $a1, -0x6B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E0D8u, 0x28DF18u, 0x28DF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DF20u;
label_28df20:
    // 0x28df20: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x28df20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x28df24: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x28df24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x28df28: 0xc0a3836  jal         func_28E0D8
    ctx->pc = 0x28DF28u;
    SET_GPR_U32(ctx, 31, 0x28DF30u);
    ctx->pc = 0x28DF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DF28u;
    // 0x28df2c: 0x24a5fa38  addiu       $a1, $a1, -0x5C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E0D8u, 0x28DF28u, 0x28DF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DF30u;
label_28df30:
    // 0x28df30: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x28df30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x28df34: 0x24040025  addiu       $a0, $zero, 0x25
    ctx->pc = 0x28df34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x28df38: 0xc0a3836  jal         func_28E0D8
    ctx->pc = 0x28DF38u;
    SET_GPR_U32(ctx, 31, 0x28DF40u);
    ctx->pc = 0x28DF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DF38u;
    // 0x28df3c: 0x24a50658  addiu       $a1, $a1, 0x658 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E0D8u, 0x28DF38u, 0x28DF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DF40u;
label_28df40:
    // 0x28df40: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x28df40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x28df44: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x28df44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x28df48: 0xc0a3836  jal         func_28E0D8
    ctx->pc = 0x28DF48u;
    SET_GPR_U32(ctx, 31, 0x28DF50u);
    ctx->pc = 0x28DF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DF48u;
    // 0x28df4c: 0x24a505c8  addiu       $a1, $a1, 0x5C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E0D8u, 0x28DF48u, 0x28DF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DF50u;
label_28df50:
    // 0x28df50: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x28df50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
    // 0x28df54: 0x24040027  addiu       $a0, $zero, 0x27
    ctx->pc = 0x28df54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x28df58: 0xc0a3836  jal         func_28E0D8
    ctx->pc = 0x28DF58u;
    SET_GPR_U32(ctx, 31, 0x28DF60u);
    ctx->pc = 0x28DF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DF58u;
    // 0x28df5c: 0x24a5dc48  addiu       $a1, $a1, -0x23B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E0D8u, 0x28DF58u, 0x28DF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DF60u;
label_28df60:
    // 0x28df60: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x28df60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x28df64: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x28df64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x28df68: 0xc0a3836  jal         func_28E0D8
    ctx->pc = 0x28DF68u;
    SET_GPR_U32(ctx, 31, 0x28DF70u);
    ctx->pc = 0x28DF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DF68u;
    // 0x28df6c: 0x24a50038  addiu       $a1, $a1, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E0D8u, 0x28DF68u, 0x28DF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DF70u;
label_28df70:
    // 0x28df70: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x28df70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x28df74: 0x24040029  addiu       $a0, $zero, 0x29
    ctx->pc = 0x28df74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x28df78: 0xc0a3836  jal         func_28E0D8
    ctx->pc = 0x28DF78u;
    SET_GPR_U32(ctx, 31, 0x28DF80u);
    ctx->pc = 0x28DF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DF78u;
    // 0x28df7c: 0x24a50088  addiu       $a1, $a1, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E0D8u, 0x28DF78u, 0x28DF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DF80u;
label_28df80:
    // 0x28df80: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x28df80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x28df84: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x28df84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x28df88: 0xc0a3836  jal         func_28E0D8
    ctx->pc = 0x28DF88u;
    SET_GPR_U32(ctx, 31, 0x28DF90u);
    ctx->pc = 0x28DF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DF88u;
    // 0x28df8c: 0x24a50108  addiu       $a1, $a1, 0x108 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E0D8u, 0x28DF88u, 0x28DF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DF90u;
label_28df90:
    // 0x28df90: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x28df90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x28df94: 0x2404002b  addiu       $a0, $zero, 0x2B
    ctx->pc = 0x28df94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x28df98: 0xc0a3836  jal         func_28E0D8
    ctx->pc = 0x28DF98u;
    SET_GPR_U32(ctx, 31, 0x28DFA0u);
    ctx->pc = 0x28DF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DF98u;
    // 0x28df9c: 0x24a50140  addiu       $a1, $a1, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E0D8u, 0x28DF98u, 0x28DFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DFA0u;
label_28dfa0:
    // 0x28dfa0: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x28dfa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x28dfa4: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x28dfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x28dfa8: 0xc0a3836  jal         func_28E0D8
    ctx->pc = 0x28DFA8u;
    SET_GPR_U32(ctx, 31, 0x28DFB0u);
    ctx->pc = 0x28DFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DFA8u;
    // 0x28dfac: 0x24a5ff60  addiu       $a1, $a1, -0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E0D8u, 0x28DFA8u, 0x28DFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DFB0u;
label_28dfb0:
    // 0x28dfb0: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x28dfb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x28dfb4: 0x2404002d  addiu       $a0, $zero, 0x2D
    ctx->pc = 0x28dfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x28dfb8: 0xc0a3836  jal         func_28E0D8
    ctx->pc = 0x28DFB8u;
    SET_GPR_U32(ctx, 31, 0x28DFC0u);
    ctx->pc = 0x28DFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DFB8u;
    // 0x28dfbc: 0x24a5ffb0  addiu       $a1, $a1, -0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E0D8u, 0x28DFB8u, 0x28DFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DFC0u;
label_28dfc0:
    // 0x28dfc0: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x28dfc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x28dfc4: 0x2404002e  addiu       $a0, $zero, 0x2E
    ctx->pc = 0x28dfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x28dfc8: 0xc0a3836  jal         func_28E0D8
    ctx->pc = 0x28DFC8u;
    SET_GPR_U32(ctx, 31, 0x28DFD0u);
    ctx->pc = 0x28DFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DFC8u;
    // 0x28dfcc: 0x24a5fff8  addiu       $a1, $a1, -0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E0D8u, 0x28DFC8u, 0x28DFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DFD0u;
label_28dfd0:
    // 0x28dfd0: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x28dfd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x28dfd4: 0x2404002f  addiu       $a0, $zero, 0x2F
    ctx->pc = 0x28dfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x28dfd8: 0xc0a3836  jal         func_28E0D8
    ctx->pc = 0x28DFD8u;
    SET_GPR_U32(ctx, 31, 0x28DFE0u);
    ctx->pc = 0x28DFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DFD8u;
    // 0x28dfdc: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E0D8u, 0x28DFD8u, 0x28DFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DFE0u;
label_28dfe0:
    // 0x28dfe0: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x28dfe0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x28dfe4: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x28dfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x28dfe8: 0xc0a3836  jal         func_28E0D8
    ctx->pc = 0x28DFE8u;
    SET_GPR_U32(ctx, 31, 0x28DFF0u);
    ctx->pc = 0x28DFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DFE8u;
    // 0x28dfec: 0x24a501b0  addiu       $a1, $a1, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E0D8u, 0x28DFE8u, 0x28DFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DFF0u;
label_28dff0:
    // 0x28dff0: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x28dff0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x28dff4: 0x24040031  addiu       $a0, $zero, 0x31
    ctx->pc = 0x28dff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x28dff8: 0xc0a3836  jal         func_28E0D8
    ctx->pc = 0x28DFF8u;
    SET_GPR_U32(ctx, 31, 0x28E000u);
    ctx->pc = 0x28DFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DFF8u;
    // 0x28dffc: 0x24a501b8  addiu       $a1, $a1, 0x1B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E0D8u, 0x28DFF8u, 0x28E000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E000u;
label_28e000:
    // 0x28e000: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x28e000u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x28e004: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x28e004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x28e008: 0xc0a3836  jal         func_28E0D8
    ctx->pc = 0x28E008u;
    SET_GPR_U32(ctx, 31, 0x28E010u);
    ctx->pc = 0x28E00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E008u;
    // 0x28e00c: 0x24a501c0  addiu       $a1, $a1, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E0D8u, 0x28E008u, 0x28E010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E010u;
label_28e010:
    // 0x28e010: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x28e010u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x28e014: 0x2404003b  addiu       $a0, $zero, 0x3B
    ctx->pc = 0x28e014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x28e018: 0xc0a3836  jal         func_28E0D8
    ctx->pc = 0x28E018u;
    SET_GPR_U32(ctx, 31, 0x28E020u);
    ctx->pc = 0x28E01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E018u;
    // 0x28e01c: 0x24a501c8  addiu       $a1, $a1, 0x1C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E0D8u, 0x28E018u, 0x28E020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E020u;
label_28e020:
    // 0x28e020: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x28e020u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
    // 0x28e024: 0x24040033  addiu       $a0, $zero, 0x33
    ctx->pc = 0x28e024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x28e028: 0xc0a3836  jal         func_28E0D8
    ctx->pc = 0x28E028u;
    SET_GPR_U32(ctx, 31, 0x28E030u);
    ctx->pc = 0x28E02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E028u;
    // 0x28e02c: 0x24a50cd0  addiu       $a1, $a1, 0xCD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E0D8u, 0x28E028u, 0x28E030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E030u;
label_28e030:
    // 0x28e030: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x28e030u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x28e034: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x28e034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x28e038: 0xc0a3836  jal         func_28E0D8
    ctx->pc = 0x28E038u;
    SET_GPR_U32(ctx, 31, 0x28E040u);
    ctx->pc = 0x28E03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E038u;
    // 0x28e03c: 0x24a5bdc0  addiu       $a1, $a1, -0x4240 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E0D8u, 0x28E038u, 0x28E040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E040u;
label_28e040:
    // 0x28e040: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x28e040u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x28e044: 0x24040035  addiu       $a0, $zero, 0x35
    ctx->pc = 0x28e044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x28e048: 0xc0a3836  jal         func_28E0D8
    ctx->pc = 0x28E048u;
    SET_GPR_U32(ctx, 31, 0x28E050u);
    ctx->pc = 0x28E04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E048u;
    // 0x28e04c: 0x24a5be28  addiu       $a1, $a1, -0x41D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E0D8u, 0x28E048u, 0x28E050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E050u;
label_28e050:
    // 0x28e050: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x28e050u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
    // 0x28e054: 0x24040036  addiu       $a0, $zero, 0x36
    ctx->pc = 0x28e054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x28e058: 0xc0a3836  jal         func_28E0D8
    ctx->pc = 0x28E058u;
    SET_GPR_U32(ctx, 31, 0x28E060u);
    ctx->pc = 0x28E05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E058u;
    // 0x28e05c: 0x24a5dc58  addiu       $a1, $a1, -0x23A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E0D8u, 0x28E058u, 0x28E060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E060u;
label_28e060:
    // 0x28e060: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x28e060u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x28e064: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x28e064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x28e068: 0xc0a3836  jal         func_28E0D8
    ctx->pc = 0x28E068u;
    SET_GPR_U32(ctx, 31, 0x28E070u);
    ctx->pc = 0x28E06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E068u;
    // 0x28e06c: 0x24a5bde0  addiu       $a1, $a1, -0x4220 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E0D8u, 0x28E068u, 0x28E070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E070u;
label_28e070:
    // 0x28e070: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x28e070u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x28e074: 0x24040038  addiu       $a0, $zero, 0x38
    ctx->pc = 0x28e074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x28e078: 0xc0a3836  jal         func_28E0D8
    ctx->pc = 0x28E078u;
    SET_GPR_U32(ctx, 31, 0x28E080u);
    ctx->pc = 0x28E07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E078u;
    // 0x28e07c: 0x24a5f5b8  addiu       $a1, $a1, -0xA48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E0D8u, 0x28E078u, 0x28E080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E080u;
label_28e080:
    // 0x28e080: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28e080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28e084: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28e084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e088: 0x3e00008  jr          $ra
    ctx->pc = 0x28E088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E088u;
        // 0x28e08c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E090u;
}
