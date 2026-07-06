#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012E610
// Address: 0x12e610 - 0x12e6b8
void sub_0012E610_0x12e610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012E610_0x12e610");
#endif

    switch (ctx->pc) {
        case 0x12e650u: goto label_12e650;
        case 0x12e668u: goto label_12e668;
        case 0x12e6a0u: goto label_12e6a0;
        default: break;
    }

    ctx->pc = 0x12e610u;

    // 0x12e610: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x12e610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x12e614: 0x3c0f0036  lui         $t7, 0x36
    ctx->pc = 0x12e614u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)54 << 16));
    // 0x12e618: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x12e618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x12e61c: 0x3c0e7fff  lui         $t6, 0x7FFF
    ctx->pc = 0x12e61cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32767 << 16));
    // 0x12e620: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x12e620u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e624: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x12e624u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x12e628: 0x8decbde8  lw          $t4, -0x4218($t7)
    ctx->pc = 0x12e628u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294950376)));
    // 0x12e62c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12e62cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e630: 0xafad0010  sw          $t5, 0x10($sp)
    ctx->pc = 0x12e630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 13));
    // 0x12e634: 0x240f0208  addiu       $t7, $zero, 0x208
    ctx->pc = 0x12e634u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x12e638: 0xafae0014  sw          $t6, 0x14($sp)
    ctx->pc = 0x12e638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 14));
    // 0x12e63c: 0xa7af000c  sh          $t7, 0xC($sp)
    ctx->pc = 0x12e63cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 15));
    // 0x12e640: 0xafac0054  sw          $t4, 0x54($sp)
    ctx->pc = 0x12e640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 12));
    // 0x12e644: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x12e644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x12e648: 0xc04afb2  jal         func_12BEC8
    ctx->pc = 0x12E648u;
    SET_GPR_U32(ctx, 31, 0x12E650u);
    ctx->pc = 0x12E64Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E648u;
            // 0x12e64c: 0xafae0008  sw          $t6, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BEC8u;
    if (runtime->hasFunction(0x12BEC8u)) {
        auto targetFn = runtime->lookupFunction(0x12BEC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E650u; }
        if (ctx->pc != 0x12E650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BEC8_0x12bec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E650u; }
        if (ctx->pc != 0x12E650u) { return; }
    }
    ctx->pc = 0x12E650u;
label_12e650:
    // 0x12e650: 0x8faf0000  lw          $t7, 0x0($sp)
    ctx->pc = 0x12e650u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12e654: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x12e654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12e658: 0xa1e00000  sb          $zero, 0x0($t7)
    ctx->pc = 0x12e658u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x12e65c: 0x3e00008  jr          $ra
    ctx->pc = 0x12E65Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E65Cu;
            // 0x12e660: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12E664u;
    // 0x12e664: 0x0  nop
    ctx->pc = 0x12e664u;
    // NOP
label_12e668:
    // 0x12e668: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x12e668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x12e66c: 0x3c0e7fff  lui         $t6, 0x7FFF
    ctx->pc = 0x12e66cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32767 << 16));
    // 0x12e670: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x12e670u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e674: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x12e674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x12e678: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x12e678u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x12e67c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x12e67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x12e680: 0x240f0208  addiu       $t7, $zero, 0x208
    ctx->pc = 0x12e680u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x12e684: 0xafae0014  sw          $t6, 0x14($sp)
    ctx->pc = 0x12e684u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 14));
    // 0x12e688: 0xa7af000c  sh          $t7, 0xC($sp)
    ctx->pc = 0x12e688u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 15));
    // 0x12e68c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12e68cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e690: 0xafa40054  sw          $a0, 0x54($sp)
    ctx->pc = 0x12e690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
    // 0x12e694: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x12e694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x12e698: 0xc04afd0  jal         func_12BF40
    ctx->pc = 0x12E698u;
    SET_GPR_U32(ctx, 31, 0x12E6A0u);
    ctx->pc = 0x12E69Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E698u;
            // 0x12e69c: 0xafae0008  sw          $t6, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BF40u;
    if (runtime->hasFunction(0x12BF40u)) {
        auto targetFn = runtime->lookupFunction(0x12BF40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E6A0u; }
        if (ctx->pc != 0x12E6A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BF40_0x12bf40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E6A0u; }
        if (ctx->pc != 0x12E6A0u) { return; }
    }
    ctx->pc = 0x12E6A0u;
label_12e6a0:
    // 0x12e6a0: 0x8faf0000  lw          $t7, 0x0($sp)
    ctx->pc = 0x12e6a0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12e6a4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x12e6a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12e6a8: 0xa1e00000  sb          $zero, 0x0($t7)
    ctx->pc = 0x12e6a8u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x12e6ac: 0x3e00008  jr          $ra
    ctx->pc = 0x12E6ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E6B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E6ACu;
            // 0x12e6b0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12E6B4u;
    // 0x12e6b4: 0x0  nop
    ctx->pc = 0x12e6b4u;
    // NOP
    ctx->pc = 0x12e6b8u;
}
