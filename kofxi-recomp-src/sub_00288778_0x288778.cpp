#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00288778
// Address: 0x288778 - 0x288808
void sub_00288778_0x288778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288778_0x288778");
#endif

    switch (ctx->pc) {
        case 0x28879cu: goto label_28879c;
        case 0x2887c8u: goto label_2887c8;
        default: break;
    }

    ctx->pc = 0x288778u;

    // 0x288778: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x288778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28877c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28877cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288780: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x288780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x288784: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x288784u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x288788: 0x10c00019  beqz        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x288788u;
    {
        const bool branch_taken_0x288788 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x28878Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288788u;
            // 0x28878c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288788) {
            ctx->pc = 0x2887F0u;
            goto label_2887f0;
        }
    }
    ctx->pc = 0x288790u;
    // 0x288790: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x288790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x288794: 0xc0a22e0  jal         func_288B80
    ctx->pc = 0x288794u;
    SET_GPR_U32(ctx, 31, 0x28879Cu);
    ctx->pc = 0x288798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288794u;
            // 0x288798: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288B80u;
    if (runtime->hasFunction(0x288B80u)) {
        auto targetFn = runtime->lookupFunction(0x288B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28879Cu; }
        if (ctx->pc != 0x28879Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00288B80_0x288b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28879Cu; }
        if (ctx->pc != 0x28879Cu) { return; }
    }
    ctx->pc = 0x28879Cu;
label_28879c:
    // 0x28879c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28879cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2887a0: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2887A0u;
    {
        const bool branch_taken_0x2887a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2887A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2887A0u;
            // 0x2887a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2887a0) {
            ctx->pc = 0x2887F4u;
            goto label_2887f4;
        }
    }
    ctx->pc = 0x2887A8u;
    // 0x2887a8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2887a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2887ac: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2887acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2887b0: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x2887b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2887b4: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x2887b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2887b8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2887B8u;
    {
        const bool branch_taken_0x2887b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2887b8) {
            ctx->pc = 0x2887BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2887B8u;
            // 0x2887bc: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2887DCu;
            goto label_2887dc;
        }
    }
    ctx->pc = 0x2887C0u;
    // 0x2887c0: 0xc0a1ada  jal         func_286B68
    ctx->pc = 0x2887C0u;
    SET_GPR_U32(ctx, 31, 0x2887C8u);
    ctx->pc = 0x2887C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2887C0u;
            // 0x2887c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286B68u;
    if (runtime->hasFunction(0x286B68u)) {
        auto targetFn = runtime->lookupFunction(0x286B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2887C8u; }
        if (ctx->pc != 0x2887C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286B68_0x286b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2887C8u; }
        if (ctx->pc != 0x2887C8u) { return; }
    }
    ctx->pc = 0x2887C8u;
label_2887c8:
    // 0x2887c8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2887C8u;
    {
        const bool branch_taken_0x2887c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2887c8) {
            ctx->pc = 0x2887CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2887C8u;
            // 0x2887cc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2887D8u;
            goto label_2887d8;
        }
    }
    ctx->pc = 0x2887D0u;
    // 0x2887d0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2887D0u;
    {
        const bool branch_taken_0x2887d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2887D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2887D0u;
            // 0x2887d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2887d0) {
            ctx->pc = 0x2887F4u;
            goto label_2887f4;
        }
    }
    ctx->pc = 0x2887D8u;
label_2887d8:
    // 0x2887d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2887d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2887dc:
    // 0x2887dc: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2887dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2887e0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2887e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2887e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2887e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2887e8: 0xfc710000  sd          $s1, 0x0($v1)
    ctx->pc = 0x2887e8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 17));
    // 0x2887ec: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x2887ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
label_2887f0:
    // 0x2887f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2887f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2887f4:
    // 0x2887f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2887f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2887f8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2887f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2887fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2887fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x288800: 0x3e00008  jr          $ra
    ctx->pc = 0x288800u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288800u;
            // 0x288804: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x288808u;
    ctx->pc = 0x288808u;
}
