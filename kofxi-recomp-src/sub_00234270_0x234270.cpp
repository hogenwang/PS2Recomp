#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00234270
// Address: 0x234270 - 0x234360
void sub_00234270_0x234270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234270_0x234270");
#endif

    switch (ctx->pc) {
        case 0x234290u: goto label_234290;
        case 0x2342ccu: goto label_2342cc;
        case 0x2342d4u: goto label_2342d4;
        default: break;
    }

    ctx->pc = 0x234270u;

    // 0x234270: 0x18a00034  blez        $a1, . + 4 + (0x34 << 2)
    ctx->pc = 0x234270u;
    {
        const bool branch_taken_0x234270 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x234274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234270u;
            // 0x234274: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234270) {
            ctx->pc = 0x234344u;
            goto label_234344;
        }
    }
    ctx->pc = 0x234278u;
    // 0x234278: 0x240c0005  addiu       $t4, $zero, 0x5
    ctx->pc = 0x234278u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x23427c: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x23427cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x234280: 0x240a0060  addiu       $t2, $zero, 0x60
    ctx->pc = 0x234280u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x234284: 0x24090034  addiu       $t1, $zero, 0x34
    ctx->pc = 0x234284u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x234288: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x234288u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23428c: 0x0  nop
    ctx->pc = 0x23428cu;
    // NOP
label_234290:
    // 0x234290: 0x94e80000  lhu         $t0, 0x0($a3)
    ctx->pc = 0x234290u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x234294: 0x31020007  andi        $v0, $t0, 0x7
    ctx->pc = 0x234294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)7);
    // 0x234298: 0x144c0018  bne         $v0, $t4, . + 4 + (0x18 << 2)
    ctx->pc = 0x234298u;
    {
        const bool branch_taken_0x234298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 12));
        if (branch_taken_0x234298) {
            ctx->pc = 0x2342FCu;
            goto label_2342fc;
        }
    }
    ctx->pc = 0x2342A0u;
    // 0x2342a0: 0x310200f0  andi        $v0, $t0, 0xF0
    ctx->pc = 0x2342a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)240);
    // 0x2342a4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2342A4u;
    {
        const bool branch_taken_0x2342a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2342A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2342A4u;
            // 0x2342a8: 0x24660001  addiu       $a2, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2342a4) {
            ctx->pc = 0x2342D4u;
            goto label_2342d4;
        }
    }
    ctx->pc = 0x2342ACu;
    // 0x2342ac: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x2342acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2342b0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2342B0u;
    {
        const bool branch_taken_0x2342b0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2342B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2342B0u;
            // 0x2342b4: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2342b0) {
            ctx->pc = 0x2342CCu;
            goto label_2342cc;
        }
    }
    ctx->pc = 0x2342B8u;
    // 0x2342b8: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x2342b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2342bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2342BCu;
    {
        const bool branch_taken_0x2342bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2342bc) {
            ctx->pc = 0x2342CCu;
            goto label_2342cc;
        }
    }
    ctx->pc = 0x2342C4u;
    // 0x2342c4: 0x4c1000d  bgez        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x2342C4u;
    {
        const bool branch_taken_0x2342c4 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x2342C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2342C4u;
            // 0x2342c8: 0x31020007  andi        $v0, $t0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2342c4) {
            ctx->pc = 0x2342FCu;
            goto label_2342fc;
        }
    }
    ctx->pc = 0x2342CCu;
label_2342cc:
    // 0x2342cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2342CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2342D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2342CCu;
            // 0x2342d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2342D4u;
label_2342d4:
    // 0x2342d4: 0x90e20002  lbu         $v0, 0x2($a3)
    ctx->pc = 0x2342d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x2342d8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2342d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2342dc: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x2342dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2342e0: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2342E0u;
    {
        const bool branch_taken_0x2342e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2342e0) {
            ctx->pc = 0x2342CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2342cc;
        }
    }
    ctx->pc = 0x2342E8u;
    // 0x2342e8: 0x90e20003  lbu         $v0, 0x3($a3)
    ctx->pc = 0x2342e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x2342ec: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2342ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2342f0: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x2342f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2342f4: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2342F4u;
    {
        const bool branch_taken_0x2342f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2342F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2342F4u;
            // 0x2342f8: 0x31020007  andi        $v0, $t0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2342f4) {
            ctx->pc = 0x2342CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2342cc;
        }
    }
    ctx->pc = 0x2342FCu;
label_2342fc:
    // 0x2342fc: 0x504b0006  beql        $v0, $t3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2342FCu;
    {
        const bool branch_taken_0x2342fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 11));
        if (branch_taken_0x2342fc) {
            ctx->pc = 0x234300u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2342FCu;
            // 0x234300: 0x8ce20004  lw          $v0, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x234318u;
            goto label_234318;
        }
    }
    ctx->pc = 0x234304u;
    // 0x234304: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x234304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x234308: 0x304200e7  andi        $v0, $v0, 0xE7
    ctx->pc = 0x234308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)231);
    // 0x23430c: 0x144a0005  bne         $v0, $t2, . + 4 + (0x5 << 2)
    ctx->pc = 0x23430Cu;
    {
        const bool branch_taken_0x23430c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 10));
        if (branch_taken_0x23430c) {
            ctx->pc = 0x234324u;
            goto label_234324;
        }
    }
    ctx->pc = 0x234314u;
    // 0x234314: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x234314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_234318:
    // 0x234318: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x234318u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x23431c: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x23431Cu;
    {
        const bool branch_taken_0x23431c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23431c) {
            ctx->pc = 0x2342CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2342cc;
        }
    }
    ctx->pc = 0x234324u;
label_234324:
    // 0x234324: 0x15090004  bne         $t0, $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x234324u;
    {
        const bool branch_taken_0x234324 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 9));
        ctx->pc = 0x234328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234324u;
            // 0x234328: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234324) {
            ctx->pc = 0x234338u;
            goto label_234338;
        }
    }
    ctx->pc = 0x23432Cu;
    // 0x23432c: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x23432cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x234330: 0x1040ffe6  beqz        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x234330u;
    {
        const bool branch_taken_0x234330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x234330) {
            ctx->pc = 0x2342CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2342cc;
        }
    }
    ctx->pc = 0x234338u;
label_234338:
    // 0x234338: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x234338u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x23433c: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x23433Cu;
    {
        const bool branch_taken_0x23433c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x234340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23433Cu;
            // 0x234340: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23433c) {
            ctx->pc = 0x234290u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_234290;
        }
    }
    ctx->pc = 0x234344u;
label_234344:
    // 0x234344: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x234344u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x234348: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x234348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x23434c: 0x9462fff8  lhu         $v0, -0x8($v1)
    ctx->pc = 0x23434cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294967288)));
    // 0x234350: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x234350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x234354: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x234354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x234358: 0x3e00008  jr          $ra
    ctx->pc = 0x234358u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23435Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234358u;
            // 0x23435c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x234360u;
    ctx->pc = 0x234360u;
}
