#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BC010
// Address: 0x2bc010 - 0x2bc0b0
void sub_002BC010_0x2bc010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BC010_0x2bc010");
#endif

    switch (ctx->pc) {
        case 0x2bc02cu: goto label_2bc02c;
        case 0x2bc040u: goto label_2bc040;
        case 0x2bc050u: goto label_2bc050;
        case 0x2bc094u: goto label_2bc094;
        default: break;
    }

    ctx->pc = 0x2bc010u;

    // 0x2bc010: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bc010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2bc014: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2bc014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2bc018: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bc018u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc01c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bc01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bc020: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bc020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2bc024: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x2BC024u;
    SET_GPR_U32(ctx, 31, 0x2BC02Cu);
    ctx->pc = 0x2BC028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC024u;
            // 0x2bc028: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (runtime->hasFunction(0x2A2FD8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC02Cu; }
        if (ctx->pc != 0x2BC02Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2FD8_0x2a2fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC02Cu; }
        if (ctx->pc != 0x2BC02Cu) { return; }
    }
    ctx->pc = 0x2BC02Cu;
label_2bc02c:
    // 0x2bc02c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bc02cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc030: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2BC030u;
    {
        const bool branch_taken_0x2bc030 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC030u;
            // 0x2bc034: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc030) {
            ctx->pc = 0x2BC098u;
            goto label_2bc098;
        }
    }
    ctx->pc = 0x2BC038u;
    // 0x2bc038: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x2BC038u;
    SET_GPR_U32(ctx, 31, 0x2BC040u);
    ctx->pc = 0x2BC03Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC038u;
            // 0x2bc03c: 0x240400a0  addiu       $a0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (runtime->hasFunction(0x2A2FD8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC040u; }
        if (ctx->pc != 0x2BC040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2FD8_0x2a2fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC040u; }
        if (ctx->pc != 0x2BC040u) { return; }
    }
    ctx->pc = 0x2BC040u;
label_2bc040:
    // 0x2bc040: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2BC040u;
    {
        const bool branch_taken_0x2bc040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC040u;
            // 0x2bc044: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc040) {
            ctx->pc = 0x2BC08Cu;
            goto label_2bc08c;
        }
    }
    ctx->pc = 0x2BC048u;
    // 0x2bc048: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bc048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc04c: 0x0  nop
    ctx->pc = 0x2bc04cu;
    // NOP
label_2bc050:
    // 0x2bc050: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2bc050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2bc054: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2bc054u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2bc058: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2bc058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2bc05c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2bc05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bc060: 0x28a40028  slti        $a0, $a1, 0x28
    ctx->pc = 0x2bc060u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x2bc064: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2bc064u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2bc068: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2BC068u;
    {
        const bool branch_taken_0x2bc068 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bc068) {
            ctx->pc = 0x2BC050u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bc050;
        }
    }
    ctx->pc = 0x2BC070u;
    // 0x2bc070: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x2bc070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2bc074: 0xae110010  sw          $s1, 0x10($s0)
    ctx->pc = 0x2bc074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
    // 0x2bc078: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2bc078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2bc07c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bc07cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc080: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2bc080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2bc084: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2BC084u;
    {
        const bool branch_taken_0x2bc084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC084u;
            // 0x2bc088: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc084) {
            ctx->pc = 0x2BC098u;
            goto label_2bc098;
        }
    }
    ctx->pc = 0x2BC08Cu;
label_2bc08c:
    // 0x2bc08c: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x2BC08Cu;
    SET_GPR_U32(ctx, 31, 0x2BC094u);
    ctx->pc = 0x2BC090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC08Cu;
            // 0x2bc090: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC094u; }
        if (ctx->pc != 0x2BC094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3028_0x2a3028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC094u; }
        if (ctx->pc != 0x2BC094u) { return; }
    }
    ctx->pc = 0x2BC094u;
label_2bc094:
    // 0x2bc094: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bc094u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bc098:
    // 0x2bc098: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bc098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bc09c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2bc09cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bc0a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bc0a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bc0a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC0A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC0A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC0A4u;
            // 0x2bc0a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BC0ACu;
    // 0x2bc0ac: 0x0  nop
    ctx->pc = 0x2bc0acu;
    // NOP
    ctx->pc = 0x2bc0b0u;
}
