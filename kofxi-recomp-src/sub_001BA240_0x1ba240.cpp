#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BA240
// Address: 0x1ba240 - 0x1ba298
void sub_001BA240_0x1ba240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BA240_0x1ba240");
#endif

    switch (ctx->pc) {
        case 0x1ba250u: goto label_1ba250;
        case 0x1ba260u: goto label_1ba260;
        case 0x1ba274u: goto label_1ba274;
        case 0x1ba27cu: goto label_1ba27c;
        case 0x1ba284u: goto label_1ba284;
        default: break;
    }

    ctx->pc = 0x1ba240u;

    // 0x1ba240: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ba240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ba244: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ba244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ba248: 0xc06d906  jal         func_1B6418
    ctx->pc = 0x1BA248u;
    SET_GPR_U32(ctx, 31, 0x1BA250u);
    ctx->pc = 0x1BA24Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA248u;
            // 0x1ba24c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6418u;
    if (runtime->hasFunction(0x1B6418u)) {
        auto targetFn = runtime->lookupFunction(0x1B6418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA250u; }
        if (ctx->pc != 0x1BA250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6418_0x1b6418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA250u; }
        if (ctx->pc != 0x1BA250u) { return; }
    }
    ctx->pc = 0x1BA250u;
label_1ba250:
    // 0x1ba250: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ba250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba254: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA254u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA254u;
            // 0x1ba258: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA25Cu;
    // 0x1ba25c: 0x0  nop
    ctx->pc = 0x1ba25cu;
    // NOP
label_1ba260:
    // 0x1ba260: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ba260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ba264: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ba264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ba268: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ba268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ba26c: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1BA26Cu;
    SET_GPR_U32(ctx, 31, 0x1BA274u);
    ctx->pc = 0x1BA270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA26Cu;
            // 0x1ba270: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (runtime->hasFunction(0x1AD268u)) {
        auto targetFn = runtime->lookupFunction(0x1AD268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA274u; }
        if (ctx->pc != 0x1BA274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD268_0x1ad268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA274u; }
        if (ctx->pc != 0x1BA274u) { return; }
    }
    ctx->pc = 0x1BA274u;
label_1ba274:
    // 0x1ba274: 0xc06e8a6  jal         func_1BA298
    ctx->pc = 0x1BA274u;
    SET_GPR_U32(ctx, 31, 0x1BA27Cu);
    ctx->pc = 0x1BA278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA274u;
            // 0x1ba278: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA298u;
    if (runtime->hasFunction(0x1BA298u)) {
        auto targetFn = runtime->lookupFunction(0x1BA298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA27Cu; }
        if (ctx->pc != 0x1BA27Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BA298_0x1ba298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA27Cu; }
        if (ctx->pc != 0x1BA27Cu) { return; }
    }
    ctx->pc = 0x1BA27Cu;
label_1ba27c:
    // 0x1ba27c: 0xc06b49c  jal         func_1AD270
    ctx->pc = 0x1BA27Cu;
    SET_GPR_U32(ctx, 31, 0x1BA284u);
    ctx->pc = 0x1BA280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA27Cu;
            // 0x1ba280: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    if (runtime->hasFunction(0x1AD270u)) {
        auto targetFn = runtime->lookupFunction(0x1AD270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA284u; }
        if (ctx->pc != 0x1BA284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD270_0x1ad270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA284u; }
        if (ctx->pc != 0x1BA284u) { return; }
    }
    ctx->pc = 0x1BA284u;
label_1ba284:
    // 0x1ba284: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ba284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ba288: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ba288u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba28c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ba28cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba290: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA290u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA290u;
            // 0x1ba294: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA298u;
    ctx->pc = 0x1ba298u;
}
