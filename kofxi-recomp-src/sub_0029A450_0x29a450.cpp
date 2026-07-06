#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029A450
// Address: 0x29a450 - 0x29a510
void sub_0029A450_0x29a450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A450_0x29a450");
#endif

    switch (ctx->pc) {
        case 0x29a480u: goto label_29a480;
        case 0x29a498u: goto label_29a498;
        case 0x29a4b8u: goto label_29a4b8;
        case 0x29a4d0u: goto label_29a4d0;
        case 0x29a4fcu: goto label_29a4fc;
        default: break;
    }

    ctx->pc = 0x29a450u;

    // 0x29a450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29a450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29a454: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29a454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29a458: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x29a458u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x29a45c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29a45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29a460: 0x8e0267e8  lw          $v0, 0x67E8($s0)
    ctx->pc = 0x29a460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26600)));
    // 0x29a464: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29A464u;
    {
        const bool branch_taken_0x29a464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A464u;
            // 0x29a468: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a464) {
            ctx->pc = 0x29A488u;
            goto label_29a488;
        }
    }
    ctx->pc = 0x29A46Cu;
    // 0x29a46c: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x29a46cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x29a470: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x29a470u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x29a474: 0x2484a278  addiu       $a0, $a0, -0x5D88
    ctx->pc = 0x29a474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943352));
    // 0x29a478: 0xc0a6170  jal         func_2985C0
    ctx->pc = 0x29A478u;
    SET_GPR_U32(ctx, 31, 0x29A480u);
    ctx->pc = 0x29A47Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A478u;
            // 0x29a47c: 0x24a5a370  addiu       $a1, $a1, -0x5C90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2985C0u;
    if (runtime->hasFunction(0x2985C0u)) {
        auto targetFn = runtime->lookupFunction(0x2985C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A480u; }
        if (ctx->pc != 0x29A480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002985C0_0x2985c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A480u; }
        if (ctx->pc != 0x29A480u) { return; }
    }
    ctx->pc = 0x29A480u;
label_29a480:
    // 0x29a480: 0xae0267e8  sw          $v0, 0x67E8($s0)
    ctx->pc = 0x29a480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26600), GPR_U32(ctx, 2));
    // 0x29a484: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x29a484u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_29a488:
    // 0x29a488: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29a488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a48c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29a48cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a490: 0x3e00008  jr          $ra
    ctx->pc = 0x29A490u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A490u;
            // 0x29a494: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29A498u;
label_29a498:
    // 0x29a498: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x29a498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x29a49c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x29a49cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x29a4a0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x29a4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x29a4a4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x29a4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x29a4a8: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x29a4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x29a4ac: 0x3e00008  jr          $ra
    ctx->pc = 0x29A4ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A4B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A4ACu;
            // 0x29a4b0: 0xac620014  sw          $v0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29A4B4u;
    // 0x29a4b4: 0x0  nop
    ctx->pc = 0x29a4b4u;
    // NOP
label_29a4b8:
    // 0x29a4b8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x29a4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x29a4bc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x29a4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x29a4c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29a4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x29a4c4: 0x3e00008  jr          $ra
    ctx->pc = 0x29A4C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A4C4u;
            // 0x29a4c8: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29A4CCu;
    // 0x29a4cc: 0x0  nop
    ctx->pc = 0x29a4ccu;
    // NOP
label_29a4d0:
    // 0x29a4d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29a4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29a4d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29a4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29a4d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29a4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29a4dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29a4dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a4e0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x29a4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29a4e4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x29a4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x29a4e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29a4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29a4ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29A4ECu;
    {
        const bool branch_taken_0x29a4ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A4F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A4ECu;
            // 0x29a4f0: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a4ec) {
            ctx->pc = 0x29A4FCu;
            goto label_29a4fc;
        }
    }
    ctx->pc = 0x29A4F4u;
    // 0x29a4f4: 0xc0a03b6  jal         func_280ED8
    ctx->pc = 0x29A4F4u;
    SET_GPR_U32(ctx, 31, 0x29A4FCu);
    ctx->pc = 0x29A4F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A4F4u;
            // 0x29a4f8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x280ED8u;
    if (runtime->hasFunction(0x280ED8u)) {
        auto targetFn = runtime->lookupFunction(0x280ED8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A4FCu; }
        if (ctx->pc != 0x29A4FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00280ED8_0x280ed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A4FCu; }
        if (ctx->pc != 0x29A4FCu) { return; }
    }
    ctx->pc = 0x29A4FCu;
label_29a4fc:
    // 0x29a4fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29a4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a500: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29a500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a504: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29a504u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a508: 0x80a8c0a  j           func_2A3028
    ctx->pc = 0x29A508u;
    ctx->pc = 0x29A50Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A508u;
            // 0x29a50c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002A3028_0x2a3028(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x29A510u;
    ctx->pc = 0x29a510u;
}
