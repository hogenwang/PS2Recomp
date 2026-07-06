#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F1BD8
// Address: 0x2f1bd8 - 0x2f1c78
void sub_002F1BD8_0x2f1bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1BD8_0x2f1bd8");
#endif

    switch (ctx->pc) {
        case 0x2f1c64u: goto label_2f1c64;
        default: break;
    }

    ctx->pc = 0x2f1bd8u;

    // 0x2f1bd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f1bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f1bdc: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x2f1bdcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1be0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2f1be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2f1be4: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2f1be4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1be8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2f1be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2f1bec: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2f1becu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2f1bf0: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x2f1bf0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x2f1bf4: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2f1bf4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1bf8: 0x260deca8  addiu       $t5, $s0, -0x1358
    ctx->pc = 0x2f1bf8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962344));
    // 0x2f1bfc: 0x8e02eca8  lw          $v0, -0x1358($s0)
    ctx->pc = 0x2f1bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294962344)));
    // 0x2f1c00: 0xada00064  sw          $zero, 0x64($t5)
    ctx->pc = 0x2f1c00u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 100), GPR_U32(ctx, 0));
    // 0x2f1c04: 0x2405113a  addiu       $a1, $zero, 0x113A
    ctx->pc = 0x2f1c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4410));
    // 0x2f1c08: 0x104c0003  beq         $v0, $t4, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1C08u;
    {
        const bool branch_taken_0x2f1c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 12));
        ctx->pc = 0x2F1C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1C08u;
            // 0x2f1c0c: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1c08) {
            ctx->pc = 0x2F1C18u;
            goto label_2f1c18;
        }
    }
    ctx->pc = 0x2F1C10u;
    // 0x2f1c10: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x2f1c10u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f1c14: 0xadaf0064  sw          $t7, 0x64($t5)
    ctx->pc = 0x2f1c14u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 100), GPR_U32(ctx, 15));
label_2f1c18:
    // 0x2f1c18: 0x8dae0004  lw          $t6, 0x4($t5)
    ctx->pc = 0x2f1c18u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x2f1c1c: 0x11c70004  beq         $t6, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F1C1Cu;
    {
        const bool branch_taken_0x2f1c1c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 7));
        ctx->pc = 0x2F1C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1C1Cu;
            // 0x2f1c20: 0x1c0582d  daddu       $t3, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1c1c) {
            ctx->pc = 0x2F1C30u;
            goto label_2f1c30;
        }
    }
    ctx->pc = 0x2F1C24u;
    // 0x2f1c24: 0x8daf0064  lw          $t7, 0x64($t5)
    ctx->pc = 0x2f1c24u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 100)));
    // 0x2f1c28: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x2f1c28u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x2f1c2c: 0xadaf0064  sw          $t7, 0x64($t5)
    ctx->pc = 0x2f1c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 100), GPR_U32(ctx, 15));
label_2f1c30:
    // 0x2f1c30: 0x8daf0064  lw          $t7, 0x64($t5)
    ctx->pc = 0x2f1c30u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 100)));
    // 0x2f1c34: 0x11e0000c  beqz        $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x2F1C34u;
    {
        const bool branch_taken_0x2f1c34 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1C34u;
            // 0x2f1c38: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1c34) {
            ctx->pc = 0x2F1C68u;
            goto label_2f1c68;
        }
    }
    ctx->pc = 0x2F1C3Cu;
    // 0x2f1c3c: 0xada70004  sw          $a3, 0x4($t5)
    ctx->pc = 0x2f1c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 7));
    // 0x2f1c40: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x2f1c40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x2f1c44: 0x24841ab0  addiu       $a0, $a0, 0x1AB0
    ctx->pc = 0x2f1c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6832));
    // 0x2f1c48: 0xafac0000  sw          $t4, 0x0($sp)
    ctx->pc = 0x2f1c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 12));
    // 0x2f1c4c: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2f1c4cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2f1c50: 0xada20008  sw          $v0, 0x8($t5)
    ctx->pc = 0x2f1c50u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 2));
    // 0x2f1c54: 0xae0ceca8  sw          $t4, -0x1358($s0)
    ctx->pc = 0x2f1c54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294962344), GPR_U32(ctx, 12));
    // 0x2f1c58: 0x24e71ac8  addiu       $a3, $a3, 0x1AC8
    ctx->pc = 0x2f1c58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6856));
    // 0x2f1c5c: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2F1C5Cu;
    SET_GPR_U32(ctx, 31, 0x2F1C64u);
    ctx->pc = 0x2F1C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1C5Cu;
            // 0x2f1c60: 0xadae000c  sw          $t6, 0xC($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1C64u; }
        if (ctx->pc != 0x2F1C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1C64u; }
        if (ctx->pc != 0x2F1C64u) { return; }
    }
    ctx->pc = 0x2F1C64u;
label_2f1c64:
    // 0x2f1c64: 0x8e02eca8  lw          $v0, -0x1358($s0)
    ctx->pc = 0x2f1c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294962344)));
label_2f1c68:
    // 0x2f1c68: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f1c68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f1c6c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2f1c6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f1c70: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1C70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1C70u;
            // 0x2f1c74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F1C78u;
    ctx->pc = 0x2f1c78u;
}
