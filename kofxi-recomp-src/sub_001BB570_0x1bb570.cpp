#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BB570
// Address: 0x1bb570 - 0x1bb5b0
void sub_001BB570_0x1bb570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB570_0x1bb570");
#endif

    switch (ctx->pc) {
        case 0x1bb58cu: goto label_1bb58c;
        case 0x1bb598u: goto label_1bb598;
        default: break;
    }

    ctx->pc = 0x1bb570u;

    // 0x1bb570: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bb570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bb574: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bb574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bb578: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bb578u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb57c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bb57cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bb580: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bb580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bb584: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1BB584u;
    SET_GPR_U32(ctx, 31, 0x1BB58Cu);
    ctx->pc = 0x1BB588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB584u;
            // 0x1bb588: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (runtime->hasFunction(0x1AD268u)) {
        auto targetFn = runtime->lookupFunction(0x1AD268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB58Cu; }
        if (ctx->pc != 0x1BB58Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD268_0x1ad268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB58Cu; }
        if (ctx->pc != 0x1BB58Cu) { return; }
    }
    ctx->pc = 0x1BB58Cu;
label_1bb58c:
    // 0x1bb58c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bb58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb590: 0xc06ed6c  jal         func_1BB5B0
    ctx->pc = 0x1BB590u;
    SET_GPR_U32(ctx, 31, 0x1BB598u);
    ctx->pc = 0x1BB594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB590u;
            // 0x1bb594: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB5B0u;
    if (runtime->hasFunction(0x1BB5B0u)) {
        auto targetFn = runtime->lookupFunction(0x1BB5B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB598u; }
        if (ctx->pc != 0x1BB598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB5B0_0x1bb5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB598u; }
        if (ctx->pc != 0x1BB598u) { return; }
    }
    ctx->pc = 0x1BB598u;
label_1bb598:
    // 0x1bb598: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bb598u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb59c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bb59cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bb5a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bb5a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bb5a4: 0x806b49c  j           func_1AD270
    ctx->pc = 0x1BB5A4u;
    ctx->pc = 0x1BB5A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB5A4u;
            // 0x1bb5a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    if (runtime->hasFunction(0x1AD270u)) {
        auto targetFn = runtime->lookupFunction(0x1AD270u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001AD270_0x1ad270(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1BB5ACu;
    // 0x1bb5ac: 0x0  nop
    ctx->pc = 0x1bb5acu;
    // NOP
    ctx->pc = 0x1bb5b0u;
}
