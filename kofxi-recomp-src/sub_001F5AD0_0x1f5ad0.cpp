#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F5AD0
// Address: 0x1f5ad0 - 0x1f5c10
void sub_001F5AD0_0x1f5ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5AD0_0x1f5ad0");
#endif

    switch (ctx->pc) {
        case 0x1f5b18u: goto label_1f5b18;
        case 0x1f5b58u: goto label_1f5b58;
        case 0x1f5b80u: goto label_1f5b80;
        case 0x1f5bb4u: goto label_1f5bb4;
        case 0x1f5bf0u: goto label_1f5bf0;
        default: break;
    }

    ctx->pc = 0x1f5ad0u;

    // 0x1f5ad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f5ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f5ad4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f5ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5ad8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f5ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f5adc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f5adcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5ae0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f5ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f5ae4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f5ae4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5ae8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f5ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f5aec: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1f5aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1f5af0: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x1f5af0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
    // 0x1f5af4: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x1f5af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x1f5af8: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1f5af8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1f5afc: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1f5afcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x1f5b00: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x1f5b00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x1f5b04: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x1f5b04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
    // 0x1f5b08: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1F5B08u;
    {
        const bool branch_taken_0x1f5b08 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1F5B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5B08u;
            // 0x1f5b0c: 0xae20005c  sw          $zero, 0x5C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5b08) {
            ctx->pc = 0x1F5B3Cu;
            goto label_1f5b3c;
        }
    }
    ctx->pc = 0x1F5B10u;
    // 0x1f5b10: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x1f5b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1f5b14: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1f5b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f5b18:
    // 0x1f5b18: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x1f5b18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x1f5b1c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1f5b1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1f5b20: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x1f5b20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x1f5b24: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x1f5b24u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x1f5b28: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x1f5b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x1f5b2c: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x1f5b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x1f5b30: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1f5b30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f5b34: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F5B34u;
    {
        const bool branch_taken_0x1f5b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5B34u;
            // 0x1f5b38: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5b34) {
            ctx->pc = 0x1F5B18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f5b18;
        }
    }
    ctx->pc = 0x1F5B3Cu;
label_1f5b3c:
    // 0x1f5b3c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1f5b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1f5b40: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F5B40u;
    {
        const bool branch_taken_0x1f5b40 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1F5B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5B40u;
            // 0x1f5b44: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5b40) {
            ctx->pc = 0x1F5B90u;
            goto label_1f5b90;
        }
    }
    ctx->pc = 0x1F5B48u;
    // 0x1f5b48: 0x3c100fff  lui         $s0, 0xFFF
    ctx->pc = 0x1f5b48u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4095 << 16));
    // 0x1f5b4c: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x1f5b4cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x1f5b50: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1f5b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f5b54: 0x0  nop
    ctx->pc = 0x1f5b54u;
    // NOP
label_1f5b58:
    // 0x1f5b58: 0x122ac0  sll         $a1, $s2, 11
    ctx->pc = 0x1f5b58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 11));
    // 0x1f5b5c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1f5b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1f5b60: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x1f5b60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1f5b64: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1f5b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1f5b68: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1f5b68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f5b6c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1f5b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f5b70: 0xb02824  and         $a1, $a1, $s0
    ctx->pc = 0x1f5b70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
    // 0x1f5b74: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x1f5b74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f5b78: 0xc07d68c  jal         func_1F5A30
    ctx->pc = 0x1F5B78u;
    SET_GPR_U32(ctx, 31, 0x1F5B80u);
    ctx->pc = 0x1F5B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5B78u;
            // 0x1f5b7c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F5A30u;
    if (runtime->hasFunction(0x1F5A30u)) {
        auto targetFn = runtime->lookupFunction(0x1F5A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5B80u; }
        if (ctx->pc != 0x1F5B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F5A30_0x1f5a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5B80u; }
        if (ctx->pc != 0x1F5B80u) { return; }
    }
    ctx->pc = 0x1F5B80u;
label_1f5b80:
    // 0x1f5b80: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1f5b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1f5b84: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1f5b84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f5b88: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x1F5B88u;
    {
        const bool branch_taken_0x1f5b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5b88) {
            ctx->pc = 0x1F5B8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5B88u;
            // 0x1f5b8c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F5B58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f5b58;
        }
    }
    ctx->pc = 0x1F5B90u;
label_1f5b90:
    // 0x1f5b90: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1f5b90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1f5b94: 0x3c100fff  lui         $s0, 0xFFF
    ctx->pc = 0x1f5b94u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4095 << 16));
    // 0x1f5b98: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x1f5b98u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x1f5b9c: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x1f5b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1f5ba0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1f5ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1f5ba4: 0xb02824  and         $a1, $a1, $s0
    ctx->pc = 0x1f5ba4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
    // 0x1f5ba8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f5ba8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5bac: 0xc07d68c  jal         func_1F5A30
    ctx->pc = 0x1F5BACu;
    SET_GPR_U32(ctx, 31, 0x1F5BB4u);
    ctx->pc = 0x1F5BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5BACu;
            // 0x1f5bb0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F5A30u;
    if (runtime->hasFunction(0x1F5A30u)) {
        auto targetFn = runtime->lookupFunction(0x1F5A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5BB4u; }
        if (ctx->pc != 0x1F5BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F5A30_0x1f5a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5BB4u; }
        if (ctx->pc != 0x1F5BB4u) { return; }
    }
    ctx->pc = 0x1F5BB4u;
label_1f5bb4:
    // 0x1f5bb4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1f5bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1f5bb8: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x1f5bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1f5bbc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1f5bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1f5bc0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1f5bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f5bc4: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1f5bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1f5bc8: 0xd03024  and         $a2, $a2, $s0
    ctx->pc = 0x1f5bc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 16));
    // 0x1f5bcc: 0x3463b410  ori         $v1, $v1, 0xB410
    ctx->pc = 0x1f5bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46096);
    // 0x1f5bd0: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x1f5bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x1f5bd4: 0x34a5b430  ori         $a1, $a1, 0xB430
    ctx->pc = 0x1f5bd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46128);
    // 0x1f5bd8: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x1f5bd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46112);
    // 0x1f5bdc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1f5bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1f5be0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1f5be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f5be4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1f5be4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1f5be8: 0xc07d672  jal         func_1F59C8
    ctx->pc = 0x1F5BE8u;
    SET_GPR_U32(ctx, 31, 0x1F5BF0u);
    ctx->pc = 0x1F5BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5BE8u;
            // 0x1f5bec: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F59C8u;
    if (runtime->hasFunction(0x1F59C8u)) {
        auto targetFn = runtime->lookupFunction(0x1F59C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5BF0u; }
        if (ctx->pc != 0x1F5BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F59C8_0x1f59c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5BF0u; }
        if (ctx->pc != 0x1F5BF0u) { return; }
    }
    ctx->pc = 0x1F5BF0u;
label_1f5bf0:
    // 0x1f5bf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f5bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5bf4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f5bf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5bf8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f5bf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f5bfc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f5bfcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f5c00: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1f5c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f5c04: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5C04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5C04u;
            // 0x1f5c08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F5C0Cu;
    // 0x1f5c0c: 0x0  nop
    ctx->pc = 0x1f5c0cu;
    // NOP
    ctx->pc = 0x1f5c10u;
}
