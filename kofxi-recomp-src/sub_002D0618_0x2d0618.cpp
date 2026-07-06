#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D0618
// Address: 0x2d0618 - 0x2d0710
void sub_002D0618_0x2d0618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0618_0x2d0618");
#endif

    switch (ctx->pc) {
        case 0x2d065cu: goto label_2d065c;
        case 0x2d067cu: goto label_2d067c;
        case 0x2d06a0u: goto label_2d06a0;
        case 0x2d06d4u: goto label_2d06d4;
        case 0x2d06f0u: goto label_2d06f0;
        default: break;
    }

    ctx->pc = 0x2d0618u;

    // 0x2d0618: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d0618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d061c: 0x2402010c  addiu       $v0, $zero, 0x10C
    ctx->pc = 0x2d061cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 268));
    // 0x2d0620: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2d0620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2d0624: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2d0624u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0628: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2d0628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d062c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2d062cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0630: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x2d0630u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2d0634: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2d0634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2d0638: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2d0638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2d063c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2d063cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0640: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2d0640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2d0644: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2d0644u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0648: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2d0648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2d064c: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x2D064Cu;
    {
        const bool branch_taken_0x2d064c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D064Cu;
            // 0x2d0650: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d064c) {
            ctx->pc = 0x2D06F0u;
            goto label_2d06f0;
        }
    }
    ctx->pc = 0x2D0654u;
    // 0x2d0654: 0xc0b4092  jal         func_2D0248
    ctx->pc = 0x2D0654u;
    SET_GPR_U32(ctx, 31, 0x2D065Cu);
    ctx->pc = 0x2D0248u;
    if (runtime->hasFunction(0x2D0248u)) {
        auto targetFn = runtime->lookupFunction(0x2D0248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D065Cu; }
        if (ctx->pc != 0x2D065Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D0248_0x2d0248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D065Cu; }
        if (ctx->pc != 0x2D065Cu) { return; }
    }
    ctx->pc = 0x2D065Cu;
label_2d065c:
    // 0x2d065c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d065cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0660: 0x2402010c  addiu       $v0, $zero, 0x10C
    ctx->pc = 0x2d0660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 268));
    // 0x2d0664: 0x24830007  addiu       $v1, $a0, 0x7
    ctx->pc = 0x2d0664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x2d0668: 0x2484000e  addiu       $a0, $a0, 0xE
    ctx->pc = 0x2d0668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14));
    // 0x2d066c: 0x28650000  slti        $a1, $v1, 0x0
    ctx->pc = 0x2d066cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2d0670: 0x85180b  movn        $v1, $a0, $a1
    ctx->pc = 0x2d0670u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x2d0674: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x2d0674u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x2d0678: 0x203202b  sltu        $a0, $s0, $v1
    ctx->pc = 0x2d0678u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2d067c:
    // 0x2d067c: 0x1480001c  bnez        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2D067Cu;
    {
        const bool branch_taken_0x2d067c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D067Cu;
            // 0x2d0680: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d067c) {
            ctx->pc = 0x2D06F0u;
            goto label_2d06f0;
        }
    }
    ctx->pc = 0x2D0684u;
    // 0x2d0684: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x2d0684u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2d0688: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x2D0688u;
    {
        const bool branch_taken_0x2d0688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0688) {
            ctx->pc = 0x2D068Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0688u;
            // 0x2d068c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D06E0u;
            goto label_2d06e0;
        }
    }
    ctx->pc = 0x2D0690u;
    // 0x2d0690: 0x2031023  subu        $v0, $s0, $v1
    ctx->pc = 0x2d0690u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2d0694: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D0694u;
    {
        const bool branch_taken_0x2d0694 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2D0698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0694u;
            // 0x2d0698: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0694) {
            ctx->pc = 0x2D06BCu;
            goto label_2d06bc;
        }
    }
    ctx->pc = 0x2D069Cu;
    // 0x2d069c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d069cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d06a0:
    // 0x2d06a0: 0x2241821  addu        $v1, $s1, $a0
    ctx->pc = 0x2d06a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2d06a4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2d06a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2d06a8: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x2d06a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2d06ac: 0x0  nop
    ctx->pc = 0x2d06acu;
    // NOP
    // 0x2d06b0: 0x0  nop
    ctx->pc = 0x2d06b0u;
    // NOP
    // 0x2d06b4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D06B4u;
    {
        const bool branch_taken_0x2d06b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D06B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D06B4u;
            // 0x2d06b8: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d06b4) {
            ctx->pc = 0x2D06A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d06a0;
        }
    }
    ctx->pc = 0x2D06BCu;
label_2d06bc:
    // 0x2d06bc: 0xae900000  sw          $s0, 0x0($s4)
    ctx->pc = 0x2d06bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
    // 0x2d06c0: 0x2243821  addu        $a3, $s1, $a0
    ctx->pc = 0x2d06c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2d06c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d06c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d06c8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2d06c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d06cc: 0xc0b41c4  jal         func_2D0710
    ctx->pc = 0x2D06CCu;
    SET_GPR_U32(ctx, 31, 0x2D06D4u);
    ctx->pc = 0x2D06D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D06CCu;
            // 0x2d06d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D0710u;
    if (runtime->hasFunction(0x2D0710u)) {
        auto targetFn = runtime->lookupFunction(0x2D0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D06D4u; }
        if (ctx->pc != 0x2D06D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D0710_0x2d0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D06D4u; }
        if (ctx->pc != 0x2D06D4u) { return; }
    }
    ctx->pc = 0x2D06D4u;
label_2d06d4:
    // 0x2d06d4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D06D4u;
    {
        const bool branch_taken_0x2d06d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D06D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D06D4u;
            // 0x2d06d8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d06d4) {
            ctx->pc = 0x2D06F4u;
            goto label_2d06f4;
        }
    }
    ctx->pc = 0x2D06DCu;
    // 0x2d06dc: 0x0  nop
    ctx->pc = 0x2d06dcu;
    // NOP
label_2d06e0:
    // 0x2d06e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d06e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d06e4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2d06e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d06e8: 0xc0b41c4  jal         func_2D0710
    ctx->pc = 0x2D06E8u;
    SET_GPR_U32(ctx, 31, 0x2D06F0u);
    ctx->pc = 0x2D06ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D06E8u;
            // 0x2d06ec: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D0710u;
    if (runtime->hasFunction(0x2D0710u)) {
        auto targetFn = runtime->lookupFunction(0x2D0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D06F0u; }
        if (ctx->pc != 0x2D06F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D0710_0x2d0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D06F0u; }
        if (ctx->pc != 0x2D06F0u) { return; }
    }
    ctx->pc = 0x2D06F0u;
label_2d06f0:
    // 0x2d06f0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2d06f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d06f4:
    // 0x2d06f4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2d06f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d06f8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2d06f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d06fc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2d06fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d0700: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2d0700u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d0704: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2d0704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d0708: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0708u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D070Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0708u;
            // 0x2d070c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D0710u;
    ctx->pc = 0x2d0710u;
}
