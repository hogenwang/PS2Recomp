#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00128410
// Address: 0x128410 - 0x1284a8
void sub_00128410_0x128410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00128410_0x128410");
#endif

    switch (ctx->pc) {
        case 0x12843cu: goto label_12843c;
        case 0x128468u: goto label_128468;
        case 0x128498u: goto label_128498;
        default: break;
    }

    ctx->pc = 0x128410u;

    // 0x128410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x128410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x128414: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x128414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x128418: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x128418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12841c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12841cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128420: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x128420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x128424: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x128424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128428: 0x3c1001e0  lui         $s0, 0x1E0
    ctx->pc = 0x128428u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)480 << 16));
    // 0x12842c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x12842cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128430: 0xae00bf2c  sw          $zero, -0x40D4($s0)
    ctx->pc = 0x128430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294950700), GPR_U32(ctx, 0));
    // 0x128434: 0xc0434c8  jal         func_10D320
    ctx->pc = 0x128434u;
    SET_GPR_U32(ctx, 31, 0x12843Cu);
    ctx->pc = 0x128438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128434u;
            // 0x128438: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D320u;
    if (runtime->hasFunction(0x10D320u)) {
        auto targetFn = runtime->lookupFunction(0x10D320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12843Cu; }
        if (ctx->pc != 0x12843Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D320_0x10d320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12843Cu; }
        if (ctx->pc != 0x12843Cu) { return; }
    }
    ctx->pc = 0x12843Cu;
label_12843c:
    // 0x12843c: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x12843cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x128440: 0x544f0005  bnel        $v0, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x128440u;
    {
        const bool branch_taken_0x128440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        if (branch_taken_0x128440) {
            ctx->pc = 0x128444u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x128440u;
            // 0x128444: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x128458u;
            goto label_128458;
        }
    }
    ctx->pc = 0x128448u;
    // 0x128448: 0x8e0fbf2c  lw          $t7, -0x40D4($s0)
    ctx->pc = 0x128448u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950700)));
    // 0x12844c: 0x55e00001  bnel        $t7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12844Cu;
    {
        const bool branch_taken_0x12844c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12844c) {
            ctx->pc = 0x128450u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12844Cu;
            // 0x128450: 0xae2f0000  sw          $t7, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
            ctx->pc = 0x128454u;
            goto label_128454;
        }
    }
    ctx->pc = 0x128454u;
label_128454:
    // 0x128454: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x128454u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_128458:
    // 0x128458: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x128458u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12845c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12845cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x128460: 0x3e00008  jr          $ra
    ctx->pc = 0x128460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128460u;
            // 0x128464: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x128468u;
label_128468:
    // 0x128468: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x128468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12846c: 0xffa60010  sd          $a2, 0x10($sp)
    ctx->pc = 0x12846cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 6));
    // 0x128470: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x128470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x128474: 0xffa70018  sd          $a3, 0x18($sp)
    ctx->pc = 0x128474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 7));
    // 0x128478: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x128478u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12847c: 0xffa80020  sd          $t0, 0x20($sp)
    ctx->pc = 0x12847cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 8));
    // 0x128480: 0xffa90028  sd          $t1, 0x28($sp)
    ctx->pc = 0x128480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 9));
    // 0x128484: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x128484u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x128488: 0xffaa0030  sd          $t2, 0x30($sp)
    ctx->pc = 0x128488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 10));
    // 0x12848c: 0xffab0038  sd          $t3, 0x38($sp)
    ctx->pc = 0x12848cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 11));
    // 0x128490: 0xc04afd0  jal         func_12BF40
    ctx->pc = 0x128490u;
    SET_GPR_U32(ctx, 31, 0x128498u);
    ctx->pc = 0x128494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128490u;
            // 0x128494: 0x8c850008  lw          $a1, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BF40u;
    if (runtime->hasFunction(0x12BF40u)) {
        auto targetFn = runtime->lookupFunction(0x12BF40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128498u; }
        if (ctx->pc != 0x128498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BF40_0x12bf40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128498u; }
        if (ctx->pc != 0x128498u) { return; }
    }
    ctx->pc = 0x128498u;
label_128498:
    // 0x128498: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x128498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12849c: 0x3e00008  jr          $ra
    ctx->pc = 0x12849Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1284A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12849Cu;
            // 0x1284a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1284A4u;
    // 0x1284a4: 0x0  nop
    ctx->pc = 0x1284a4u;
    // NOP
    ctx->pc = 0x1284a8u;
}
