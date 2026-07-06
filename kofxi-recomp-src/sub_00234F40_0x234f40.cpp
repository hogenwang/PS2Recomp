#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00234F40
// Address: 0x234f40 - 0x2350c8
void sub_00234F40_0x234f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234F40_0x234f40");
#endif

    switch (ctx->pc) {
        case 0x234fe0u: goto label_234fe0;
        case 0x235000u: goto label_235000;
        case 0x235038u: goto label_235038;
        case 0x235078u: goto label_235078;
        default: break;
    }

    ctx->pc = 0x234f40u;

    // 0x234f40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x234f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x234f44: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x234f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x234f48: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x234f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x234f4c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x234f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x234f50: 0x24940002  addiu       $s4, $a0, 0x2
    ctx->pc = 0x234f50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x234f54: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x234f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x234f58: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x234f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x234f5c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x234f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x234f60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x234f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x234f64: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x234f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x234f68: 0x90930001  lbu         $s3, 0x1($a0)
    ctx->pc = 0x234f68u;
    SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x234f6c: 0x16620017  bne         $s3, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x234F6Cu;
    {
        const bool branch_taken_0x234f6c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x234F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234F6Cu;
        // 0x234f70: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234f6c) {
            ctx->pc = 0x234FCCu;
            goto label_234fcc;
        }
    }
    ctx->pc = 0x234F74u;
    // 0x234f74: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x234f74u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x234f78: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x234F78u;
    {
        const bool branch_taken_0x234f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234F78u;
        // 0x234f7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234f78) {
            ctx->pc = 0x234FCCu;
            goto label_234fcc;
        }
    }
    ctx->pc = 0x234F80u;
    // 0x234f80: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x234f80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x234f84: 0x8c62fcbc  lw          $v0, -0x344($v1)
    ctx->pc = 0x234f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294966460)));
    // 0x234f88: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x234f88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x234f8c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x234F8Cu;
    {
        const bool branch_taken_0x234f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x234F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234F8Cu;
        // 0x234f90: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234f8c) {
            ctx->pc = 0x234FD0u;
            goto label_234fd0;
        }
    }
    ctx->pc = 0x234F94u;
    // 0x234f94: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x234f94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x234f98: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x234f98u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x234f9c: 0x8c62fcc4  lw          $v0, -0x33C($v1)
    ctx->pc = 0x234f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294966468)));
    // 0x234fa0: 0x3c150023  lui         $s5, 0x23
    ctx->pc = 0x234fa0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)35 << 16));
    // 0x234fa4: 0x26a543b0  addiu       $a1, $s5, 0x43B0
    ctx->pc = 0x234fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 17328));
    // 0x234fa8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x234fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x234fac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x234facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x234fb0: 0x8c6400c0  lw          $a0, 0xC0($v1)
    ctx->pc = 0x234fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x234fb4: 0x10850005  beq         $a0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x234FB4u;
    {
        const bool branch_taken_0x234fb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x234FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234FB4u;
        // 0x234fb8: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234fb4) {
            ctx->pc = 0x234FCCu;
            goto label_234fcc;
        }
    }
    ctx->pc = 0x234FBCu;
    // 0x234fbc: 0x8c43fcc0  lw          $v1, -0x340($v0)
    ctx->pc = 0x234fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966464)));
    // 0x234fc0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x234fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x234fc4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x234FC4u;
    {
        const bool branch_taken_0x234fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234FC4u;
        // 0x234fc8: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234fc4) {
            ctx->pc = 0x2350A0u;
            goto label_2350a0;
        }
    }
    ctx->pc = 0x234FCCu;
label_234fcc:
    // 0x234fcc: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x234fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_234fd0:
    // 0x234fd0: 0x8c51fcd0  lw          $s1, -0x330($v0)
    ctx->pc = 0x234fd0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966480)));
    // 0x234fd4: 0x12200031  beqz        $s1, . + 4 + (0x31 << 2)
    ctx->pc = 0x234FD4u;
    {
        const bool branch_taken_0x234fd4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x234FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234FD4u;
        // 0x234fd8: 0x3c150023  lui         $s5, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234fd4) {
            ctx->pc = 0x23509Cu;
            goto label_23509c;
        }
    }
    ctx->pc = 0x234FDCu;
    // 0x234fdc: 0x8e2300c0  lw          $v1, 0xC0($s1)
    ctx->pc = 0x234fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_234fe0:
    // 0x234fe0: 0x26a243b0  addiu       $v0, $s5, 0x43B0
    ctx->pc = 0x234fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 17328));
    // 0x234fe4: 0x5062002b  beql        $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x234FE4u;
    {
        const bool branch_taken_0x234fe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x234fe4) {
            ctx->pc = 0x234FE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234FE4u;
            // 0x234fe8: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235094u;
            goto label_235094;
        }
    }
    ctx->pc = 0x234FECu;
    // 0x234fec: 0x8e30000c  lw          $s0, 0xC($s1)
    ctx->pc = 0x234fecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x234ff0: 0x52000028  beql        $s0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x234FF0u;
    {
        const bool branch_taken_0x234ff0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x234ff0) {
            ctx->pc = 0x234FF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234FF0u;
            // 0x234ff4: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235094u;
            goto label_235094;
        }
    }
    ctx->pc = 0x234FF8u;
    // 0x234ff8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x234ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x234ffc: 0x0  nop
    ctx->pc = 0x234ffcu;
    // NOP
label_235000:
    // 0x235000: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x235000u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x235004: 0x54530020  bnel        $v0, $s3, . + 4 + (0x20 << 2)
    ctx->pc = 0x235004u;
    {
        const bool branch_taken_0x235004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x235004) {
            ctx->pc = 0x235008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235004u;
            // 0x235008: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235088u;
            goto label_235088;
        }
    }
    ctx->pc = 0x23500Cu;
    // 0x23500c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x23500cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x235010: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x235010u;
    {
        const bool branch_taken_0x235010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235010u;
        // 0x235014: 0x24870002  addiu       $a3, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235010) {
            ctx->pc = 0x235084u;
            goto label_235084;
        }
    }
    ctx->pc = 0x235018u;
    // 0x235018: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x235018u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23501c: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x23501cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x235020: 0x434021  addu        $t0, $v0, $v1
    ctx->pc = 0x235020u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x235024: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x235024u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x235028: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x235028u;
    {
        const bool branch_taken_0x235028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23502Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235028u;
        // 0x23502c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235028) {
            ctx->pc = 0x235064u;
            goto label_235064;
        }
    }
    ctx->pc = 0x235030u;
    // 0x235030: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x235030u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x235034: 0x0  nop
    ctx->pc = 0x235034u;
    // NOP
label_235038:
    // 0x235038: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x235038u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x23503c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x23503cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x235040: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x235040u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x235044: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x235044u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x235048: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x235048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x23504c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x23504cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x235050: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x235050u;
    {
        const bool branch_taken_0x235050 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x235054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235050u;
        // 0x235054: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235050) {
            ctx->pc = 0x235084u;
            goto label_235084;
        }
    }
    ctx->pc = 0x235058u;
    // 0x235058: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x235058u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x23505c: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x23505Cu;
    {
        const bool branch_taken_0x23505c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23505c) {
            ctx->pc = 0x235060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23505Cu;
            // 0x235060: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235038u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_235038;
        }
    }
    ctx->pc = 0x235064u;
label_235064:
    // 0x235064: 0x52400007  beql        $s2, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x235064u;
    {
        const bool branch_taken_0x235064 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x235064) {
            ctx->pc = 0x235068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235064u;
            // 0x235068: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235084u;
            goto label_235084;
        }
    }
    ctx->pc = 0x23506Cu;
    // 0x23506c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x23506cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x235070: 0xc090492  jal         func_241248
    ctx->pc = 0x235070u;
    SET_GPR_U32(ctx, 31, 0x235078u);
    ctx->pc = 0x235074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235070u;
    // 0x235074: 0x8e450008  lw          $a1, 0x8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x241248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241248u, 0x235070u, 0x235078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235078u;
label_235078:
    // 0x235078: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x235078u;
    {
        const bool branch_taken_0x235078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x235078) {
            ctx->pc = 0x23507Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235078u;
            // 0x23507c: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235088u;
            goto label_235088;
        }
    }
    ctx->pc = 0x235080u;
    // 0x235080: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x235080u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_235084:
    // 0x235084: 0x8e100010  lw          $s0, 0x10($s0)
    ctx->pc = 0x235084u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_235088:
    // 0x235088: 0x5600ffdd  bnel        $s0, $zero, . + 4 + (-0x23 << 2)
    ctx->pc = 0x235088u;
    {
        const bool branch_taken_0x235088 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x235088) {
            ctx->pc = 0x23508Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235088u;
            // 0x23508c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235000u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_235000;
        }
    }
    ctx->pc = 0x235090u;
    // 0x235090: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x235090u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_235094:
    // 0x235094: 0x5620ffd2  bnel        $s1, $zero, . + 4 + (-0x2E << 2)
    ctx->pc = 0x235094u;
    {
        const bool branch_taken_0x235094 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x235094) {
            ctx->pc = 0x235098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235094u;
            // 0x235098: 0x8e2300c0  lw          $v1, 0xC0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234FE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_234fe0;
        }
    }
    ctx->pc = 0x23509Cu;
label_23509c:
    // 0x23509c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x23509cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2350a0:
    // 0x2350a0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2350a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2350a4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2350a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2350a8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2350a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2350ac: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2350acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2350b0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2350b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2350b4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2350b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2350b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2350b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2350bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2350BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2350C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2350BCu;
        // 0x2350c0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2350BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2350C4u;
    // 0x2350c4: 0x0  nop
    ctx->pc = 0x2350c4u;
    // NOP
}
