#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DD428
// Address: 0x1dd428 - 0x1dd538
void sub_001DD428_0x1dd428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD428_0x1dd428");
#endif

    switch (ctx->pc) {
        case 0x1dd4e8u: goto label_1dd4e8;
        case 0x1dd4f8u: goto label_1dd4f8;
        default: break;
    }

    ctx->pc = 0x1dd428u;

    // 0x1dd428: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dd428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dd42c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1dd42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1dd430: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1dd430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1dd434: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1dd434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd438: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1dd438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1dd43c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1dd43cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd440: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1dd440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1dd444: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1dd444u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd448: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1dd448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1dd44c: 0x3c080008  lui         $t0, 0x8
    ctx->pc = 0x1dd44cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)8 << 16));
    // 0x1dd450: 0x8c49ec08  lw          $t1, -0x13F8($v0)
    ctx->pc = 0x1dd450u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962184)));
    // 0x1dd454: 0x350840d0  ori         $t0, $t0, 0x40D0
    ctx->pc = 0x1dd454u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)16592);
    // 0x1dd458: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x1dd458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1dd45c: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x1dd45cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1dd460: 0xafa80004  sw          $t0, 0x4($sp)
    ctx->pc = 0x1dd460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
    // 0x1dd464: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x1dd464u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1dd468: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x1dd468u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1dd46c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1dd46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1dd470: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x1dd470u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x1dd474: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dd474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dd478: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1dd478u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1dd47c: 0x24452840  addiu       $a1, $v0, 0x2840
    ctx->pc = 0x1dd47cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
    // 0x1dd480: 0x11200017  beqz        $t1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1DD480u;
    {
        const bool branch_taken_0x1dd480 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD480u;
            // 0x1dd484: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd480) {
            ctx->pc = 0x1DD4E0u;
            goto label_1dd4e0;
        }
    }
    ctx->pc = 0x1DD488u;
    // 0x1dd488: 0x29220002  slti        $v0, $t1, 0x2
    ctx->pc = 0x1dd488u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1dd48c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DD48Cu;
    {
        const bool branch_taken_0x1dd48c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd48c) {
            ctx->pc = 0x1DD490u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD48Cu;
            // 0x1dd490: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DD4D0u;
            goto label_1dd4d0;
        }
    }
    ctx->pc = 0x1DD494u;
    // 0x1dd494: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1dd494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1dd498: 0x8c42ec0c  lw          $v0, -0x13F4($v0)
    ctx->pc = 0x1dd498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962188)));
    // 0x1dd49c: 0x45182a  slt         $v1, $v0, $a1
    ctx->pc = 0x1dd49cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1dd4a0: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1DD4A0u;
    {
        const bool branch_taken_0x1dd4a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd4a0) {
            ctx->pc = 0x1DD4A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD4A0u;
            // 0x1dd4a4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DD4D0u;
            goto label_1dd4d0;
        }
    }
    ctx->pc = 0x1DD4A8u;
    // 0x1dd4a8: 0x48102a  slt         $v0, $v0, $t0
    ctx->pc = 0x1dd4a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1dd4ac: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DD4ACu;
    {
        const bool branch_taken_0x1dd4ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd4ac) {
            ctx->pc = 0x1DD4B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD4ACu;
            // 0x1dd4b0: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DD4D0u;
            goto label_1dd4d0;
        }
    }
    ctx->pc = 0x1DD4B4u;
    // 0x1dd4b4: 0x3c0201c0  lui         $v0, 0x1C0
    ctx->pc = 0x1dd4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)448 << 16));
    // 0x1dd4b8: 0x2442b948  addiu       $v0, $v0, -0x46B8
    ctx->pc = 0x1dd4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949192));
    // 0x1dd4bc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1dd4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1dd4c0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1dd4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dd4c4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1dd4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1dd4c8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1DD4C8u;
    {
        const bool branch_taken_0x1dd4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD4CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD4C8u;
            // 0x1dd4cc: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd4c8) {
            ctx->pc = 0x1DD4FCu;
            goto label_1dd4fc;
        }
    }
    ctx->pc = 0x1DD4D0u;
label_1dd4d0:
    // 0x1dd4d0: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x1dd4d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dd4d4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1DD4D4u;
    {
        const bool branch_taken_0x1dd4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD4D4u;
            // 0x1dd4d8: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd4d4) {
            ctx->pc = 0x1DD4FCu;
            goto label_1dd4fc;
        }
    }
    ctx->pc = 0x1DD4DCu;
    // 0x1dd4dc: 0x0  nop
    ctx->pc = 0x1dd4dcu;
    // NOP
label_1dd4e0:
    // 0x1dd4e0: 0xc077b34  jal         func_1DECD0
    ctx->pc = 0x1DD4E0u;
    SET_GPR_U32(ctx, 31, 0x1DD4E8u);
    ctx->pc = 0x1DECD0u;
    if (runtime->hasFunction(0x1DECD0u)) {
        auto targetFn = runtime->lookupFunction(0x1DECD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD4E8u; }
        if (ctx->pc != 0x1DD4E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DECD0_0x1decd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD4E8u; }
        if (ctx->pc != 0x1DD4E8u) { return; }
    }
    ctx->pc = 0x1DD4E8u;
label_1dd4e8:
    // 0x1dd4e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dd4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd4ec: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1dd4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1dd4f0: 0xc077b34  jal         func_1DECD0
    ctx->pc = 0x1DD4F0u;
    SET_GPR_U32(ctx, 31, 0x1DD4F8u);
    ctx->pc = 0x1DD4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD4F0u;
            // 0x1dd4f4: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DECD0u;
    if (runtime->hasFunction(0x1DECD0u)) {
        auto targetFn = runtime->lookupFunction(0x1DECD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD4F8u; }
        if (ctx->pc != 0x1DD4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DECD0_0x1decd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD4F8u; }
        if (ctx->pc != 0x1DD4F8u) { return; }
    }
    ctx->pc = 0x1DD4F8u;
label_1dd4f8:
    // 0x1dd4f8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1dd4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1dd4fc:
    // 0x1dd4fc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1dd4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dd500: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DD500u;
    {
        const bool branch_taken_0x1dd500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd500) {
            ctx->pc = 0x1DD504u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD500u;
            // 0x1dd504: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DD518u;
            goto label_1dd518;
        }
    }
    ctx->pc = 0x1DD508u;
    // 0x1dd508: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1dd508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1dd50c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DD50Cu;
    {
        const bool branch_taken_0x1dd50c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD50Cu;
            // 0x1dd510: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd50c) {
            ctx->pc = 0x1DD51Cu;
            goto label_1dd51c;
        }
    }
    ctx->pc = 0x1DD514u;
    // 0x1dd514: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x1dd514u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1dd518:
    // 0x1dd518: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1dd518u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1dd51c:
    // 0x1dd51c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1dd51cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd520: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1dd520u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dd524: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1dd524u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dd528: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1dd528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1dd52c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD52Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD52Cu;
            // 0x1dd530: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DD534u;
    // 0x1dd534: 0x0  nop
    ctx->pc = 0x1dd534u;
    // NOP
    ctx->pc = 0x1dd538u;
}
