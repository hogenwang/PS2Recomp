#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BE918
// Address: 0x1be918 - 0x1bea60
void sub_001BE918_0x1be918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE918_0x1be918");
#endif

    switch (ctx->pc) {
        case 0x1be958u: goto label_1be958;
        case 0x1be9b0u: goto label_1be9b0;
        case 0x1be9c0u: goto label_1be9c0;
        case 0x1bea00u: goto label_1bea00;
        case 0x1bea48u: goto label_1bea48;
        default: break;
    }

    ctx->pc = 0x1be918u;

    // 0x1be918: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1be918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1be91c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1be91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1be920: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1be920u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be924: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1be924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1be928: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1be928u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be92c: 0x10c00046  beqz        $a2, . + 4 + (0x46 << 2)
    ctx->pc = 0x1BE92Cu;
    {
        const bool branch_taken_0x1be92c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE92Cu;
            // 0x1be930: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be92c) {
            ctx->pc = 0x1BEA48u;
            goto label_1bea48;
        }
    }
    ctx->pc = 0x1BE934u;
    // 0x1be934: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x1be934u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1be938: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x1be938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x1be93c: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1BE93Cu;
    {
        const bool branch_taken_0x1be93c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BE940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE93Cu;
            // 0x1be940: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be93c) {
            ctx->pc = 0x1BE990u;
            goto label_1be990;
        }
    }
    ctx->pc = 0x1BE944u;
    // 0x1be944: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1BE944u;
    {
        const bool branch_taken_0x1be944 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE944u;
            // 0x1be948: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be944) {
            ctx->pc = 0x1BE9A0u;
            goto label_1be9a0;
        }
    }
    ctx->pc = 0x1BE94Cu;
    // 0x1be94c: 0x2407003a  addiu       $a3, $zero, 0x3A
    ctx->pc = 0x1be94cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x1be950: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x1be950u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1be954: 0x0  nop
    ctx->pc = 0x1be954u;
    // NOP
label_1be958:
    // 0x1be958: 0x2081821  addu        $v1, $s0, $t0
    ctx->pc = 0x1be958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x1be95c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1be95cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1be960: 0x29020129  slti        $v0, $t0, 0x129
    ctx->pc = 0x1be960u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)297) ? 1 : 0);
    // 0x1be964: 0xc82821  addu        $a1, $a2, $t0
    ctx->pc = 0x1be964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1be968: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1BE968u;
    {
        const bool branch_taken_0x1be968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE96Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE968u;
            // 0x1be96c: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be968) {
            ctx->pc = 0x1BE994u;
            goto label_1be994;
        }
    }
    ctx->pc = 0x1BE970u;
    // 0x1be970: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x1be970u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1be974: 0x10470008  beq         $v0, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BE974u;
    {
        const bool branch_taken_0x1be974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x1be974) {
            ctx->pc = 0x1BE998u;
            goto label_1be998;
        }
    }
    ctx->pc = 0x1BE97Cu;
    // 0x1be97c: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1BE97Cu;
    {
        const bool branch_taken_0x1be97c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be97c) {
            ctx->pc = 0x1BE980u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE97Cu;
            // 0x1be980: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BE958u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1be958;
        }
    }
    ctx->pc = 0x1BE984u;
    // 0x1be984: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE984u;
    {
        const bool branch_taken_0x1be984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be984) {
            ctx->pc = 0x1BE998u;
            goto label_1be998;
        }
    }
    ctx->pc = 0x1BE98Cu;
    // 0x1be98c: 0x0  nop
    ctx->pc = 0x1be98cu;
    // NOP
label_1be990:
    // 0x1be990: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1be990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1be994:
    // 0x1be994: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x1be994u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_1be998:
    // 0x1be998: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BE998u;
    {
        const bool branch_taken_0x1be998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE99Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE998u;
            // 0x1be99c: 0x2081821  addu        $v1, $s0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be998) {
            ctx->pc = 0x1BE9C8u;
            goto label_1be9c8;
        }
    }
    ctx->pc = 0x1BE9A0u;
label_1be9a0:
    // 0x1be9a0: 0x2081021  addu        $v0, $s0, $t0
    ctx->pc = 0x1be9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x1be9a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1be9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be9a8: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x1BE9A8u;
    SET_GPR_U32(ctx, 31, 0x1BE9B0u);
    ctx->pc = 0x1BE9ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE9A8u;
            // 0x1be9ac: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE9B0u; }
        if (ctx->pc != 0x1BE9B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE9B0u; }
        if (ctx->pc != 0x1BE9B0u) { return; }
    }
    ctx->pc = 0x1BE9B0u;
label_1be9b0:
    // 0x1be9b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1be9b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be9b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1be9b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be9b8: 0xc049c48  jal         func_127120
    ctx->pc = 0x1BE9B8u;
    SET_GPR_U32(ctx, 31, 0x1BE9C0u);
    ctx->pc = 0x1BE9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE9B8u;
            // 0x1be9bc: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE9C0u; }
        if (ctx->pc != 0x1BE9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE9C0u; }
        if (ctx->pc != 0x1BE9C0u) { return; }
    }
    ctx->pc = 0x1BE9C0u;
label_1be9c0:
    // 0x1be9c0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1BE9C0u;
    {
        const bool branch_taken_0x1be9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE9C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE9C0u;
            // 0x1be9c4: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be9c0) {
            ctx->pc = 0x1BEA48u;
            goto label_1bea48;
        }
    }
    ctx->pc = 0x1BE9C8u;
label_1be9c8:
    // 0x1be9c8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1be9c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1be9cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1be9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1be9d0: 0x15020003  bne         $t0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BE9D0u;
    {
        const bool branch_taken_0x1be9d0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BE9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE9D0u;
            // 0x1be9d4: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be9d0) {
            ctx->pc = 0x1BE9E0u;
            goto label_1be9e0;
        }
    }
    ctx->pc = 0x1BE9D8u;
    // 0x1be9d8: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1be9d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1be9dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1be9dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1be9e0:
    // 0x1be9e0: 0x29020129  slti        $v0, $t0, 0x129
    ctx->pc = 0x1be9e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)297) ? 1 : 0);
    // 0x1be9e4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1BE9E4u;
    {
        const bool branch_taken_0x1be9e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE9E4u;
            // 0x1be9e8: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be9e4) {
            ctx->pc = 0x1BEA24u;
            goto label_1bea24;
        }
    }
    ctx->pc = 0x1BE9ECu;
    // 0x1be9ec: 0xc81821  addu        $v1, $a2, $t0
    ctx->pc = 0x1be9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1be9f0: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x1be9f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1be9f4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BE9F4u;
    {
        const bool branch_taken_0x1be9f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE9F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE9F4u;
            // 0x1be9f8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be9f4) {
            ctx->pc = 0x1BEA24u;
            goto label_1bea24;
        }
    }
    ctx->pc = 0x1BE9FCu;
    // 0x1be9fc: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1be9fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1bea00:
    // 0x1bea00: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1bea00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1bea04: 0x28a40129  slti        $a0, $a1, 0x129
    ctx->pc = 0x1bea04u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)297) ? 1 : 0);
    // 0x1bea08: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x1bea08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1bea0c: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x1bea0cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bea10: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BEA10u;
    {
        const bool branch_taken_0x1bea10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEA14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEA10u;
            // 0x1bea14: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bea10) {
            ctx->pc = 0x1BEA24u;
            goto label_1bea24;
        }
    }
    ctx->pc = 0x1BEA18u;
    // 0x1bea18: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x1bea18u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bea1c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1BEA1Cu;
    {
        const bool branch_taken_0x1bea1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bea1c) {
            ctx->pc = 0x1BEA20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEA1Cu;
            // 0x1bea20: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BEA00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bea00;
        }
    }
    ctx->pc = 0x1BEA24u;
label_1bea24:
    // 0x1bea24: 0xa81023  subu        $v0, $a1, $t0
    ctx->pc = 0x1bea24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1bea28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bea28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bea2c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1bea2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1bea30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bea30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bea34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bea34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bea38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bea38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bea3c: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1bea3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bea40: 0x806f910  j           func_1BE440
    ctx->pc = 0x1BEA40u;
    ctx->pc = 0x1BEA44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEA40u;
            // 0x1bea44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE440u;
    if (runtime->hasFunction(0x1BE440u)) {
        auto targetFn = runtime->lookupFunction(0x1BE440u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001BE440_0x1be440(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1BEA48u;
label_1bea48:
    // 0x1bea48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bea48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bea4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bea4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bea50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bea50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bea54: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEA54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BEA58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEA54u;
            // 0x1bea58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BEA5Cu;
    // 0x1bea5c: 0x0  nop
    ctx->pc = 0x1bea5cu;
    // NOP
    ctx->pc = 0x1bea60u;
}
