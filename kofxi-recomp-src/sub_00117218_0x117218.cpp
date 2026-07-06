#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00117218
// Address: 0x117218 - 0x117280
void sub_00117218_0x117218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117218_0x117218");
#endif

    switch (ctx->pc) {
        case 0x11722cu: goto label_11722c;
        case 0x117250u: goto label_117250;
        case 0x117258u: goto label_117258;
        case 0x117260u: goto label_117260;
        default: break;
    }

    ctx->pc = 0x117218u;

    // 0x117218: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x117218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11721c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11721cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x117220: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x117220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x117224: 0xc043344  jal         func_10CD10
    ctx->pc = 0x117224u;
    SET_GPR_U32(ctx, 31, 0x11722Cu);
    ctx->pc = 0x117228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117224u;
            // 0x117228: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CD10u;
    if (runtime->hasFunction(0x10CD10u)) {
        auto targetFn = runtime->lookupFunction(0x10CD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11722Cu; }
        if (ctx->pc != 0x11722Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CD10_0x10cd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11722Cu; }
        if (ctx->pc != 0x11722Cu) { return; }
    }
    ctx->pc = 0x11722Cu;
label_11722c:
    // 0x11722c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x11722cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117230: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x117230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x117234: 0x34421fff  ori         $v0, $v0, 0x1FFF
    ctx->pc = 0x117234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8191);
    // 0x117238: 0x27b00004  addiu       $s0, $sp, 0x4
    ctx->pc = 0x117238u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x11723c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x11723cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x117240: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117244: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x117244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x117248: 0xc043340  jal         func_10CD00
    ctx->pc = 0x117248u;
    SET_GPR_U32(ctx, 31, 0x117250u);
    ctx->pc = 0x11724Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117248u;
            // 0x11724c: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CD00u;
    if (runtime->hasFunction(0x10CD00u)) {
        auto targetFn = runtime->lookupFunction(0x10CD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117250u; }
        if (ctx->pc != 0x117250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CD00_0x10cd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117250u; }
        if (ctx->pc != 0x117250u) { return; }
    }
    ctx->pc = 0x117250u;
label_117250:
    // 0x117250: 0xc043344  jal         func_10CD10
    ctx->pc = 0x117250u;
    SET_GPR_U32(ctx, 31, 0x117258u);
    ctx->pc = 0x117254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117250u;
            // 0x117254: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CD10u;
    if (runtime->hasFunction(0x10CD10u)) {
        auto targetFn = runtime->lookupFunction(0x10CD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117258u; }
        if (ctx->pc != 0x117258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CD10_0x10cd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117258u; }
        if (ctx->pc != 0x117258u) { return; }
    }
    ctx->pc = 0x117258u;
label_117258:
    // 0x117258: 0xc043340  jal         func_10CD00
    ctx->pc = 0x117258u;
    SET_GPR_U32(ctx, 31, 0x117260u);
    ctx->pc = 0x11725Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117258u;
            // 0x11725c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CD00u;
    if (runtime->hasFunction(0x10CD00u)) {
        auto targetFn = runtime->lookupFunction(0x10CD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117260u; }
        if (ctx->pc != 0x117260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CD00_0x10cd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117260u; }
        if (ctx->pc != 0x117260u) { return; }
    }
    ctx->pc = 0x117260u;
label_117260:
    // 0x117260: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x117260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x117264: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x117264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117268: 0x21342  srl         $v0, $v0, 13
    ctx->pc = 0x117268u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x11726c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11726cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117270: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x117270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x117274: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x117274u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x117278: 0x3e00008  jr          $ra
    ctx->pc = 0x117278u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11727Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117278u;
            // 0x11727c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x117280u;
    ctx->pc = 0x117280u;
}
