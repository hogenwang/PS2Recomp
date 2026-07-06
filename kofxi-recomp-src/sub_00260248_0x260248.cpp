#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00260248
// Address: 0x260248 - 0x2602f0
void sub_00260248_0x260248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260248_0x260248");
#endif

    switch (ctx->pc) {
        case 0x260270u: goto label_260270;
        case 0x2602acu: goto label_2602ac;
        case 0x2602c0u: goto label_2602c0;
        default: break;
    }

    ctx->pc = 0x260248u;

    // 0x260248: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x260248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x26024c: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x26024cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x260250: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x260250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x260254: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x260254u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260258: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x260258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x26025c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x26025cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260260: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x260260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x260264: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x260264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x260268: 0xc09728e  jal         func_25CA38
    ctx->pc = 0x260268u;
    SET_GPR_U32(ctx, 31, 0x260270u);
    ctx->pc = 0x26026Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x260268u;
            // 0x26026c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CA38u;
    if (runtime->hasFunction(0x25CA38u)) {
        auto targetFn = runtime->lookupFunction(0x25CA38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260270u; }
        if (ctx->pc != 0x260270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CA38_0x25ca38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260270u; }
        if (ctx->pc != 0x260270u) { return; }
    }
    ctx->pc = 0x260270u;
label_260270:
    // 0x260270: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x260270u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260274: 0x12400016  beqz        $s2, . + 4 + (0x16 << 2)
    ctx->pc = 0x260274u;
    {
        const bool branch_taken_0x260274 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x260278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260274u;
            // 0x260278: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260274) {
            ctx->pc = 0x2602D0u;
            goto label_2602d0;
        }
    }
    ctx->pc = 0x26027Cu;
    // 0x26027c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x26027cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x260280: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x260280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x260284: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x260284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260288: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x260288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x26028c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x26028cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x260290: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x260290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260294: 0xafb30020  sw          $s3, 0x20($sp)
    ctx->pc = 0x260294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 19));
    // 0x260298: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x260298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x26029c: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x26029cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x2602a0: 0xafb10010  sw          $s1, 0x10($sp)
    ctx->pc = 0x2602a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 17));
    // 0x2602a4: 0xc08cada  jal         func_232B68
    ctx->pc = 0x2602A4u;
    SET_GPR_U32(ctx, 31, 0x2602ACu);
    ctx->pc = 0x2602A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2602A4u;
            // 0x2602a8: 0xafb10024  sw          $s1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232B68u;
    if (runtime->hasFunction(0x232B68u)) {
        auto targetFn = runtime->lookupFunction(0x232B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2602ACu; }
        if (ctx->pc != 0x2602ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00232B68_0x232b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2602ACu; }
        if (ctx->pc != 0x2602ACu) { return; }
    }
    ctx->pc = 0x2602ACu;
label_2602ac:
    // 0x2602ac: 0x8fb00010  lw          $s0, 0x10($sp)
    ctx->pc = 0x2602acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2602b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2602b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2602b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2602b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2602b8: 0xc0972da  jal         func_25CB68
    ctx->pc = 0x2602B8u;
    SET_GPR_U32(ctx, 31, 0x2602C0u);
    ctx->pc = 0x2602BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2602B8u;
            // 0x2602bc: 0x2308023  subu        $s0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CB68u;
    if (runtime->hasFunction(0x25CB68u)) {
        auto targetFn = runtime->lookupFunction(0x25CB68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2602C0u; }
        if (ctx->pc != 0x2602C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CB68_0x25cb68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2602C0u; }
        if (ctx->pc != 0x2602C0u) { return; }
    }
    ctx->pc = 0x2602C0u;
label_2602c0:
    // 0x2602c0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2602c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2602c4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2602c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2602c8: 0x202180b  movn        $v1, $s0, $v0
    ctx->pc = 0x2602c8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 16));
    // 0x2602cc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2602ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2602d0:
    // 0x2602d0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2602d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2602d4: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x2602d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2602d8: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2602d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2602dc: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x2602dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2602e0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2602e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2602e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2602E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2602E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2602E4u;
            // 0x2602e8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2602ECu;
    // 0x2602ec: 0x0  nop
    ctx->pc = 0x2602ecu;
    // NOP
    ctx->pc = 0x2602f0u;
}
