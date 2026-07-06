#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013E5E0
// Address: 0x13e5e0 - 0x13e6a0
void sub_0013E5E0_0x13e5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E5E0_0x13e5e0");
#endif

    switch (ctx->pc) {
        case 0x13e600u: goto label_13e600;
        case 0x13e65cu: goto label_13e65c;
        default: break;
    }

    ctx->pc = 0x13e5e0u;

    // 0x13e5e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13e5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13e5e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13e5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13e5e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13e5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13e5ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13e5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13e5f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13e5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13e5f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13e5f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e5f8: 0xc062804  jal         func_18A010
    ctx->pc = 0x13E5F8u;
    SET_GPR_U32(ctx, 31, 0x13E600u);
    ctx->pc = 0x13E5FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E5F8u;
            // 0x13e5fc: 0x8c8400dc  lw          $a0, 0xDC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A010u;
    if (runtime->hasFunction(0x18A010u)) {
        auto targetFn = runtime->lookupFunction(0x18A010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E600u; }
        if (ctx->pc != 0x13E600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A010_0x18a010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E600u; }
        if (ctx->pc != 0x13E600u) { return; }
    }
    ctx->pc = 0x13E600u;
label_13e600:
    // 0x13e600: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13e600u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e604: 0x5200001f  beql        $s0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x13E604u;
    {
        const bool branch_taken_0x13e604 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e604) {
            ctx->pc = 0x13E608u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13E604u;
            // 0x13e608: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13E684u;
            goto label_13e684;
        }
    }
    ctx->pc = 0x13E60Cu;
    // 0x13e60c: 0x8e220238  lw          $v0, 0x238($s1)
    ctx->pc = 0x13e60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 568)));
    // 0x13e610: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x13e610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x13e614: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x13E614u;
    {
        const bool branch_taken_0x13e614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e614) {
            ctx->pc = 0x13E618u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13E614u;
            // 0x13e618: 0x92120204  lbu         $s2, 0x204($s0) (Delay Slot)
        SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 516)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13E654u;
            goto label_13e654;
        }
    }
    ctx->pc = 0x13E61Cu;
    // 0x13e61c: 0x92230204  lbu         $v1, 0x204($s1)
    ctx->pc = 0x13e61cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x13e620: 0x286200a0  slti        $v0, $v1, 0xA0
    ctx->pc = 0x13e620u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)160) ? 1 : 0);
    // 0x13e624: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x13E624u;
    {
        const bool branch_taken_0x13e624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e624) {
            ctx->pc = 0x13E628u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13E624u;
            // 0x13e628: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13E644u;
            goto label_13e644;
        }
    }
    ctx->pc = 0x13E62Cu;
    // 0x13e62c: 0x286100aa  slti        $at, $v1, 0xAA
    ctx->pc = 0x13e62cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)170) ? 1 : 0);
    // 0x13e630: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x13E630u;
    {
        const bool branch_taken_0x13e630 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e630) {
            ctx->pc = 0x13E640u;
            goto label_13e640;
        }
    }
    ctx->pc = 0x13E638u;
    // 0x13e638: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x13E638u;
    {
        const bool branch_taken_0x13e638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E63Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E638u;
            // 0x13e63c: 0x24720050  addiu       $s2, $v1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e638) {
            ctx->pc = 0x13E67Cu;
            goto label_13e67c;
        }
    }
    ctx->pc = 0x13E640u;
label_13e640:
    // 0x13e640: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x13e640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_13e644:
    // 0x13e644: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x13E644u;
    {
        const bool branch_taken_0x13e644 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13e644) {
            ctx->pc = 0x13E648u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13E644u;
            // 0x13e648: 0x92120204  lbu         $s2, 0x204($s0) (Delay Slot)
        SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 516)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13E67Cu;
            goto label_13e67c;
        }
    }
    ctx->pc = 0x13E64Cu;
    // 0x13e64c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x13E64Cu;
    {
        const bool branch_taken_0x13e64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E64Cu;
            // 0x13e650: 0x241200fd  addiu       $s2, $zero, 0xFD (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e64c) {
            ctx->pc = 0x13E67Cu;
            goto label_13e67c;
        }
    }
    ctx->pc = 0x13E654u;
label_13e654:
    // 0x13e654: 0xc04f740  jal         func_13DD00
    ctx->pc = 0x13E654u;
    SET_GPR_U32(ctx, 31, 0x13E65Cu);
    ctx->pc = 0x13E658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E654u;
            // 0x13e658: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DD00u;
    if (runtime->hasFunction(0x13DD00u)) {
        auto targetFn = runtime->lookupFunction(0x13DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E65Cu; }
        if (ctx->pc != 0x13E65Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DD00_0x13dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E65Cu; }
        if (ctx->pc != 0x13E65Cu) { return; }
    }
    ctx->pc = 0x13E65Cu;
label_13e65c:
    // 0x13e65c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x13E65Cu;
    {
        const bool branch_taken_0x13e65c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e65c) {
            ctx->pc = 0x13E660u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13E65Cu;
            // 0x13e660: 0x324200ff  andi        $v0, $s2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x13E680u;
            goto label_13e680;
        }
    }
    ctx->pc = 0x13E664u;
    // 0x13e664: 0x8e030494  lw          $v1, 0x494($s0)
    ctx->pc = 0x13e664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1172)));
    // 0x13e668: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x13e668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x13e66c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13E66Cu;
    {
        const bool branch_taken_0x13e66c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e66c) {
            ctx->pc = 0x13E67Cu;
            goto label_13e67c;
        }
    }
    ctx->pc = 0x13E674u;
    // 0x13e674: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13E674u;
    {
        const bool branch_taken_0x13e674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E674u;
            // 0x13e678: 0xae200208  sw          $zero, 0x208($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e674) {
            ctx->pc = 0x13E680u;
            goto label_13e680;
        }
    }
    ctx->pc = 0x13E67Cu;
label_13e67c:
    // 0x13e67c: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x13e67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_13e680:
    // 0x13e680: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13e680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_13e684:
    // 0x13e684: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13e684u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13e688: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13e688u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13e68c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13e68cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e690: 0x3e00008  jr          $ra
    ctx->pc = 0x13E690u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E690u;
            // 0x13e694: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13E698u;
    // 0x13e698: 0x0  nop
    ctx->pc = 0x13e698u;
    // NOP
    // 0x13e69c: 0x0  nop
    ctx->pc = 0x13e69cu;
    // NOP
    ctx->pc = 0x13e6a0u;
}
