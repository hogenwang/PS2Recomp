#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00354160
// Address: 0x354160 - 0x3541d0
void sub_00354160_0x354160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00354160_0x354160");
#endif

    switch (ctx->pc) {
        case 0x35418cu: goto label_35418c;
        default: break;
    }

    ctx->pc = 0x354160u;

    // 0x354160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x354160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x354164: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x354164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x354168: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x354168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35416c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35416cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x354170: 0x8c43d918  lw          $v1, -0x26E8($v0)
    ctx->pc = 0x354170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
    // 0x354174: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x354174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x354178: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x354178u;
    {
        const bool branch_taken_0x354178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x354178) {
            ctx->pc = 0x35417Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x354178u;
            // 0x35417c: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3541A0u;
            goto label_3541a0;
        }
    }
    ctx->pc = 0x354180u;
    // 0x354180: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x354180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x354184: 0xc0c4534  jal         func_3114D0
    ctx->pc = 0x354184u;
    SET_GPR_U32(ctx, 31, 0x35418Cu);
    ctx->pc = 0x354188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354184u;
            // 0x354188: 0x90509720  lbu         $s0, -0x68E0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3114D0u;
    if (runtime->hasFunction(0x3114D0u)) {
        auto targetFn = runtime->lookupFunction(0x3114D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35418Cu; }
        if (ctx->pc != 0x35418Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003114D0_0x3114d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35418Cu; }
        if (ctx->pc != 0x35418Cu) { return; }
    }
    ctx->pc = 0x35418Cu;
label_35418c:
    // 0x35418c: 0x56020002  bnel        $s0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x35418Cu;
    {
        const bool branch_taken_0x35418c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x35418c) {
            ctx->pc = 0x354190u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35418Cu;
            // 0x354190: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x354198u;
            goto label_354198;
        }
    }
    ctx->pc = 0x354194u;
    // 0x354194: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x354194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_354198:
    // 0x354198: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x354198u;
    {
        const bool branch_taken_0x354198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35419Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x354198u;
            // 0x35419c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354198) {
            ctx->pc = 0x3541B8u;
            goto label_3541b8;
        }
    }
    ctx->pc = 0x3541A0u;
label_3541a0:
    // 0x3541a0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3541a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3541a4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3541A4u;
    {
        const bool branch_taken_0x3541a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3541a4) {
            ctx->pc = 0x3541A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3541A4u;
            // 0x3541a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3541B4u;
            goto label_3541b4;
        }
    }
    ctx->pc = 0x3541ACu;
    // 0x3541ac: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x3541ACu;
    {
        const bool branch_taken_0x3541ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3541B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3541ACu;
            // 0x3541b0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3541ac) {
            ctx->pc = 0x3541B4u;
            goto label_3541b4;
        }
    }
    ctx->pc = 0x3541B4u;
label_3541b4:
    // 0x3541b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3541b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3541b8:
    // 0x3541b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3541b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3541bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3541BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3541C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3541BCu;
            // 0x3541c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3541C4u;
    // 0x3541c4: 0x0  nop
    ctx->pc = 0x3541c4u;
    // NOP
    // 0x3541c8: 0x0  nop
    ctx->pc = 0x3541c8u;
    // NOP
    // 0x3541cc: 0x0  nop
    ctx->pc = 0x3541ccu;
    // NOP
    ctx->pc = 0x3541d0u;
}
