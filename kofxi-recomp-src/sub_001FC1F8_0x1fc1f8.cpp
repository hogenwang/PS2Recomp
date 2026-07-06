#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FC1F8
// Address: 0x1fc1f8 - 0x1fc268
void sub_001FC1F8_0x1fc1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC1F8_0x1fc1f8");
#endif

    switch (ctx->pc) {
        case 0x1fc214u: goto label_1fc214;
        case 0x1fc238u: goto label_1fc238;
        case 0x1fc250u: goto label_1fc250;
        default: break;
    }

    ctx->pc = 0x1fc1f8u;

    // 0x1fc1f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fc1f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fc1fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fc1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fc200: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fc200u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc204: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fc204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fc208: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fc208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1fc20c: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1FC20Cu;
    SET_GPR_U32(ctx, 31, 0x1FC214u);
    ctx->pc = 0x1FC210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC20Cu;
            // 0x1fc210: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (runtime->hasFunction(0x1ED920u)) {
        auto targetFn = runtime->lookupFunction(0x1ED920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC214u; }
        if (ctx->pc != 0x1FC214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED920_0x1ed920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC214u; }
        if (ctx->pc != 0x1FC214u) { return; }
    }
    ctx->pc = 0x1FC214u;
label_1fc214:
    // 0x1fc214: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1fc214u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1fc218: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FC218u;
    {
        const bool branch_taken_0x1fc218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC218u;
            // 0x1fc21c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc218) {
            ctx->pc = 0x1FC238u;
            goto label_1fc238;
        }
    }
    ctx->pc = 0x1FC220u;
    // 0x1fc220: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fc220u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc224: 0x34a50124  ori         $a1, $a1, 0x124
    ctx->pc = 0x1fc224u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)292);
    // 0x1fc228: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fc228u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fc22c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fc22cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc230: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1FC230u;
    ctx->pc = 0x1FC234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC230u;
            // 0x1fc234: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1FC238u;
label_1fc238:
    // 0x1fc238: 0xae110da0  sw          $s1, 0xDA0($s0)
    ctx->pc = 0x1fc238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3488), GPR_U32(ctx, 17));
    // 0x1fc23c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fc23cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc240: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fc240u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fc244: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fc244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc248: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC24Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC248u;
            // 0x1fc24c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FC250u;
label_1fc250:
    // 0x1fc250: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fc250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fc254: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fc254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fc258: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fc258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc25c: 0x8073fee  j           func_1CFFB8
    ctx->pc = 0x1FC25Cu;
    ctx->pc = 0x1FC260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC25Cu;
            // 0x1fc260: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CFFB8u;
    if (runtime->hasFunction(0x1CFFB8u)) {
        auto targetFn = runtime->lookupFunction(0x1CFFB8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CFFB8_0x1cffb8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1FC264u;
    // 0x1fc264: 0x0  nop
    ctx->pc = 0x1fc264u;
    // NOP
    ctx->pc = 0x1fc268u;
}
