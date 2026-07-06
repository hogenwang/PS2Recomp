#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AB190
// Address: 0x1ab190 - 0x1ab258
void sub_001AB190_0x1ab190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB190_0x1ab190");
#endif

    switch (ctx->pc) {
        case 0x1ab1a0u: goto label_1ab1a0;
        case 0x1ab1a8u: goto label_1ab1a8;
        case 0x1ab1bcu: goto label_1ab1bc;
        case 0x1ab1d0u: goto label_1ab1d0;
        case 0x1ab1e0u: goto label_1ab1e0;
        case 0x1ab1e8u: goto label_1ab1e8;
        case 0x1ab208u: goto label_1ab208;
        case 0x1ab238u: goto label_1ab238;
        default: break;
    }

    ctx->pc = 0x1ab190u;

    // 0x1ab190: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ab190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ab194: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ab194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ab198: 0xc06f67e  jal         func_1BD9F8
    ctx->pc = 0x1AB198u;
    SET_GPR_U32(ctx, 31, 0x1AB1A0u);
    ctx->pc = 0x1BD9F8u;
    if (runtime->hasFunction(0x1BD9F8u)) {
        auto targetFn = runtime->lookupFunction(0x1BD9F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB1A0u; }
        if (ctx->pc != 0x1AB1A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BD9F8_0x1bd9f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB1A0u; }
        if (ctx->pc != 0x1AB1A0u) { return; }
    }
    ctx->pc = 0x1AB1A0u;
label_1ab1a0:
    // 0x1ab1a0: 0xc06abba  jal         func_1AAEE8
    ctx->pc = 0x1AB1A0u;
    SET_GPR_U32(ctx, 31, 0x1AB1A8u);
    ctx->pc = 0x1AAEE8u;
    if (runtime->hasFunction(0x1AAEE8u)) {
        auto targetFn = runtime->lookupFunction(0x1AAEE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB1A8u; }
        if (ctx->pc != 0x1AB1A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AAEE8_0x1aaee8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB1A8u; }
        if (ctx->pc != 0x1AB1A8u) { return; }
    }
    ctx->pc = 0x1AB1A8u;
label_1ab1a8:
    // 0x1ab1a8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1ab1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1ab1ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ab1acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab1b0: 0x2484e6a8  addiu       $a0, $a0, -0x1958
    ctx->pc = 0x1ab1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960808));
    // 0x1ab1b4: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1AB1B4u;
    SET_GPR_U32(ctx, 31, 0x1AB1BCu);
    ctx->pc = 0x1AB1B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB1B4u;
            // 0x1ab1b8: 0x24061040  addiu       $a2, $zero, 0x1040 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB1BCu; }
        if (ctx->pc != 0x1AB1BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB1BCu; }
        if (ctx->pc != 0x1AB1BCu) { return; }
    }
    ctx->pc = 0x1AB1BCu;
label_1ab1bc:
    // 0x1ab1bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ab1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab1c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ab1c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab1c4: 0x806ac5c  j           func_1AB170
    ctx->pc = 0x1AB1C4u;
    ctx->pc = 0x1AB1C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB1C4u;
            // 0x1ab1c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AB170u;
    {
        auto targetFn = runtime->lookupFunction(0x1AB170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1AB1CCu;
    // 0x1ab1cc: 0x0  nop
    ctx->pc = 0x1ab1ccu;
    // NOP
label_1ab1d0:
    // 0x1ab1d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ab1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ab1d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ab1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ab1d8: 0xc06f688  jal         func_1BDA20
    ctx->pc = 0x1AB1D8u;
    SET_GPR_U32(ctx, 31, 0x1AB1E0u);
    ctx->pc = 0x1BDA20u;
    if (runtime->hasFunction(0x1BDA20u)) {
        auto targetFn = runtime->lookupFunction(0x1BDA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB1E0u; }
        if (ctx->pc != 0x1AB1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BDA20_0x1bda20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB1E0u; }
        if (ctx->pc != 0x1AB1E0u) { return; }
    }
    ctx->pc = 0x1AB1E0u;
label_1ab1e0:
    // 0x1ab1e0: 0xc06abc2  jal         func_1AAF08
    ctx->pc = 0x1AB1E0u;
    SET_GPR_U32(ctx, 31, 0x1AB1E8u);
    ctx->pc = 0x1AAF08u;
    if (runtime->hasFunction(0x1AAF08u)) {
        auto targetFn = runtime->lookupFunction(0x1AAF08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB1E8u; }
        if (ctx->pc != 0x1AB1E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AAF08_0x1aaf08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB1E8u; }
        if (ctx->pc != 0x1AB1E8u) { return; }
    }
    ctx->pc = 0x1AB1E8u;
label_1ab1e8:
    // 0x1ab1e8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1ab1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1ab1ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ab1ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab1f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ab1f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab1f4: 0x2484e6a8  addiu       $a0, $a0, -0x1958
    ctx->pc = 0x1ab1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960808));
    // 0x1ab1f8: 0x24061040  addiu       $a2, $zero, 0x1040
    ctx->pc = 0x1ab1f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4160));
    // 0x1ab1fc: 0x8049cb6  j           func_1272D8
    ctx->pc = 0x1AB1FCu;
    ctx->pc = 0x1AB200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB1FCu;
            // 0x1ab200: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001272D8_0x1272d8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1AB204u;
    // 0x1ab204: 0x0  nop
    ctx->pc = 0x1ab204u;
    // NOP
label_1ab208:
    // 0x1ab208: 0x8c88008c  lw          $t0, 0x8C($a0)
    ctx->pc = 0x1ab208u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x1ab20c: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x1ab20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1ab210: 0xaca80000  sw          $t0, 0x0($a1)
    ctx->pc = 0x1ab210u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x1ab214: 0x8c85008c  lw          $a1, 0x8C($a0)
    ctx->pc = 0x1ab214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x1ab218: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x1ab218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1ab21c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1ab21cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ab220: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1ab220u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1ab224: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x1ab224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1ab228: 0x8c830088  lw          $v1, 0x88($a0)
    ctx->pc = 0x1ab228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x1ab22c: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x1ab22cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ab230: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB230u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB230u;
            // 0x1ab234: 0xace50000  sw          $a1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AB238u;
label_1ab238:
    // 0x1ab238: 0x8c82008c  lw          $v0, 0x8C($a0)
    ctx->pc = 0x1ab238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x1ab23c: 0x8c830088  lw          $v1, 0x88($a0)
    ctx->pc = 0x1ab23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x1ab240: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1ab240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1ab244: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1ab244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1ab248: 0xac82008c  sw          $v0, 0x8C($a0)
    ctx->pc = 0x1ab248u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 2));
    // 0x1ab24c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB24Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB24Cu;
            // 0x1ab250: 0xac830088  sw          $v1, 0x88($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AB254u;
    // 0x1ab254: 0x0  nop
    ctx->pc = 0x1ab254u;
    // NOP
    ctx->pc = 0x1ab258u;
}
