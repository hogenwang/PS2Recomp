#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E6BB8
// Address: 0x2e6bb8 - 0x2e6d60
void sub_002E6BB8_0x2e6bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E6BB8_0x2e6bb8");
#endif

    switch (ctx->pc) {
        case 0x2e6c58u: goto label_2e6c58;
        case 0x2e6c98u: goto label_2e6c98;
        case 0x2e6cb0u: goto label_2e6cb0;
        case 0x2e6cd0u: goto label_2e6cd0;
        case 0x2e6d00u: goto label_2e6d00;
        case 0x2e6d38u: goto label_2e6d38;
        default: break;
    }

    ctx->pc = 0x2e6bb8u;

    // 0x2e6bb8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2e6bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2e6bbc: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2e6bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2e6bc0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2e6bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2e6bc4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2e6bc4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6bc8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2e6bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2e6bcc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2e6bccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6bd0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2e6bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2e6bd4: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x2e6bd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6bd8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2e6bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2e6bdc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2e6bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2e6be0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e6be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e6be4: 0x8e620028  lw          $v0, 0x28($s3)
    ctx->pc = 0x2e6be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x2e6be8: 0x42900b  movn        $s2, $v0, $v0
    ctx->pc = 0x2e6be8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
    // 0x2e6bec: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x2e6becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2e6bf0: 0x10600051  beqz        $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x2E6BF0u;
    {
        const bool branch_taken_0x2e6bf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6BF0u;
            // 0x2e6bf4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6bf0) {
            ctx->pc = 0x2E6D38u;
            goto label_2e6d38;
        }
    }
    ctx->pc = 0x2E6BF8u;
    // 0x2e6bf8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2e6bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e6bfc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2e6bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e6c00: 0x90420d7c  lbu         $v0, 0xD7C($v0)
    ctx->pc = 0x2e6c00u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3452)));
    // 0x2e6c04: 0x28430007  slti        $v1, $v0, 0x7
    ctx->pc = 0x2e6c04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2e6c08: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x2E6C08u;
    {
        const bool branch_taken_0x2e6c08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6c08) {
            ctx->pc = 0x2E6CBCu;
            goto label_2e6cbc;
        }
    }
    ctx->pc = 0x2E6C10u;
    // 0x2e6c10: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2E6C10u;
    {
        const bool branch_taken_0x2e6c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6c10) {
            ctx->pc = 0x2E6CBCu;
            goto label_2e6cbc;
        }
    }
    ctx->pc = 0x2E6C18u;
    // 0x2e6c18: 0x1aa0000a  blez        $s5, . + 4 + (0xA << 2)
    ctx->pc = 0x2E6C18u;
    {
        const bool branch_taken_0x2e6c18 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x2E6C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6C18u;
            // 0x2e6c1c: 0x3c030400  lui         $v1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6c18) {
            ctx->pc = 0x2E6C44u;
            goto label_2e6c44;
        }
    }
    ctx->pc = 0x2E6C20u;
    // 0x2e6c20: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x2e6c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x2e6c24: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e6c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2e6c28: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x2E6C28u;
    {
        const bool branch_taken_0x2e6c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6C28u;
            // 0x2e6c2c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6c28) {
            ctx->pc = 0x2E6D38u;
            goto label_2e6d38;
        }
    }
    ctx->pc = 0x2E6C30u;
    // 0x2e6c30: 0x8e630038  lw          $v1, 0x38($s3)
    ctx->pc = 0x2e6c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x2e6c34: 0x14620041  bne         $v1, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x2E6C34u;
    {
        const bool branch_taken_0x2e6c34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E6C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6C34u;
            // 0x2e6c38: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6c34) {
            ctx->pc = 0x2E6D3Cu;
            goto label_2e6d3c;
        }
    }
    ctx->pc = 0x2E6C3Cu;
    // 0x2e6c3c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2E6C3Cu;
    {
        const bool branch_taken_0x2e6c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6c3c) {
            ctx->pc = 0x2E6CBCu;
            goto label_2e6cbc;
        }
    }
    ctx->pc = 0x2E6C44u;
label_2e6c44:
    // 0x2e6c44: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x2e6c44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x2e6c48: 0x3c060020  lui         $a2, 0x20
    ctx->pc = 0x2e6c48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32 << 16));
    // 0x2e6c4c: 0x26640034  addiu       $a0, $s3, 0x34
    ctx->pc = 0x2e6c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 52));
    // 0x2e6c50: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e6c50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6c54: 0x0  nop
    ctx->pc = 0x2e6c54u;
    // NOP
label_2e6c58:
    // 0x2e6c58: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2e6c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e6c5c: 0x671024  and         $v0, $v1, $a3
    ctx->pc = 0x2e6c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x2e6c60: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E6C60u;
    {
        const bool branch_taken_0x2e6c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e6c60) {
            ctx->pc = 0x2E6C64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6C60u;
            // 0x2e6c64: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E6C78u;
            goto label_2e6c78;
        }
    }
    ctx->pc = 0x2E6C68u;
    // 0x2e6c68: 0x661024  and         $v0, $v1, $a2
    ctx->pc = 0x2e6c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x2e6c6c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E6C6Cu;
    {
        const bool branch_taken_0x2e6c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6c6c) {
            ctx->pc = 0x2E6C70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6C6Cu;
            // 0x2e6c70: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E6C7Cu;
            goto label_2e6c7c;
        }
    }
    ctx->pc = 0x2E6C74u;
    // 0x2e6c74: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2e6c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2e6c78:
    // 0x2e6c78: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2e6c78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2e6c7c:
    // 0x2e6c7c: 0x601fff6  bgez        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2E6C7Cu;
    {
        const bool branch_taken_0x2e6c7c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2E6C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6C7Cu;
            // 0x2e6c80: 0x24840028  addiu       $a0, $a0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6c7c) {
            ctx->pc = 0x2E6C58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e6c58;
        }
    }
    ctx->pc = 0x2E6C84u;
    // 0x2e6c84: 0x18a0000d  blez        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x2E6C84u;
    {
        const bool branch_taken_0x2e6c84 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x2e6c84) {
            ctx->pc = 0x2E6CBCu;
            goto label_2e6cbc;
        }
    }
    ctx->pc = 0x2E6C8Cu;
    // 0x2e6c8c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e6c8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6c90: 0x3c140400  lui         $s4, 0x400
    ctx->pc = 0x2e6c90u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)1024 << 16));
    // 0x2e6c94: 0x26510034  addiu       $s1, $s2, 0x34
    ctx->pc = 0x2e6c94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 52));
label_2e6c98:
    // 0x2e6c98: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2e6c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e6c9c: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x2e6c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x2e6ca0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E6CA0u;
    {
        const bool branch_taken_0x2e6ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6CA0u;
            // 0x2e6ca4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6ca0) {
            ctx->pc = 0x2E6CB0u;
            goto label_2e6cb0;
        }
    }
    ctx->pc = 0x2E6CA8u;
    // 0x2e6ca8: 0xc0b9aba  jal         func_2E6AE8
    ctx->pc = 0x2E6CA8u;
    SET_GPR_U32(ctx, 31, 0x2E6CB0u);
    ctx->pc = 0x2E6CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6CA8u;
            // 0x2e6cac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E6AE8u;
    if (runtime->hasFunction(0x2E6AE8u)) {
        auto targetFn = runtime->lookupFunction(0x2E6AE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6CB0u; }
        if (ctx->pc != 0x2E6CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E6AE8_0x2e6ae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6CB0u; }
        if (ctx->pc != 0x2E6CB0u) { return; }
    }
    ctx->pc = 0x2E6CB0u;
label_2e6cb0:
    // 0x2e6cb0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e6cb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2e6cb4: 0x1a00fff8  blez        $s0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2E6CB4u;
    {
        const bool branch_taken_0x2e6cb4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2E6CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6CB4u;
            // 0x2e6cb8: 0x26310028  addiu       $s1, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6cb4) {
            ctx->pc = 0x2E6C98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e6c98;
        }
    }
    ctx->pc = 0x2E6CBCu;
label_2e6cbc:
    // 0x2e6cbc: 0x1aa00006  blez        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E6CBCu;
    {
        const bool branch_taken_0x2e6cbc = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x2E6CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6CBCu;
            // 0x2e6cc0: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6cbc) {
            ctx->pc = 0x2E6CD8u;
            goto label_2e6cd8;
        }
    }
    ctx->pc = 0x2E6CC4u;
    // 0x2e6cc4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2e6cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e6cc8: 0xc0b9a58  jal         func_2E6960
    ctx->pc = 0x2E6CC8u;
    SET_GPR_U32(ctx, 31, 0x2E6CD0u);
    ctx->pc = 0x2E6CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6CC8u;
            // 0x2e6ccc: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E6960u;
    if (runtime->hasFunction(0x2E6960u)) {
        auto targetFn = runtime->lookupFunction(0x2E6960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6CD0u; }
        if (ctx->pc != 0x2E6CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E6960_0x2e6960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6CD0u; }
        if (ctx->pc != 0x2E6CD0u) { return; }
    }
    ctx->pc = 0x2E6CD0u;
label_2e6cd0:
    // 0x2e6cd0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2E6CD0u;
    {
        const bool branch_taken_0x2e6cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6CD0u;
            // 0x2e6cd4: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6cd0) {
            ctx->pc = 0x2E6D3Cu;
            goto label_2e6d3c;
        }
    }
    ctx->pc = 0x2E6CD8u;
label_2e6cd8:
    // 0x2e6cd8: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x2e6cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x2e6cdc: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E6CDCu;
    {
        const bool branch_taken_0x2e6cdc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2E6CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6CDCu;
            // 0x2e6ce0: 0x26640038  addiu       $a0, $s3, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6cdc) {
            ctx->pc = 0x2E6CECu;
            goto label_2e6cec;
        }
    }
    ctx->pc = 0x2E6CE4u;
    // 0x2e6ce4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2E6CE4u;
    {
        const bool branch_taken_0x2e6ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6CE4u;
            // 0x2e6ce8: 0xae400058  sw          $zero, 0x58($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6ce4) {
            ctx->pc = 0x2E6D38u;
            goto label_2e6d38;
        }
    }
    ctx->pc = 0x2E6CECu;
label_2e6cec:
    // 0x2e6cec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e6cecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6cf0: 0x3c060400  lui         $a2, 0x400
    ctx->pc = 0x2e6cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1024 << 16));
    // 0x2e6cf4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2e6cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e6cf8: 0x26430034  addiu       $v1, $s2, 0x34
    ctx->pc = 0x2e6cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 52));
    // 0x2e6cfc: 0x0  nop
    ctx->pc = 0x2e6cfcu;
    // NOP
label_2e6d00:
    // 0x2e6d00: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2e6d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e6d04: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2e6d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2e6d08: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2E6D08u;
    {
        const bool branch_taken_0x2e6d08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6D08u;
            // 0x2e6d0c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6d08) {
            ctx->pc = 0x2E6D3Cu;
            goto label_2e6d3c;
        }
    }
    ctx->pc = 0x2E6D10u;
    // 0x2e6d10: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e6d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e6d14: 0x14450009  bne         $v0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E6D14u;
    {
        const bool branch_taken_0x2e6d14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2E6D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6D14u;
            // 0x2e6d18: 0x24840028  addiu       $a0, $a0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6d14) {
            ctx->pc = 0x2E6D3Cu;
            goto label_2e6d3c;
        }
    }
    ctx->pc = 0x2E6D1Cu;
    // 0x2e6d1c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e6d1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2e6d20: 0x1a00fff7  blez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2E6D20u;
    {
        const bool branch_taken_0x2e6d20 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2E6D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6D20u;
            // 0x2e6d24: 0x24630028  addiu       $v1, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6d20) {
            ctx->pc = 0x2E6D00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e6d00;
        }
    }
    ctx->pc = 0x2E6D28u;
    // 0x2e6d28: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x2e6d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x2e6d2c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2e6d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e6d30: 0xc0b9a58  jal         func_2E6960
    ctx->pc = 0x2E6D30u;
    SET_GPR_U32(ctx, 31, 0x2E6D38u);
    ctx->pc = 0x2E6D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6D30u;
            // 0x2e6d34: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E6960u;
    if (runtime->hasFunction(0x2E6960u)) {
        auto targetFn = runtime->lookupFunction(0x2E6960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6D38u; }
        if (ctx->pc != 0x2E6D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E6960_0x2e6960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6D38u; }
        if (ctx->pc != 0x2E6D38u) { return; }
    }
    ctx->pc = 0x2E6D38u;
label_2e6d38:
    // 0x2e6d38: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2e6d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2e6d3c:
    // 0x2e6d3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e6d3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6d40: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2e6d40u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e6d44: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2e6d44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e6d48: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2e6d48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e6d4c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2e6d4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e6d50: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2e6d50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e6d54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e6d54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e6d58: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6D58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E6D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6D58u;
            // 0x2e6d5c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E6D60u;
    ctx->pc = 0x2e6d60u;
}
