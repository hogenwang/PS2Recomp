#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00109F30
// Address: 0x109f30 - 0x10a1e8
void sub_00109F30_0x109f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109F30_0x109f30");
#endif

    ctx->pc = 0x109f30u;

    // 0x109f30: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x109f30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109f34: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x109f34u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x109f38: 0x8ce90184  lw          $t1, 0x184($a3)
    ctx->pc = 0x109f38u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 388)));
    // 0x109f3c: 0x240c0002  addiu       $t4, $zero, 0x2
    ctx->pc = 0x109f3cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x109f40: 0x8cea0160  lw          $t2, 0x160($a3)
    ctx->pc = 0x109f40u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 352)));
    // 0x109f44: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x109f44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109f48: 0x39220003  xori        $v0, $t1, 0x3
    ctx->pc = 0x109f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)3);
    // 0x109f4c: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x109f4cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109f50: 0x240e0003  addiu       $t6, $zero, 0x3
    ctx->pc = 0x109f50u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x109f54: 0x154e0044  bne         $t2, $t6, . + 4 + (0x44 << 2)
    ctx->pc = 0x109F54u;
    {
        const bool branch_taken_0x109f54 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 14));
        ctx->pc = 0x109F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109F54u;
            // 0x109f58: 0x182580a  movz        $t3, $t4, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109f54) {
            ctx->pc = 0x10A068u;
            goto label_10a068;
        }
    }
    ctx->pc = 0x109F5Cu;
    // 0x109f5c: 0x8ce200b4  lw          $v0, 0xB4($a3)
    ctx->pc = 0x109f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 180)));
    // 0x109f60: 0x8ce300b8  lw          $v1, 0xB8($a3)
    ctx->pc = 0x109f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 184)));
    // 0x109f64: 0x8ce501d4  lw          $a1, 0x1D4($a3)
    ctx->pc = 0x109f64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 468)));
    // 0x109f68: 0x8ce601e4  lw          $a2, 0x1E4($a3)
    ctx->pc = 0x109f68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 484)));
    // 0x109f6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x109f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x109f70: 0x8ce401f4  lw          $a0, 0x1F4($a3)
    ctx->pc = 0x109f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 500)));
    // 0x109f74: 0x4b102a  slt         $v0, $v0, $t3
    ctx->pc = 0x109f74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x109f78: 0xace501d0  sw          $a1, 0x1D0($a3)
    ctx->pc = 0x109f78u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 464), GPR_U32(ctx, 5));
    // 0x109f7c: 0xace601e0  sw          $a2, 0x1E0($a3)
    ctx->pc = 0x109f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 480), GPR_U32(ctx, 6));
    // 0x109f80: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x109F80u;
    {
        const bool branch_taken_0x109f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x109F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109F80u;
            // 0x109f84: 0xace401f0  sw          $a0, 0x1F0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 496), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109f80) {
            ctx->pc = 0x109F94u;
            goto label_109f94;
        }
    }
    ctx->pc = 0x109F88u;
    // 0x109f88: 0xace000fc  sw          $zero, 0xFC($a3)
    ctx->pc = 0x109f88u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 252), GPR_U32(ctx, 0));
    // 0x109f8c: 0xace001b8  sw          $zero, 0x1B8($a3)
    ctx->pc = 0x109f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 440), GPR_U32(ctx, 0));
    // 0x109f90: 0xace001b4  sw          $zero, 0x1B4($a3)
    ctx->pc = 0x109f90u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 436), GPR_U32(ctx, 0));
label_109f94:
    // 0x109f94: 0x8ce200fc  lw          $v0, 0xFC($a3)
    ctx->pc = 0x109f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 252)));
    // 0x109f98: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x109F98u;
    {
        const bool branch_taken_0x109f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x109f98) {
            ctx->pc = 0x109F9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x109F98u;
            // 0x109f9c: 0x8ce201b4  lw          $v0, 0x1B4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x109FB0u;
            goto label_109fb0;
        }
    }
    ctx->pc = 0x109FA0u;
    // 0x109fa0: 0x8ce201b8  lw          $v0, 0x1B8($a3)
    ctx->pc = 0x109fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 440)));
    // 0x109fa4: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x109FA4u;
    {
        const bool branch_taken_0x109fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x109fa4) {
            ctx->pc = 0x109FA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x109FA4u;
            // 0x109fa8: 0xace000fc  sw          $zero, 0xFC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 252), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x109FD8u;
            goto label_109fd8;
        }
    }
    ctx->pc = 0x109FACu;
    // 0x109fac: 0x8ce201b4  lw          $v0, 0x1B4($a3)
    ctx->pc = 0x109facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
label_109fb0:
    // 0x109fb0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x109FB0u;
    {
        const bool branch_taken_0x109fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x109fb0) {
            ctx->pc = 0x109FB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x109FB0u;
            // 0x109fb4: 0xace000fc  sw          $zero, 0xFC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 252), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x109FD8u;
            goto label_109fd8;
        }
    }
    ctx->pc = 0x109FB8u;
    // 0x109fb8: 0x8ce201c8  lw          $v0, 0x1C8($a3)
    ctx->pc = 0x109fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
    // 0x109fbc: 0x8ce401d8  lw          $a0, 0x1D8($a3)
    ctx->pc = 0x109fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
    // 0x109fc0: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x109fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x109fc4: 0x8ce301e8  lw          $v1, 0x1E8($a3)
    ctx->pc = 0x109fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
    // 0x109fc8: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x109fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x109fcc: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x109fccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x109fd0: 0x8ce90184  lw          $t1, 0x184($a3)
    ctx->pc = 0x109fd0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 388)));
    // 0x109fd4: 0xace000fc  sw          $zero, 0xFC($a3)
    ctx->pc = 0x109fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 252), GPR_U32(ctx, 0));
label_109fd8:
    // 0x109fd8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x109fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x109fdc: 0x1522000b  bne         $t1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x109FDCu;
    {
        const bool branch_taken_0x109fdc = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x109FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109FDCu;
            // 0x109fe0: 0xace001b8  sw          $zero, 0x1B8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 440), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109fdc) {
            ctx->pc = 0x10A00Cu;
            goto label_10a00c;
        }
    }
    ctx->pc = 0x109FE4u;
    // 0x109fe4: 0x8ce301c8  lw          $v1, 0x1C8($a3)
    ctx->pc = 0x109fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
    // 0x109fe8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x109fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109fec: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x109fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x109ff0: 0x50440018  beql        $v0, $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x109FF0u;
    {
        const bool branch_taken_0x109ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x109ff0) {
            ctx->pc = 0x109FF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x109FF0u;
            // 0x109ff4: 0x8ce301cc  lw          $v1, 0x1CC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10A054u;
            goto label_10a054;
        }
    }
    ctx->pc = 0x109FF8u;
    // 0x109ff8: 0x8ce201b4  lw          $v0, 0x1B4($a3)
    ctx->pc = 0x109ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
    // 0x109ffc: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x109FFCu;
    {
        const bool branch_taken_0x109ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109FFCu;
            // 0x10a000: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109ffc) {
            ctx->pc = 0x10A120u;
            goto label_10a120;
        }
    }
    ctx->pc = 0x10A004u;
    // 0x10a004: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x10A004u;
    {
        const bool branch_taken_0x10a004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A004u;
            // 0x10a008: 0x8ce301cc  lw          $v1, 0x1CC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a004) {
            ctx->pc = 0x10A054u;
            goto label_10a054;
        }
    }
    ctx->pc = 0x10A00Cu;
label_10a00c:
    // 0x10a00c: 0x8ce201d8  lw          $v0, 0x1D8($a3)
    ctx->pc = 0x10a00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
    // 0x10a010: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10a010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a014: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x10a014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x10a018: 0x54830006  bnel        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10A018u;
    {
        const bool branch_taken_0x10a018 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x10a018) {
            ctx->pc = 0x10A01Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10A018u;
            // 0x10a01c: 0x8ce201b4  lw          $v0, 0x1B4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10A034u;
            goto label_10a034;
        }
    }
    ctx->pc = 0x10A020u;
    // 0x10a020: 0x8ce201e8  lw          $v0, 0x1E8($a3)
    ctx->pc = 0x10a020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
    // 0x10a024: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x10a024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x10a028: 0x50640005  beql        $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10A028u;
    {
        const bool branch_taken_0x10a028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x10a028) {
            ctx->pc = 0x10A02Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10A028u;
            // 0x10a02c: 0x8ce201dc  lw          $v0, 0x1DC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 476)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10A040u;
            goto label_10a040;
        }
    }
    ctx->pc = 0x10A030u;
    // 0x10a030: 0x8ce201b4  lw          $v0, 0x1B4($a3)
    ctx->pc = 0x10a030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
label_10a034:
    // 0x10a034: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x10A034u;
    {
        const bool branch_taken_0x10a034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A034u;
            // 0x10a038: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a034) {
            ctx->pc = 0x10A120u;
            goto label_10a120;
        }
    }
    ctx->pc = 0x10A03Cu;
    // 0x10a03c: 0x8ce201dc  lw          $v0, 0x1DC($a3)
    ctx->pc = 0x10a03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 476)));
label_10a040:
    // 0x10a040: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10a040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a044: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x10a044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x10a048: 0x14830035  bne         $a0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x10A048u;
    {
        const bool branch_taken_0x10a048 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x10A04Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A048u;
            // 0x10a04c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a048) {
            ctx->pc = 0x10A120u;
            goto label_10a120;
        }
    }
    ctx->pc = 0x10A050u;
    // 0x10a050: 0x8ce301ec  lw          $v1, 0x1EC($a3)
    ctx->pc = 0x10a050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 492)));
label_10a054:
    // 0x10a054: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x10a054u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a058: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x10a058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x10a05c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10a05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x10a060: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x10A060u;
    {
        const bool branch_taken_0x10a060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A060u;
            // 0x10a064: 0x2680b  movn        $t5, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a060) {
            ctx->pc = 0x10A11Cu;
            goto label_10a11c;
        }
    }
    ctx->pc = 0x10A068u;
label_10a068:
    // 0x10a068: 0x54a0000e  bnel        $a1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x10A068u;
    {
        const bool branch_taken_0x10a068 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x10a068) {
            ctx->pc = 0x10A06Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10A068u;
            // 0x10a06c: 0x8ce201cc  lw          $v0, 0x1CC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10A0A4u;
            goto label_10a0a4;
        }
    }
    ctx->pc = 0x10A070u;
    // 0x10a070: 0x8ce601c8  lw          $a2, 0x1C8($a3)
    ctx->pc = 0x10a070u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
    // 0x10a074: 0x8ce401cc  lw          $a0, 0x1CC($a3)
    ctx->pc = 0x10a074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
    // 0x10a078: 0xace601cc  sw          $a2, 0x1CC($a3)
    ctx->pc = 0x10a078u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 460), GPR_U32(ctx, 6));
    // 0x10a07c: 0x8ce601d8  lw          $a2, 0x1D8($a3)
    ctx->pc = 0x10a07cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
    // 0x10a080: 0x8ce301dc  lw          $v1, 0x1DC($a3)
    ctx->pc = 0x10a080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 476)));
    // 0x10a084: 0xace601dc  sw          $a2, 0x1DC($a3)
    ctx->pc = 0x10a084u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 476), GPR_U32(ctx, 6));
    // 0x10a088: 0x8ce601e8  lw          $a2, 0x1E8($a3)
    ctx->pc = 0x10a088u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
    // 0x10a08c: 0x8ce201ec  lw          $v0, 0x1EC($a3)
    ctx->pc = 0x10a08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 492)));
    // 0x10a090: 0xace401c8  sw          $a0, 0x1C8($a3)
    ctx->pc = 0x10a090u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 456), GPR_U32(ctx, 4));
    // 0x10a094: 0xace301d8  sw          $v1, 0x1D8($a3)
    ctx->pc = 0x10a094u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 472), GPR_U32(ctx, 3));
    // 0x10a098: 0xace201e8  sw          $v0, 0x1E8($a3)
    ctx->pc = 0x10a098u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 488), GPR_U32(ctx, 2));
    // 0x10a09c: 0xace601ec  sw          $a2, 0x1EC($a3)
    ctx->pc = 0x10a09cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 492), GPR_U32(ctx, 6));
    // 0x10a0a0: 0x8ce201cc  lw          $v0, 0x1CC($a3)
    ctx->pc = 0x10a0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
label_10a0a4:
    // 0x10a0a4: 0x8ce401dc  lw          $a0, 0x1DC($a3)
    ctx->pc = 0x10a0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 476)));
    // 0x10a0a8: 0x8ce301ec  lw          $v1, 0x1EC($a3)
    ctx->pc = 0x10a0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 492)));
    // 0x10a0ac: 0xace201d0  sw          $v0, 0x1D0($a3)
    ctx->pc = 0x10a0acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 464), GPR_U32(ctx, 2));
    // 0x10a0b0: 0xace401e0  sw          $a0, 0x1E0($a3)
    ctx->pc = 0x10a0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 480), GPR_U32(ctx, 4));
    // 0x10a0b4: 0x152e0006  bne         $t1, $t6, . + 4 + (0x6 << 2)
    ctx->pc = 0x10A0B4u;
    {
        const bool branch_taken_0x10a0b4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 14));
        ctx->pc = 0x10A0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A0B4u;
            // 0x10a0b8: 0xace301f0  sw          $v1, 0x1F0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 496), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a0b4) {
            ctx->pc = 0x10A0D0u;
            goto label_10a0d0;
        }
    }
    ctx->pc = 0x10A0BCu;
    // 0x10a0bc: 0x554c0017  bnel        $t2, $t4, . + 4 + (0x17 << 2)
    ctx->pc = 0x10A0BCu;
    {
        const bool branch_taken_0x10a0bc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 12));
        if (branch_taken_0x10a0bc) {
            ctx->pc = 0x10A0C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10A0BCu;
            // 0x10a0c0: 0x240d0001  addiu       $t5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10A11Cu;
            goto label_10a11c;
        }
    }
    ctx->pc = 0x10A0C4u;
    // 0x10a0c4: 0x8ce201c8  lw          $v0, 0x1C8($a3)
    ctx->pc = 0x10a0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
    // 0x10a0c8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x10A0C8u;
    {
        const bool branch_taken_0x10a0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A0CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A0C8u;
            // 0x10a0cc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a0c8) {
            ctx->pc = 0x10A10Cu;
            goto label_10a10c;
        }
    }
    ctx->pc = 0x10A0D0u;
label_10a0d0:
    // 0x10a0d0: 0x39220001  xori        $v0, $t1, 0x1
    ctx->pc = 0x10a0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)1);
    // 0x10a0d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10a0d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a0d8: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x10a0d8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x10a0dc: 0x154c000e  bne         $t2, $t4, . + 4 + (0xE << 2)
    ctx->pc = 0x10A0DCu;
    {
        const bool branch_taken_0x10a0dc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 12));
        ctx->pc = 0x10A0E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A0DCu;
            // 0x10a0e0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a0dc) {
            ctx->pc = 0x10A118u;
            goto label_10a118;
        }
    }
    ctx->pc = 0x10A0E4u;
    // 0x10a0e4: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x10A0E4u;
    {
        const bool branch_taken_0x10a0e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a0e4) {
            ctx->pc = 0x10A0E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10A0E4u;
            // 0x10a0e8: 0x8ce201d8  lw          $v0, 0x1D8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10A0FCu;
            goto label_10a0fc;
        }
    }
    ctx->pc = 0x10A0ECu;
    // 0x10a0ec: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x10a0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x10a0f0: 0x5046000a  beql        $v0, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x10A0F0u;
    {
        const bool branch_taken_0x10a0f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x10a0f0) {
            ctx->pc = 0x10A0F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10A0F0u;
            // 0x10a0f4: 0x240d0001  addiu       $t5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10A11Cu;
            goto label_10a11c;
        }
    }
    ctx->pc = 0x10A0F8u;
    // 0x10a0f8: 0x8ce201d8  lw          $v0, 0x1D8($a3)
    ctx->pc = 0x10a0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
label_10a0fc:
    // 0x10a0fc: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x10a0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x10a100: 0x14860007  bne         $a0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x10A100u;
    {
        const bool branch_taken_0x10a100 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x10A104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A100u;
            // 0x10a104: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a100) {
            ctx->pc = 0x10A120u;
            goto label_10a120;
        }
    }
    ctx->pc = 0x10A108u;
    // 0x10a108: 0x8ce201e8  lw          $v0, 0x1E8($a3)
    ctx->pc = 0x10a108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
label_10a10c:
    // 0x10a10c: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x10a10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x10a110: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10A110u;
    {
        const bool branch_taken_0x10a110 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x10A114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A110u;
            // 0x10a114: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a110) {
            ctx->pc = 0x10A120u;
            goto label_10a120;
        }
    }
    ctx->pc = 0x10A118u;
label_10a118:
    // 0x10a118: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x10a118u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10a11c:
    // 0x10a11c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10a11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10a120:
    // 0x10a120: 0x1122000c  beq         $t1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x10A120u;
    {
        const bool branch_taken_0x10a120 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        ctx->pc = 0x10A124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A120u;
            // 0x10a124: 0x29220003  slti        $v0, $t1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a120) {
            ctx->pc = 0x10A154u;
            goto label_10a154;
        }
    }
    ctx->pc = 0x10A128u;
    // 0x10a128: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10A128u;
    {
        const bool branch_taken_0x10a128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A12Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A128u;
            // 0x10a12c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a128) {
            ctx->pc = 0x10A140u;
            goto label_10a140;
        }
    }
    ctx->pc = 0x10A130u;
    // 0x10a130: 0x51220009  beql        $t1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10A130u;
    {
        const bool branch_taken_0x10a130 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x10a130) {
            ctx->pc = 0x10A134u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10A130u;
            // 0x10a134: 0x8ce801e0  lw          $t0, 0x1E0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 480)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10A158u;
            goto label_10a158;
        }
    }
    ctx->pc = 0x10A138u;
    // 0x10a138: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x10A138u;
    {
        const bool branch_taken_0x10a138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A13Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A138u;
            // 0x10a13c: 0xad000028  sw          $zero, 0x28($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a138) {
            ctx->pc = 0x10A15Cu;
            goto label_10a15c;
        }
    }
    ctx->pc = 0x10A140u;
label_10a140:
    // 0x10a140: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10a140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10a144: 0x51220004  beql        $t1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10A144u;
    {
        const bool branch_taken_0x10a144 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x10a144) {
            ctx->pc = 0x10A148u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10A144u;
            // 0x10a148: 0x8ce801d0  lw          $t0, 0x1D0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 464)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10A158u;
            goto label_10a158;
        }
    }
    ctx->pc = 0x10A14Cu;
    // 0x10a14c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10A14Cu;
    {
        const bool branch_taken_0x10a14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A14Cu;
            // 0x10a150: 0xad000028  sw          $zero, 0x28($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a14c) {
            ctx->pc = 0x10A15Cu;
            goto label_10a15c;
        }
    }
    ctx->pc = 0x10A154u;
label_10a154:
    // 0x10a154: 0x8ce801f0  lw          $t0, 0x1F0($a3)
    ctx->pc = 0x10a154u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 496)));
label_10a158:
    // 0x10a158: 0xad000028  sw          $zero, 0x28($t0)
    ctx->pc = 0x10a158u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 0));
label_10a15c:
    // 0x10a15c: 0x1a0102d  daddu       $v0, $t5, $zero
    ctx->pc = 0x10a15cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a160: 0xdce30838  ld          $v1, 0x838($a3)
    ctx->pc = 0x10a160u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 2104)));
    // 0x10a164: 0x8ce40160  lw          $a0, 0x160($a3)
    ctx->pc = 0x10a164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 352)));
    // 0x10a168: 0xfd030018  sd          $v1, 0x18($t0)
    ctx->pc = 0x10a168u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 3));
    // 0x10a16c: 0xad04002c  sw          $a0, 0x2C($t0)
    ctx->pc = 0x10a16cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 44), GPR_U32(ctx, 4));
    // 0x10a170: 0xdce30840  ld          $v1, 0x840($a3)
    ctx->pc = 0x10a170u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 2112)));
    // 0x10a174: 0x8ce40184  lw          $a0, 0x184($a3)
    ctx->pc = 0x10a174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 388)));
    // 0x10a178: 0xfd030020  sd          $v1, 0x20($t0)
    ctx->pc = 0x10a178u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 32), GPR_U64(ctx, 3));
    // 0x10a17c: 0xad040030  sw          $a0, 0x30($t0)
    ctx->pc = 0x10a17cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 48), GPR_U32(ctx, 4));
    // 0x10a180: 0x8ce3014c  lw          $v1, 0x14C($a3)
    ctx->pc = 0x10a180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 332)));
    // 0x10a184: 0xad030034  sw          $v1, 0x34($t0)
    ctx->pc = 0x10a184u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 52), GPR_U32(ctx, 3));
    // 0x10a188: 0x8ce40198  lw          $a0, 0x198($a3)
    ctx->pc = 0x10a188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 408)));
    // 0x10a18c: 0xad040038  sw          $a0, 0x38($t0)
    ctx->pc = 0x10a18cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 56), GPR_U32(ctx, 4));
    // 0x10a190: 0x8ce30188  lw          $v1, 0x188($a3)
    ctx->pc = 0x10a190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 392)));
    // 0x10a194: 0xad03003c  sw          $v1, 0x3C($t0)
    ctx->pc = 0x10a194u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 60), GPR_U32(ctx, 3));
    // 0x10a198: 0x8ce40194  lw          $a0, 0x194($a3)
    ctx->pc = 0x10a198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 404)));
    // 0x10a19c: 0xad040040  sw          $a0, 0x40($t0)
    ctx->pc = 0x10a19cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 64), GPR_U32(ctx, 4));
    // 0x10a1a0: 0x8ce3019c  lw          $v1, 0x19C($a3)
    ctx->pc = 0x10a1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 412)));
    // 0x10a1a4: 0xad030044  sw          $v1, 0x44($t0)
    ctx->pc = 0x10a1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 68), GPR_U32(ctx, 3));
    // 0x10a1a8: 0x8ce401a0  lw          $a0, 0x1A0($a3)
    ctx->pc = 0x10a1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 416)));
    // 0x10a1ac: 0xad040048  sw          $a0, 0x48($t0)
    ctx->pc = 0x10a1acu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 72), GPR_U32(ctx, 4));
    // 0x10a1b0: 0x8ce301a4  lw          $v1, 0x1A4($a3)
    ctx->pc = 0x10a1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 420)));
    // 0x10a1b4: 0xad03004c  sw          $v1, 0x4C($t0)
    ctx->pc = 0x10a1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 76), GPR_U32(ctx, 3));
    // 0x10a1b8: 0x8ce401a8  lw          $a0, 0x1A8($a3)
    ctx->pc = 0x10a1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 424)));
    // 0x10a1bc: 0xad040050  sw          $a0, 0x50($t0)
    ctx->pc = 0x10a1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 80), GPR_U32(ctx, 4));
    // 0x10a1c0: 0x8ce301ac  lw          $v1, 0x1AC($a3)
    ctx->pc = 0x10a1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 428)));
    // 0x10a1c4: 0xad030054  sw          $v1, 0x54($t0)
    ctx->pc = 0x10a1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 84), GPR_U32(ctx, 3));
    // 0x10a1c8: 0x8ce401b0  lw          $a0, 0x1B0($a3)
    ctx->pc = 0x10a1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 432)));
    // 0x10a1cc: 0xad040058  sw          $a0, 0x58($t0)
    ctx->pc = 0x10a1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 88), GPR_U32(ctx, 4));
    // 0x10a1d0: 0x8ce30158  lw          $v1, 0x158($a3)
    ctx->pc = 0x10a1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 344)));
    // 0x10a1d4: 0xad03005c  sw          $v1, 0x5C($t0)
    ctx->pc = 0x10a1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 92), GPR_U32(ctx, 3));
    // 0x10a1d8: 0x8ce4015c  lw          $a0, 0x15C($a3)
    ctx->pc = 0x10a1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 348)));
    // 0x10a1dc: 0x3e00008  jr          $ra
    ctx->pc = 0x10A1DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A1E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A1DCu;
            // 0x10a1e0: 0xad040060  sw          $a0, 0x60($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 96), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10A1E4u;
    // 0x10a1e4: 0x0  nop
    ctx->pc = 0x10a1e4u;
    // NOP
    ctx->pc = 0x10a1e8u;
}
