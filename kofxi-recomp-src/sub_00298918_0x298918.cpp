#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00298918
// Address: 0x298918 - 0x298970
void sub_00298918_0x298918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298918_0x298918");
#endif

    switch (ctx->pc) {
        case 0x298934u: goto label_298934;
        default: break;
    }

    ctx->pc = 0x298918u;

    // 0x298918: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x298918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29891c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x29891cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x298920: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x298920u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298924: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x298924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x298928: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x298928u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29892c: 0xc0a632c  jal         func_298CB0
    ctx->pc = 0x29892Cu;
    SET_GPR_U32(ctx, 31, 0x298934u);
    ctx->pc = 0x298930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29892Cu;
            // 0x298930: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298CB0u;
    if (runtime->hasFunction(0x298CB0u)) {
        auto targetFn = runtime->lookupFunction(0x298CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298934u; }
        if (ctx->pc != 0x298934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00298CB0_0x298cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298934u; }
        if (ctx->pc != 0x298934u) { return; }
    }
    ctx->pc = 0x298934u;
label_298934:
    // 0x298934: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x298934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x298938: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x298938u;
    {
        const bool branch_taken_0x298938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x298938) {
            ctx->pc = 0x29893Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x298938u;
            // 0x29893c: 0xde030088  ld          $v1, 0x88($s0) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 136)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x298954u;
            goto label_298954;
        }
    }
    ctx->pc = 0x298940u;
    // 0x298940: 0xde030090  ld          $v1, 0x90($s0)
    ctx->pc = 0x298940u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x298944: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x298944u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298948: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x298948u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x29894c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29894Cu;
    {
        const bool branch_taken_0x29894c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29894Cu;
            // 0x298950: 0xfe030090  sd          $v1, 0x90($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 144), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29894c) {
            ctx->pc = 0x298960u;
            goto label_298960;
        }
    }
    ctx->pc = 0x298954u;
label_298954:
    // 0x298954: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x298954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x298958: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x298958u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x29895c: 0xfe030088  sd          $v1, 0x88($s0)
    ctx->pc = 0x29895cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 136), GPR_U64(ctx, 3));
label_298960:
    // 0x298960: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x298960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298964: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x298964u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298968: 0x3e00008  jr          $ra
    ctx->pc = 0x298968u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29896Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298968u;
            // 0x29896c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x298970u;
    ctx->pc = 0x298970u;
}
