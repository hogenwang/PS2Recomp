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

// Function: sub_00117558
// Address: 0x117558 - 0x1175d0
void sub_00117558_0x117558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117558_0x117558");
#endif

    switch (ctx->pc) {
        case 0x11756cu: goto label_11756c;
        case 0x1175a4u: goto label_1175a4;
        case 0x1175acu: goto label_1175ac;
        default: break;
    }

    ctx->pc = 0x117558u;

    // 0x117558: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x117558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11755c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11755cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x117560: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x117560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x117564: 0xc045d26  jal         func_117498
    ctx->pc = 0x117564u;
    SET_GPR_U32(ctx, 31, 0x11756Cu);
    ctx->pc = 0x117568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117564u;
    // 0x117568: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117498u, 0x117564u, 0x11756Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11756Cu;
label_11756c:
    // 0x11756c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11756cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117570: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x117570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117574: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x117574u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117578: 0x8043220  j           func_10C880
    ctx->pc = 0x117578u;
    ctx->pc = 0x11757Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117578u;
    // 0x11757c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C880u, 0x117578u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x117580u;
    // 0x117580: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x117580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x117584: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x117584u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117588: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x117588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11758c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11758cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117590: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x117590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x117594: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x117594u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x117598: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x117598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11759c: 0xc045ce0  jal         func_117380
    ctx->pc = 0x11759Cu;
    SET_GPR_U32(ctx, 31, 0x1175A4u);
    ctx->pc = 0x1175A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11759Cu;
    // 0x1175a0: 0x2484ab50  addiu       $a0, $a0, -0x54B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117380u, 0x11759Cu, 0x1175A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1175A4u;
label_1175a4:
    // 0x1175a4: 0xc045d26  jal         func_117498
    ctx->pc = 0x1175A4u;
    SET_GPR_U32(ctx, 31, 0x1175ACu);
    ctx->pc = 0x117498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117498u, 0x1175A4u, 0x1175ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1175ACu;
label_1175ac:
    // 0x1175ac: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1175acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1175b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1175b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1175b4: 0x8c458ae0  lw          $a1, -0x7520($v0)
    ctx->pc = 0x1175b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937312)));
    // 0x1175b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1175b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1175bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1175bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1175c0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1175c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1175c4: 0x8043420  j           func_10D080
    ctx->pc = 0x1175C4u;
    ctx->pc = 0x1175C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1175C4u;
    // 0x1175c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D080u, 0x1175C4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1175CCu;
    // 0x1175cc: 0x0  nop
    ctx->pc = 0x1175ccu;
    // NOP
}
