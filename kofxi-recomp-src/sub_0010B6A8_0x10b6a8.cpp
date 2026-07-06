#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010B6A8
// Address: 0x10b6a8 - 0x10b738
void sub_0010B6A8_0x10b6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B6A8_0x10b6a8");
#endif

    switch (ctx->pc) {
        case 0x10b6e8u: goto label_10b6e8;
        case 0x10b714u: goto label_10b714;
        default: break;
    }

    ctx->pc = 0x10b6a8u;

    // 0x10b6a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10b6a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10b6ac: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x10b6acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b6b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10b6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10b6b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10b6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10b6b8: 0x10c00016  beqz        $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x10B6B8u;
    {
        const bool branch_taken_0x10b6b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B6BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B6B8u;
            // 0x10b6bc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b6b8) {
            ctx->pc = 0x10B714u;
            goto label_10b714;
        }
    }
    ctx->pc = 0x10B6C0u;
    // 0x10b6c0: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x10b6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x10b6c4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x10b6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10b6c8: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x10B6C8u;
    {
        const bool branch_taken_0x10b6c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x10B6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B6C8u;
            // 0x10b6cc: 0x8e020160  lw          $v0, 0x160($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b6c8) {
            ctx->pc = 0x10B6F0u;
            goto label_10b6f0;
        }
    }
    ctx->pc = 0x10B6D0u;
    // 0x10b6d0: 0x54430002  bnel        $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10B6D0u;
    {
        const bool branch_taken_0x10b6d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x10b6d0) {
            ctx->pc = 0x10B6D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10B6D0u;
            // 0x10b6d4: 0x8e0501c8  lw          $a1, 0x1C8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 456)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10B6DCu;
            goto label_10b6dc;
        }
    }
    ctx->pc = 0x10B6D8u;
    // 0x10b6d8: 0x8e0501d4  lw          $a1, 0x1D4($s0)
    ctx->pc = 0x10b6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_10b6dc:
    // 0x10b6dc: 0x24e6ffff  addiu       $a2, $a3, -0x1
    ctx->pc = 0x10b6dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x10b6e0: 0xc042bc2  jal         func_10AF08
    ctx->pc = 0x10B6E0u;
    SET_GPR_U32(ctx, 31, 0x10B6E8u);
    ctx->pc = 0x10B6E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B6E0u;
            // 0x10b6e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10AF08u;
    if (runtime->hasFunction(0x10AF08u)) {
        auto targetFn = runtime->lookupFunction(0x10AF08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B6E8u; }
        if (ctx->pc != 0x10B6E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AF08_0x10af08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B6E8u; }
        if (ctx->pc != 0x10B6E8u) { return; }
    }
    ctx->pc = 0x10B6E8u;
label_10b6e8:
    // 0x10b6e8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x10B6E8u;
    {
        const bool branch_taken_0x10b6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B6ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B6E8u;
            // 0x10b6ec: 0x8e030108  lw          $v1, 0x108($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b6e8) {
            ctx->pc = 0x10B718u;
            goto label_10b718;
        }
    }
    ctx->pc = 0x10B6F0u;
label_10b6f0:
    // 0x10b6f0: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10B6F0u;
    {
        const bool branch_taken_0x10b6f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x10b6f0) {
            ctx->pc = 0x10B6F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10B6F0u;
            // 0x10b6f4: 0x8e0501d8  lw          $a1, 0x1D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 472)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10B704u;
            goto label_10b704;
        }
    }
    ctx->pc = 0x10B6F8u;
    // 0x10b6f8: 0x8e0501e4  lw          $a1, 0x1E4($s0)
    ctx->pc = 0x10b6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x10b6fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10B6FCu;
    {
        const bool branch_taken_0x10b6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B6FCu;
            // 0x10b700: 0x8e0601f4  lw          $a2, 0x1F4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b6fc) {
            ctx->pc = 0x10B708u;
            goto label_10b708;
        }
    }
    ctx->pc = 0x10B704u;
label_10b704:
    // 0x10b704: 0x8e0601e8  lw          $a2, 0x1E8($s0)
    ctx->pc = 0x10b704u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 488)));
label_10b708:
    // 0x10b708: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x10b708u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x10b70c: 0xc042c72  jal         func_10B1C8
    ctx->pc = 0x10B70Cu;
    SET_GPR_U32(ctx, 31, 0x10B714u);
    ctx->pc = 0x10B710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B70Cu;
            // 0x10b710: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B1C8u;
    if (runtime->hasFunction(0x10B1C8u)) {
        auto targetFn = runtime->lookupFunction(0x10B1C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B714u; }
        if (ctx->pc != 0x10B714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B1C8_0x10b1c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B714u; }
        if (ctx->pc != 0x10B714u) { return; }
    }
    ctx->pc = 0x10B714u;
label_10b714:
    // 0x10b714: 0x8e030108  lw          $v1, 0x108($s0)
    ctx->pc = 0x10b714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_10b718:
    // 0x10b718: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10b718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b71c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10B71Cu;
    {
        const bool branch_taken_0x10b71c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10B720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B71Cu;
            // 0x10b720: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b71c) {
            ctx->pc = 0x10B72Cu;
            goto label_10b72c;
        }
    }
    ctx->pc = 0x10B724u;
    // 0x10b724: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10b724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10b728: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x10b728u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
label_10b72c:
    // 0x10b72c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b72cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b730: 0x3e00008  jr          $ra
    ctx->pc = 0x10B730u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B730u;
            // 0x10b734: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10B738u;
    ctx->pc = 0x10b738u;
}
