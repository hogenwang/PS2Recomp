#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010A618
// Address: 0x10a618 - 0x10a660
void sub_0010A618_0x10a618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A618_0x10a618");
#endif

    switch (ctx->pc) {
        case 0x10a654u: goto label_10a654;
        default: break;
    }

    ctx->pc = 0x10a618u;

    // 0x10a618: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10a618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10a61c: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x10a61cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x10a620: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10a620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10a624: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x10a624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x10a628: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x10a628u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x10a62c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x10a62cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x10a630: 0x8c870040  lw          $a3, 0x40($a0)
    ctx->pc = 0x10a630u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x10a634: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x10a634u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x10a638: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10a638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a63c: 0xace200c4  sw          $v0, 0xC4($a3)
    ctx->pc = 0x10a63cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 196), GPR_U32(ctx, 2));
    // 0x10a640: 0xace500ec  sw          $a1, 0xEC($a3)
    ctx->pc = 0x10a640u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 236), GPR_U32(ctx, 5));
    // 0x10a644: 0xace600f8  sw          $a2, 0xF8($a3)
    ctx->pc = 0x10a644u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 248), GPR_U32(ctx, 6));
    // 0x10a648: 0xace000f0  sw          $zero, 0xF0($a3)
    ctx->pc = 0x10a648u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 240), GPR_U32(ctx, 0));
    // 0x10a64c: 0xc04275e  jal         func_109D78
    ctx->pc = 0x10A64Cu;
    SET_GPR_U32(ctx, 31, 0x10A654u);
    ctx->pc = 0x10A650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A64Cu;
            // 0x10a650: 0xace000f4  sw          $zero, 0xF4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 244), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109D78u;
    if (runtime->hasFunction(0x109D78u)) {
        auto targetFn = runtime->lookupFunction(0x109D78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A654u; }
        if (ctx->pc != 0x10A654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00109D78_0x109d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A654u; }
        if (ctx->pc != 0x10A654u) { return; }
    }
    ctx->pc = 0x10A654u;
label_10a654:
    // 0x10a654: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10a654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a658: 0x3e00008  jr          $ra
    ctx->pc = 0x10A658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A65Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A658u;
            // 0x10a65c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10A660u;
    ctx->pc = 0x10a660u;
}
