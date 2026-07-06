#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00120630
// Address: 0x120630 - 0x120758
void sub_00120630_0x120630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00120630_0x120630");
#endif

    switch (ctx->pc) {
        case 0x1206f4u: goto label_1206f4;
        default: break;
    }

    ctx->pc = 0x120630u;

    // 0x120630: 0x4783c  dsll32      $t7, $a0, 0
    ctx->pc = 0x120630u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 4) << (32 + 0));
    // 0x120634: 0x5703c  dsll32      $t6, $a1, 0
    ctx->pc = 0x120634u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 5) << (32 + 0));
    // 0x120638: 0xf783f  dsra32      $t7, $t7, 0
    ctx->pc = 0x120638u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
    // 0x12063c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12063cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x120640: 0xf7823  negu        $t7, $t7
    ctx->pc = 0x120640u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 15)));
    // 0x120644: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x120644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x120648: 0xe703f  dsra32      $t6, $t6, 0
    ctx->pc = 0x120648u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 14) >> (32 + 0));
    // 0x12064c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12064cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x120650: 0xf683c  dsll32      $t5, $t7, 0
    ctx->pc = 0x120650u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 15) << (32 + 0));
    // 0x120654: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x120654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x120658: 0xe7023  negu        $t6, $t6
    ctx->pc = 0x120658u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 14)));
    // 0x12065c: 0x4783f  dsra32      $t7, $a0, 0
    ctx->pc = 0x12065cu;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x120660: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x120660u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x120664: 0x5603f  dsra32      $t4, $a1, 0
    ctx->pc = 0x120664u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x120668: 0xd683e  dsrl32      $t5, $t5, 0
    ctx->pc = 0x120668u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) >> (32 + 0));
    // 0x12066c: 0xe703e  dsrl32      $t6, $t6, 0
    ctx->pc = 0x12066cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (32 + 0));
    // 0x120670: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x120670u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120674: 0xf4823  negu        $t1, $t7
    ctx->pc = 0x120674u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 15)));
    // 0x120678: 0x5e1000e  bgez        $t7, . + 4 + (0xE << 2)
    ctx->pc = 0x120678u;
    {
        const bool branch_taken_0x120678 = (GPR_S32(ctx, 15) >= 0);
        ctx->pc = 0x12067Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120678u;
            // 0x12067c: 0xc4023  negu        $t0, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120678) {
            ctx->pc = 0x1206B4u;
            goto label_1206b4;
        }
    }
    ctx->pc = 0x120680u;
    // 0x120680: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x120680u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x120684: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x120684u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x120688: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x120688u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12068c: 0x16f5824  and         $t3, $t3, $t7
    ctx->pc = 0x12068cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 15));
    // 0x120690: 0x16d5825  or          $t3, $t3, $t5
    ctx->pc = 0x120690u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 13));
    // 0x120694: 0xb783c  dsll32      $t7, $t3, 0
    ctx->pc = 0x120694u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 11) << (32 + 0));
    // 0x120698: 0xf783f  dsra32      $t7, $t7, 0
    ctx->pc = 0x120698u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
    // 0x12069c: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x12069cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x1206a0: 0xf782b  sltu        $t7, $zero, $t7
    ctx->pc = 0x1206a0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x1206a4: 0xb583e  dsrl32      $t3, $t3, 0
    ctx->pc = 0x1206a4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) >> (32 + 0));
    // 0x1206a8: 0x12f7823  subu        $t7, $t1, $t7
    ctx->pc = 0x1206a8u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 15)));
    // 0x1206ac: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x1206acu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x1206b0: 0x16f2025  or          $a0, $t3, $t7
    ctx->pc = 0x1206b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) | GPR_U64(ctx, 15));
label_1206b4:
    // 0x1206b4: 0x581000d  bgez        $t4, . + 4 + (0xD << 2)
    ctx->pc = 0x1206B4u;
    {
        const bool branch_taken_0x1206b4 = (GPR_S32(ctx, 12) >= 0);
        ctx->pc = 0x1206B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1206B4u;
            // 0x1206b8: 0x240fffff  addiu       $t7, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1206b4) {
            ctx->pc = 0x1206ECu;
            goto label_1206ec;
        }
    }
    ctx->pc = 0x1206BCu;
    // 0x1206bc: 0x118827  nor         $s1, $zero, $s1
    ctx->pc = 0x1206bcu;
    SET_GPR_U64(ctx, 17, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 17)));
    // 0x1206c0: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x1206c0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x1206c4: 0x14f5024  and         $t2, $t2, $t7
    ctx->pc = 0x1206c4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 15));
    // 0x1206c8: 0x14e5025  or          $t2, $t2, $t6
    ctx->pc = 0x1206c8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 14));
    // 0x1206cc: 0xa783c  dsll32      $t7, $t2, 0
    ctx->pc = 0x1206ccu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 10) << (32 + 0));
    // 0x1206d0: 0xf783f  dsra32      $t7, $t7, 0
    ctx->pc = 0x1206d0u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
    // 0x1206d4: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x1206d4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x1206d8: 0xf782b  sltu        $t7, $zero, $t7
    ctx->pc = 0x1206d8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x1206dc: 0xa503e  dsrl32      $t2, $t2, 0
    ctx->pc = 0x1206dcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> (32 + 0));
    // 0x1206e0: 0x10f7823  subu        $t7, $t0, $t7
    ctx->pc = 0x1206e0u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 15)));
    // 0x1206e4: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x1206e4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x1206e8: 0x14f2825  or          $a1, $t2, $t7
    ctx->pc = 0x1206e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) | GPR_U64(ctx, 15));
label_1206ec:
    // 0x1206ec: 0xc0481d6  jal         func_120758
    ctx->pc = 0x1206ECu;
    SET_GPR_U32(ctx, 31, 0x1206F4u);
    ctx->pc = 0x1206F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1206ECu;
            // 0x1206f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120758u;
    if (runtime->hasFunction(0x120758u)) {
        auto targetFn = runtime->lookupFunction(0x120758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1206F4u; }
        if (ctx->pc != 0x1206F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120758_0x120758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1206F4u; }
        if (ctx->pc != 0x1206F4u) { return; }
    }
    ctx->pc = 0x1206F4u;
label_1206f4:
    // 0x1206f4: 0x2783c  dsll32      $t7, $v0, 0
    ctx->pc = 0x1206f4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1206f8: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x1206f8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1206fc: 0xf783f  dsra32      $t7, $t7, 0
    ctx->pc = 0x1206fcu;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
    // 0x120700: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x120700u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x120704: 0xf7823  negu        $t7, $t7
    ctx->pc = 0x120704u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 15)));
    // 0x120708: 0x20e8024  and         $s0, $s0, $t6
    ctx->pc = 0x120708u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 14));
    // 0x12070c: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x12070cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x120710: 0x2703f  dsra32      $t6, $v0, 0
    ctx->pc = 0x120710u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x120714: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x120714u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x120718: 0xe7023  negu        $t6, $t6
    ctx->pc = 0x120718u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 14)));
    // 0x12071c: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x12071Cu;
    {
        const bool branch_taken_0x12071c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x120720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12071Cu;
            // 0x120720: 0x20f8025  or          $s0, $s0, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12071c) {
            ctx->pc = 0x120744u;
            goto label_120744;
        }
    }
    ctx->pc = 0x120724u;
    // 0x120724: 0x10783c  dsll32      $t7, $s0, 0
    ctx->pc = 0x120724u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 16) << (32 + 0));
    // 0x120728: 0xf783f  dsra32      $t7, $t7, 0
    ctx->pc = 0x120728u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
    // 0x12072c: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x12072cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x120730: 0xf782b  sltu        $t7, $zero, $t7
    ctx->pc = 0x120730u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x120734: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x120734u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x120738: 0x1cf7823  subu        $t7, $t6, $t7
    ctx->pc = 0x120738u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x12073c: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x12073cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x120740: 0x20f1025  or          $v0, $s0, $t7
    ctx->pc = 0x120740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 15));
label_120744:
    // 0x120744: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x120744u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120748: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x120748u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12074c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12074cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120750: 0x3e00008  jr          $ra
    ctx->pc = 0x120750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120750u;
            // 0x120754: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x120758u;
    ctx->pc = 0x120758u;
}
