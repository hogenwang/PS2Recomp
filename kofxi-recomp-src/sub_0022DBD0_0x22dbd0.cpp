#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022DBD0
// Address: 0x22dbd0 - 0x22dc70
void sub_0022DBD0_0x22dbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022DBD0_0x22dbd0");
#endif

    switch (ctx->pc) {
        case 0x22dbf8u: goto label_22dbf8;
        case 0x22dc18u: goto label_22dc18;
        default: break;
    }

    ctx->pc = 0x22dbd0u;

    // 0x22dbd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22dbd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22dbd4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22dbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22dbd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22dbd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22dbdc: 0x3c12003a  lui         $s2, 0x3A
    ctx->pc = 0x22dbdcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)58 << 16));
    // 0x22dbe0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22dbe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22dbe4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x22dbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22dbe8: 0x8e44fa00  lw          $a0, -0x600($s2)
    ctx->pc = 0x22dbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294965760)));
    // 0x22dbec: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22dbecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x22dbf0: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x22DBF0u;
    SET_GPR_U32(ctx, 31, 0x22DBF8u);
    ctx->pc = 0x22DBF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22DBF0u;
            // 0x22dbf4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (runtime->hasFunction(0x10CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DBF8u; }
        if (ctx->pc != 0x22DBF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallWaitSemaWrapper_0x10cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DBF8u; }
        if (ctx->pc != 0x22DBF8u) { return; }
    }
    ctx->pc = 0x22DBF8u;
label_22dbf8:
    // 0x22dbf8: 0x111942  srl         $v1, $s1, 5
    ctx->pc = 0x22dbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 5));
    // 0x22dbfc: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x22dbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x22dc00: 0x306303f8  andi        $v1, $v1, 0x3F8
    ctx->pc = 0x22dc00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1016);
    // 0x22dc04: 0x2442a8c0  addiu       $v0, $v0, -0x5740
    ctx->pc = 0x22dc04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944960));
    // 0x22dc08: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22dc08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22dc0c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x22dc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22dc10: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x22DC10u;
    {
        const bool branch_taken_0x22dc10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DC14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DC10u;
            // 0x22dc14: 0x8e44fa00  lw          $a0, -0x600($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294965760)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dc10) {
            ctx->pc = 0x22DC54u;
            goto label_22dc54;
        }
    }
    ctx->pc = 0x22DC18u;
label_22dc18:
    // 0x22dc18: 0x6020005  bltzl       $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22DC18u;
    {
        const bool branch_taken_0x22dc18 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x22dc18) {
            ctx->pc = 0x22DC1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22DC18u;
            // 0x22dc1c: 0x8c62001c  lw          $v0, 0x1C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22DC30u;
            goto label_22dc30;
        }
    }
    ctx->pc = 0x22DC20u;
    // 0x22dc20: 0x84620008  lh          $v0, 0x8($v1)
    ctx->pc = 0x22dc20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x22dc24: 0x56020009  bnel        $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22DC24u;
    {
        const bool branch_taken_0x22dc24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x22dc24) {
            ctx->pc = 0x22DC28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22DC24u;
            // 0x22dc28: 0x8c630014  lw          $v1, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22DC4Cu;
            goto label_22dc4c;
        }
    }
    ctx->pc = 0x22DC2Cu;
    // 0x22dc2c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x22dc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_22dc30:
    // 0x22dc30: 0x54510006  bnel        $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x22DC30u;
    {
        const bool branch_taken_0x22dc30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x22dc30) {
            ctx->pc = 0x22DC34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22DC30u;
            // 0x22dc34: 0x8c630014  lw          $v1, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22DC4Cu;
            goto label_22dc4c;
        }
    }
    ctx->pc = 0x22DC38u;
    // 0x22dc38: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x22dc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x22dc3c: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x22dc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x22dc40: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x22dc40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x22dc44: 0xac620040  sw          $v0, 0x40($v1)
    ctx->pc = 0x22dc44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
    // 0x22dc48: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x22dc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_22dc4c:
    // 0x22dc4c: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x22DC4Cu;
    {
        const bool branch_taken_0x22dc4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22DC50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DC4Cu;
            // 0x22dc50: 0x8e44fa00  lw          $a0, -0x600($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294965760)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dc4c) {
            ctx->pc = 0x22DC18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22dc18;
        }
    }
    ctx->pc = 0x22DC54u;
label_22dc54:
    // 0x22dc54: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22dc54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22dc58: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22dc58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22dc5c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22dc5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22dc60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22dc60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22dc64: 0x8043320  j           func_10CC80
    ctx->pc = 0x22DC64u;
    ctx->pc = 0x22DC68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22DC64u;
            // 0x22dc68: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010CC80_0x10cc80(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x22DC6Cu;
    // 0x22dc6c: 0x0  nop
    ctx->pc = 0x22dc6cu;
    // NOP
    ctx->pc = 0x22dc70u;
}
