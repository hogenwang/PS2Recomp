#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00281970
// Address: 0x281970 - 0x2819f0
void sub_00281970_0x281970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281970_0x281970");
#endif

    switch (ctx->pc) {
        case 0x2819a4u: goto label_2819a4;
        default: break;
    }

    ctx->pc = 0x281970u;

    // 0x281970: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x281970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x281974: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x281974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x281978: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x281978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28197c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28197cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x281980: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x281980u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281984: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x281984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x281988: 0x5443000a  bnel        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x281988u;
    {
        const bool branch_taken_0x281988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x281988) {
            ctx->pc = 0x28198Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x281988u;
            // 0x28198c: 0xde030018  ld          $v1, 0x18($s0) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2819B4u;
            goto label_2819b4;
        }
    }
    ctx->pc = 0x281990u;
    // 0x281990: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x281990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x281994: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x281994u;
    {
        const bool branch_taken_0x281994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x281994) {
            ctx->pc = 0x281998u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x281994u;
            // 0x281998: 0xde030018  ld          $v1, 0x18($s0) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2819B4u;
            goto label_2819b4;
        }
    }
    ctx->pc = 0x28199Cu;
    // 0x28199c: 0xc0a0542  jal         func_281508
    ctx->pc = 0x28199Cu;
    SET_GPR_U32(ctx, 31, 0x2819A4u);
    ctx->pc = 0x2819A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28199Cu;
            // 0x2819a0: 0xde050018  ld          $a1, 0x18($s0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281508u;
    if (runtime->hasFunction(0x281508u)) {
        auto targetFn = runtime->lookupFunction(0x281508u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2819A4u; }
        if (ctx->pc != 0x2819A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281508_0x281508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2819A4u; }
        if (ctx->pc != 0x2819A4u) { return; }
    }
    ctx->pc = 0x2819A4u;
label_2819a4:
    // 0x2819a4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2819A4u;
    {
        const bool branch_taken_0x2819a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2819a4) {
            ctx->pc = 0x2819A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2819A4u;
            // 0x2819a8: 0xde030018  ld          $v1, 0x18($s0) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2819B4u;
            goto label_2819b4;
        }
    }
    ctx->pc = 0x2819ACu;
    // 0x2819ac: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2819ACu;
    {
        const bool branch_taken_0x2819ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2819B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2819ACu;
            // 0x2819b0: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2819ac) {
            ctx->pc = 0x2819D8u;
            goto label_2819d8;
        }
    }
    ctx->pc = 0x2819B4u;
label_2819b4:
    // 0x2819b4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2819B4u;
    {
        const bool branch_taken_0x2819b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2819B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2819B4u;
            // 0x2819b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2819b4) {
            ctx->pc = 0x2819E0u;
            goto label_2819e0;
        }
    }
    ctx->pc = 0x2819BCu;
    // 0x2819bc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2819bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2819c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2819c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2819c4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2819C4u;
    {
        const bool branch_taken_0x2819c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2819c4) {
            ctx->pc = 0x2819C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2819C4u;
            // 0x2819c8: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2819D8u;
            goto label_2819d8;
        }
    }
    ctx->pc = 0x2819CCu;
    // 0x2819cc: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2819CCu;
    {
        const bool branch_taken_0x2819cc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2819D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2819CCu;
            // 0x2819d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2819cc) {
            ctx->pc = 0x2819E0u;
            goto label_2819e0;
        }
    }
    ctx->pc = 0x2819D4u;
    // 0x2819d4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2819d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2819d8:
    // 0x2819d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2819d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2819dc: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2819dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_2819e0:
    // 0x2819e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2819e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2819e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2819e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2819e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2819E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2819ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2819E8u;
            // 0x2819ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2819F0u;
    ctx->pc = 0x2819f0u;
}
