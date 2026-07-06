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

// Function: sub_002D4058
// Address: 0x2d4058 - 0x2d4198
void sub_002D4058_0x2d4058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4058_0x2d4058");
#endif

    switch (ctx->pc) {
        case 0x2d4088u: goto label_2d4088;
        case 0x2d40e8u: goto label_2d40e8;
        case 0x2d411cu: goto label_2d411c;
        case 0x2d4168u: goto label_2d4168;
        default: break;
    }

    ctx->pc = 0x2d4058u;

    // 0x2d4058: 0x8c8c0004  lw          $t4, 0x4($a0)
    ctx->pc = 0x2d4058u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d405c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2d405cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4060: 0x8caa0004  lw          $t2, 0x4($a1)
    ctx->pc = 0x2d4060u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2d4064: 0x24020109  addiu       $v0, $zero, 0x109
    ctx->pc = 0x2d4064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 265));
    // 0x2d4068: 0x8cab0008  lw          $t3, 0x8($a1)
    ctx->pc = 0x2d4068u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2d406c: 0x14c182a  slt         $v1, $t2, $t4
    ctx->pc = 0x2d406cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x2d4070: 0x14600047  bnez        $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x2D4070u;
    {
        const bool branch_taken_0x2d4070 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D4074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4070u;
        // 0x2d4074: 0x8c8d0008  lw          $t5, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4070) {
            ctx->pc = 0x2D4190u;
            goto label_2d4190;
        }
    }
    ctx->pc = 0x2D4078u;
    // 0x2d4078: 0x1980002e  blez        $t4, . + 4 + (0x2E << 2)
    ctx->pc = 0x2D4078u;
    {
        const bool branch_taken_0x2d4078 = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x2D407Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4078u;
        // 0x2d407c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4078) {
            ctx->pc = 0x2D4134u;
            goto label_2d4134;
        }
    }
    ctx->pc = 0x2D4080u;
    // 0x2d4080: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x2d4080u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2d4084: 0x0  nop
    ctx->pc = 0x2d4084u;
    // NOP
label_2d4088:
    // 0x2d4088: 0x6d2021  addu        $a0, $v1, $t5
    ctx->pc = 0x2d4088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x2d408c: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x2d408cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x2d4090: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x2d4090u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d4094: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x2d4094u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d4098: 0x82102f  dsubu       $v0, $a0, $v0
    ctx->pc = 0x2d4098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) - GPR_U64(ctx, 2));
    // 0x2d409c: 0x82202b  sltu        $a0, $a0, $v0
    ctx->pc = 0x2d409cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d40a0: 0x4483c  dsll32      $t1, $a0, 0
    ctx->pc = 0x2d40a0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2d40a4: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x2d40a4u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x2d40a8: 0x1120001d  beqz        $t1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2D40A8u;
    {
        const bool branch_taken_0x2d40a8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D40ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D40A8u;
        // 0x2d40ac: 0xfc620000  sd          $v0, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d40a8) {
            ctx->pc = 0x2D4120u;
            goto label_2d4120;
        }
    }
    ctx->pc = 0x2D40B0u;
    // 0x2d40b0: 0x24c80001  addiu       $t0, $a2, 0x1
    ctx->pc = 0x2d40b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2d40b4: 0x10a102a  slt         $v0, $t0, $t2
    ctx->pc = 0x2d40b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x2d40b8: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2D40B8u;
    {
        const bool branch_taken_0x2d40b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D40BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D40B8u;
        // 0x2d40bc: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d40b8) {
            ctx->pc = 0x2D4124u;
            goto label_2d4124;
        }
    }
    ctx->pc = 0x2D40C0u;
    // 0x2d40c0: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x2d40c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x2d40c4: 0x4b3021  addu        $a2, $v0, $t3
    ctx->pc = 0x2d40c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x2d40c8: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x2d40c8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d40cc: 0x6482ffff  daddiu      $v0, $a0, -0x1
    ctx->pc = 0x2d40ccu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)4294967295);
    // 0x2d40d0: 0x82182b  sltu        $v1, $a0, $v0
    ctx->pc = 0x2d40d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d40d4: 0x3483c  dsll32      $t1, $v1, 0
    ctx->pc = 0x2d40d4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2d40d8: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x2d40d8u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x2d40dc: 0x11200011  beqz        $t1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D40DCu;
    {
        const bool branch_taken_0x2d40dc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D40E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D40DCu;
        // 0x2d40e0: 0xfcc20000  sd          $v0, 0x0($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d40dc) {
            ctx->pc = 0x2D4124u;
            goto label_2d4124;
        }
    }
    ctx->pc = 0x2D40E4u;
    // 0x2d40e4: 0x0  nop
    ctx->pc = 0x2d40e4u;
    // NOP
label_2d40e8:
    // 0x2d40e8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2d40e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2d40ec: 0xea102a  slt         $v0, $a3, $t2
    ctx->pc = 0x2d40ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x2d40f0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2D40F0u;
    {
        const bool branch_taken_0x2d40f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D40F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D40F0u;
        // 0x2d40f4: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d40f0) {
            ctx->pc = 0x2D4124u;
            goto label_2d4124;
        }
    }
    ctx->pc = 0x2D40F8u;
    // 0x2d40f8: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x2d40f8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d40fc: 0x6482ffff  daddiu      $v0, $a0, -0x1
    ctx->pc = 0x2d40fcu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)4294967295);
    // 0x2d4100: 0x82182b  sltu        $v1, $a0, $v0
    ctx->pc = 0x2d4100u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d4104: 0x3483c  dsll32      $t1, $v1, 0
    ctx->pc = 0x2d4104u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2d4108: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x2d4108u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x2d410c: 0x1520fff6  bnez        $t1, . + 4 + (-0xA << 2)
    ctx->pc = 0x2D410Cu;
    {
        const bool branch_taken_0x2d410c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D4110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D410Cu;
        // 0x2d4110: 0xfcc20000  sd          $v0, 0x0($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d410c) {
            ctx->pc = 0x2D40E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d40e8;
        }
    }
    ctx->pc = 0x2D4114u;
    // 0x2d4114: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D4114u;
    {
        const bool branch_taken_0x2d4114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4114u;
        // 0x2d4118: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4114) {
            ctx->pc = 0x2D4128u;
            goto label_2d4128;
        }
    }
    ctx->pc = 0x2D411Cu;
label_2d411c:
    // 0x2d411c: 0x0  nop
    ctx->pc = 0x2d411cu;
    // NOP
label_2d4120:
    // 0x2d4120: 0x24c80001  addiu       $t0, $a2, 0x1
    ctx->pc = 0x2d4120u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2d4124:
    // 0x2d4124: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x2d4124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2d4128:
    // 0x2d4128: 0xcc102a  slt         $v0, $a2, $t4
    ctx->pc = 0x2d4128u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x2d412c: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x2D412Cu;
    {
        const bool branch_taken_0x2d412c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D4130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D412Cu;
        // 0x2d4130: 0x618c0  sll         $v1, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d412c) {
            ctx->pc = 0x2D4088u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d4088;
        }
    }
    ctx->pc = 0x2D4134u;
label_2d4134:
    // 0x2d4134: 0x15200016  bnez        $t1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2D4134u;
    {
        const bool branch_taken_0x2d4134 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D4138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4134u;
        // 0x2d4138: 0x24020109  addiu       $v0, $zero, 0x109 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 265));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4134) {
            ctx->pc = 0x2D4190u;
            goto label_2d4190;
        }
    }
    ctx->pc = 0x2D413Cu;
    // 0x2d413c: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x2d413cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2d4140: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x2d4140u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2d4144: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x2d4144u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2d4148: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2d4148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2d414c: 0xdc43fff8  ld          $v1, -0x8($v0)
    ctx->pc = 0x2d414cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 4294967288)));
    // 0x2d4150: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2D4150u;
    {
        const bool branch_taken_0x2d4150 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D4154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4150u;
        // 0x2d4154: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4150) {
            ctx->pc = 0x2D4190u;
            goto label_2d4190;
        }
    }
    ctx->pc = 0x2D4158u;
    // 0x2d4158: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x2d4158u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2d415c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2D415Cu;
    {
        const bool branch_taken_0x2d415c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d415c) {
            ctx->pc = 0x2D4160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D415Cu;
            // 0x2d4160: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D4190u;
            goto label_2d4190;
        }
    }
    ctx->pc = 0x2D4164u;
    // 0x2d4164: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x2d4164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_2d4168:
    // 0x2d4168: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x2d4168u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x2d416c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d416cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d4170: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x2d4170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2d4174: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2d4174u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4178: 0xdc64fff8  ld          $a0, -0x8($v1)
    ctx->pc = 0x2d4178u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
    // 0x2d417c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D417Cu;
    {
        const bool branch_taken_0x2d417c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D4180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D417Cu;
        // 0x2d4180: 0x28c20002  slti        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d417c) {
            ctx->pc = 0x2D418Cu;
            goto label_2d418c;
        }
    }
    ctx->pc = 0x2D4184u;
    // 0x2d4184: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2D4184u;
    {
        const bool branch_taken_0x2d4184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4184) {
            ctx->pc = 0x2D4188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D4184u;
            // 0x2d4188: 0x24c2ffff  addiu       $v0, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D4168u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d4168;
        }
    }
    ctx->pc = 0x2D418Cu;
label_2d418c:
    // 0x2d418c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d418cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d4190:
    // 0x2d4190: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4198u;
}
