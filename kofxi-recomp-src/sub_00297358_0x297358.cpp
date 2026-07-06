#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00297358
// Address: 0x297358 - 0x297448
void sub_00297358_0x297358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297358_0x297358");
#endif

    switch (ctx->pc) {
        case 0x29738cu: goto label_29738c;
        case 0x2973acu: goto label_2973ac;
        case 0x2973b4u: goto label_2973b4;
        case 0x2973ccu: goto label_2973cc;
        case 0x2973f8u: goto label_2973f8;
        case 0x297400u: goto label_297400;
        default: break;
    }

    ctx->pc = 0x297358u;

    // 0x297358: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x297358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29735c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x29735cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x297360: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x297360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x297364: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x297364u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297368: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x297368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29736c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x29736cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297370: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x297370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x297374: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x297374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x297378: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x297378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x29737c: 0x14800016  bnez        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x29737Cu;
    {
        const bool branch_taken_0x29737c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x297380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29737Cu;
            // 0x297380: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29737c) {
            ctx->pc = 0x2973D8u;
            goto label_2973d8;
        }
    }
    ctx->pc = 0x297384u;
    // 0x297384: 0xc0af004  jal         func_2BC010
    ctx->pc = 0x297384u;
    SET_GPR_U32(ctx, 31, 0x29738Cu);
    ctx->pc = 0x297388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297384u;
            // 0x297388: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC010u;
    if (runtime->hasFunction(0x2BC010u)) {
        auto targetFn = runtime->lookupFunction(0x2BC010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29738Cu; }
        if (ctx->pc != 0x29738Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC010_0x2bc010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29738Cu; }
        if (ctx->pc != 0x29738Cu) { return; }
    }
    ctx->pc = 0x29738Cu;
label_29738c:
    // 0x29738c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x29738Cu;
    {
        const bool branch_taken_0x29738c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x297390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29738Cu;
            // 0x297390: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29738c) {
            ctx->pc = 0x2973D4u;
            goto label_2973d4;
        }
    }
    ctx->pc = 0x297394u;
    // 0x297394: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x297394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x297398: 0x24050065  addiu       $a1, $zero, 0x65
    ctx->pc = 0x297398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x29739c: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x29739cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2973a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2973a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2973a4: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2973A4u;
    SET_GPR_U32(ctx, 31, 0x2973ACu);
    ctx->pc = 0x2973A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2973A4u;
            // 0x2973a8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2973ACu; }
        if (ctx->pc != 0x2973ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2973ACu; }
        if (ctx->pc != 0x2973ACu) { return; }
    }
    ctx->pc = 0x2973ACu;
label_2973ac:
    // 0x2973ac: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2973ACu;
    {
        const bool branch_taken_0x2973ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2973B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2973ACu;
            // 0x2973b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2973ac) {
            ctx->pc = 0x297428u;
            goto label_297428;
        }
    }
    ctx->pc = 0x2973B4u;
label_2973b4:
    // 0x2973b4: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x2973b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x2973b8: 0x24050065  addiu       $a1, $zero, 0x65
    ctx->pc = 0x2973b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x2973bc: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x2973bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2973c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2973c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2973c4: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2973C4u;
    SET_GPR_U32(ctx, 31, 0x2973CCu);
    ctx->pc = 0x2973C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2973C4u;
            // 0x2973c8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2973CCu; }
        if (ctx->pc != 0x2973CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2973CCu; }
        if (ctx->pc != 0x2973CCu) { return; }
    }
    ctx->pc = 0x2973CCu;
label_2973cc:
    // 0x2973cc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2973CCu;
    {
        const bool branch_taken_0x2973cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2973D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2973CCu;
            // 0x2973d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2973cc) {
            ctx->pc = 0x297428u;
            goto label_297428;
        }
    }
    ctx->pc = 0x2973D4u;
label_2973d4:
    // 0x2973d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2973d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2973d8:
    // 0x2973d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2973d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2973dc: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x2973dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2973e0: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x2973e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2973e4: 0x2880a  movz        $s1, $zero, $v0
    ctx->pc = 0x2973e4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
    // 0x2973e8: 0x230182a  slt         $v1, $s1, $s0
    ctx->pc = 0x2973e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2973ec: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2973ECu;
    {
        const bool branch_taken_0x2973ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2973ec) {
            ctx->pc = 0x2973F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2973ECu;
            // 0x2973f0: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x297418u;
            goto label_297418;
        }
    }
    ctx->pc = 0x2973F4u;
    // 0x2973f4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2973f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2973f8:
    // 0x2973f8: 0xc0af10e  jal         func_2BC438
    ctx->pc = 0x2973F8u;
    SET_GPR_U32(ctx, 31, 0x297400u);
    ctx->pc = 0x2973FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2973F8u;
            // 0x2973fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC438u;
    if (runtime->hasFunction(0x2BC438u)) {
        auto targetFn = runtime->lookupFunction(0x2BC438u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297400u; }
        if (ctx->pc != 0x297400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC438_0x2bc438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297400u; }
        if (ctx->pc != 0x297400u) { return; }
    }
    ctx->pc = 0x297400u;
label_297400:
    // 0x297400: 0x1040ffec  beqz        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x297400u;
    {
        const bool branch_taken_0x297400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x297404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297400u;
            // 0x297404: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297400) {
            ctx->pc = 0x2973B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2973b4;
        }
    }
    ctx->pc = 0x297408u;
    // 0x297408: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x297408u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x29740c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x29740Cu;
    {
        const bool branch_taken_0x29740c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x297410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29740Cu;
            // 0x297410: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29740c) {
            ctx->pc = 0x2973F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2973f8;
        }
    }
    ctx->pc = 0x297414u;
    // 0x297414: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x297414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_297418:
    // 0x297418: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x297418u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x29741c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29741cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x297420: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x297420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x297424: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x297424u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
label_297428:
    // 0x297428: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x297428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29742c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x29742cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x297430: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x297430u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x297434: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x297434u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297438: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x297438u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29743c: 0x3e00008  jr          $ra
    ctx->pc = 0x29743Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29743Cu;
            // 0x297440: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x297444u;
    // 0x297444: 0x0  nop
    ctx->pc = 0x297444u;
    // NOP
    ctx->pc = 0x297448u;
}
