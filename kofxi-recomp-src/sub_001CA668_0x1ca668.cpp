#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CA668
// Address: 0x1ca668 - 0x1ca6b0
void sub_001CA668_0x1ca668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CA668_0x1ca668");
#endif

    switch (ctx->pc) {
        case 0x1ca69cu: goto label_1ca69c;
        default: break;
    }

    ctx->pc = 0x1ca668u;

    // 0x1ca668: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1ca668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1ca66c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ca66cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ca670: 0x8c435328  lw          $v1, 0x5328($v0)
    ctx->pc = 0x1ca670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21288)));
    // 0x1ca674: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ca674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca678: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CA678u;
    {
        const bool branch_taken_0x1ca678 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1CA67Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA678u;
            // 0x1ca67c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca678) {
            ctx->pc = 0x1CA690u;
            goto label_1ca690;
        }
    }
    ctx->pc = 0x1CA680u;
    // 0x1ca680: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1ca680u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1ca684: 0x8c835320  lw          $v1, 0x5320($a0)
    ctx->pc = 0x1ca684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 21280)));
    // 0x1ca688: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CA688u;
    {
        const bool branch_taken_0x1ca688 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1CA68Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA688u;
            // 0x1ca68c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca688) {
            ctx->pc = 0x1CA6A0u;
            goto label_1ca6a0;
        }
    }
    ctx->pc = 0x1CA690u;
label_1ca690:
    // 0x1ca690: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1ca690u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1ca694: 0xc06d212  jal         func_1B4848
    ctx->pc = 0x1CA694u;
    SET_GPR_U32(ctx, 31, 0x1CA69Cu);
    ctx->pc = 0x1CA698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA694u;
            // 0x1ca698: 0x2484b810  addiu       $a0, $a0, -0x47F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4848u;
    if (runtime->hasFunction(0x1B4848u)) {
        auto targetFn = runtime->lookupFunction(0x1B4848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA69Cu; }
        if (ctx->pc != 0x1CA69Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4848_0x1b4848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA69Cu; }
        if (ctx->pc != 0x1CA69Cu) { return; }
    }
    ctx->pc = 0x1CA69Cu;
label_1ca69c:
    // 0x1ca69c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ca69cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca6a0:
    // 0x1ca6a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ca6a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca6a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA6A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA6A4u;
            // 0x1ca6a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CA6ACu;
    // 0x1ca6ac: 0x0  nop
    ctx->pc = 0x1ca6acu;
    // NOP
    ctx->pc = 0x1ca6b0u;
}
