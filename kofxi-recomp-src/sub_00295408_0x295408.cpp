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

// Function: sub_00295408
// Address: 0x295408 - 0x295630
void sub_00295408_0x295408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295408_0x295408");
#endif

    switch (ctx->pc) {
        case 0x295490u: goto label_295490;
        case 0x2954a8u: goto label_2954a8;
        case 0x295588u: goto label_295588;
        default: break;
    }

    ctx->pc = 0x295408u;

    // 0x295408: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x295408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x29540c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x29540cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295410: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x295410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x295414: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x295414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x295418: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x295418u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29541c: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x29541cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x295420: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x295420u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295424: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x295424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x295428: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x295428u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29542c: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x29542cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x295430: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x295430u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295434: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x295434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x295438: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x295438u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29543c: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x29543cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x295440: 0x264a0008  addiu       $t2, $s2, 0x8
    ctx->pc = 0x295440u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x295444: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x295444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x295448: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x295448u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29544c: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x29544cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x295450: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x295450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x295454: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x295454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x295458: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x295458u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x29545c: 0x8e540058  lw          $s4, 0x58($s2)
    ctx->pc = 0x29545cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x295460: 0x12e0000b  beqz        $s7, . + 4 + (0xB << 2)
    ctx->pc = 0x295460u;
    {
        const bool branch_taken_0x295460 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x295464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295460u;
        // 0x295464: 0x8e53005c  lw          $s3, 0x5C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295460) {
            ctx->pc = 0x295490u;
            goto label_295490;
        }
    }
    ctx->pc = 0x295468u;
    // 0x295468: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x295468u;
    {
        const bool branch_taken_0x295468 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x29546Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295468u;
        // 0x29546c: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295468) {
            ctx->pc = 0x295498u;
            goto label_295498;
        }
    }
    ctx->pc = 0x295470u;
    // 0x295470: 0x92a20000  lbu         $v0, 0x0($s5)
    ctx->pc = 0x295470u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x295474: 0x24634cc8  addiu       $v1, $v1, 0x4CC8
    ctx->pc = 0x295474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19656));
    // 0x295478: 0x240500f2  addiu       $a1, $zero, 0xF2
    ctx->pc = 0x295478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 242));
    // 0x29547c: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x29547cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x295480: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x295480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x295484: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x295484u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x295488: 0x14850003  bne         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x295488u;
    {
        const bool branch_taken_0x295488 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x295488) {
            ctx->pc = 0x295498u;
            goto label_295498;
        }
    }
    ctx->pc = 0x295490u;
label_295490:
    // 0x295490: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x295490u;
    {
        const bool branch_taken_0x295490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295490u;
        // 0x295494: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295490) {
            ctx->pc = 0x2955ECu;
            goto label_2955ec;
        }
    }
    ctx->pc = 0x295498u;
label_295498:
    // 0x295498: 0x1ae00053  blez        $s7, . + 4 + (0x53 << 2)
    ctx->pc = 0x295498u;
    {
        const bool branch_taken_0x295498 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x29549Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295498u;
        // 0x29549c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295498) {
            ctx->pc = 0x2955E8u;
            goto label_2955e8;
        }
    }
    ctx->pc = 0x2954A0u;
    // 0x2954a0: 0x2a820050  slti        $v0, $s4, 0x50
    ctx->pc = 0x2954a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)80) ? 1 : 0);
    // 0x2954a4: 0x0  nop
    ctx->pc = 0x2954a4u;
    // NOP
label_2954a8:
    // 0x2954a8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2954A8u;
    {
        const bool branch_taken_0x2954a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2954ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2954A8u;
        // 0x2954ac: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2954a8) {
            ctx->pc = 0x2954E0u;
            goto label_2954e0;
        }
    }
    ctx->pc = 0x2954B0u;
    // 0x2954b0: 0x92a50000  lbu         $a1, 0x0($s5)
    ctx->pc = 0x2954b0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2954b4: 0x24844cc8  addiu       $a0, $a0, 0x4CC8
    ctx->pc = 0x2954b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19656));
    // 0x2954b8: 0x240200f3  addiu       $v0, $zero, 0xF3
    ctx->pc = 0x2954b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 243));
    // 0x2954bc: 0x30a3007f  andi        $v1, $a1, 0x7F
    ctx->pc = 0x2954bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)127);
    // 0x2954c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2954c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2954c4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x2954c4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2954c8: 0x34640013  ori         $a0, $v1, 0x13
    ctx->pc = 0x2954c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19);
    // 0x2954cc: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2954CCu;
    {
        const bool branch_taken_0x2954cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2954D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2954CCu;
        // 0x2954d0: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2954cc) {
            ctx->pc = 0x2954E8u;
            goto label_2954e8;
        }
    }
    ctx->pc = 0x2954D4u;
    // 0x2954d4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2954d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2954d8: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2954D8u;
    {
        const bool branch_taken_0x2954d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2954DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2954D8u;
        // 0x2954dc: 0x2402003d  addiu       $v0, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2954d8) {
            ctx->pc = 0x2954FCu;
            goto label_2954fc;
        }
    }
    ctx->pc = 0x2954E0u;
label_2954e0:
    // 0x2954e0: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x2954E0u;
    {
        const bool branch_taken_0x2954e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2954E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2954E0u;
        // 0x2954e4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2954e0) {
            ctx->pc = 0x2955ECu;
            goto label_2955ec;
        }
    }
    ctx->pc = 0x2954E8u;
label_2954e8:
    // 0x2954e8: 0x1501021  addu        $v0, $t2, $s0
    ctx->pc = 0x2954e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 16)));
    // 0x2954ec: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2954ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2954f0: 0xa0450000  sb          $a1, 0x0($v0)
    ctx->pc = 0x2954f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x2954f4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2954f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2954f8: 0x2402003d  addiu       $v0, $zero, 0x3D
    ctx->pc = 0x2954f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
label_2954fc:
    // 0x2954fc: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2954FCu;
    {
        const bool branch_taken_0x2954fc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x295500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2954FCu;
        // 0x295500: 0x240200f0  addiu       $v0, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2954fc) {
            ctx->pc = 0x295514u;
            goto label_295514;
        }
    }
    ctx->pc = 0x295504u;
    // 0x295504: 0x1e1027  nor         $v0, $zero, $fp
    ctx->pc = 0x295504u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 30)));
    // 0x295508: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x295508u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x29550c: 0x202f00a  movz        $fp, $s0, $v0
    ctx->pc = 0x29550cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 16));
    // 0x295510: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x295510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_295514:
    // 0x295514: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x295514u;
    {
        const bool branch_taken_0x295514 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x295518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295514u;
        // 0x295518: 0x24d10001  addiu       $s1, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295514) {
            ctx->pc = 0x295530u;
            goto label_295530;
        }
    }
    ctx->pc = 0x29551Cu;
    // 0x29551c: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x29551Cu;
    {
        const bool branch_taken_0x29551c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x295520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29551Cu;
        // 0x295520: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29551c) {
            ctx->pc = 0x295530u;
            goto label_295530;
        }
    }
    ctx->pc = 0x295524u;
    // 0x295524: 0x24d10001  addiu       $s1, $a2, 0x1
    ctx->pc = 0x295524u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x295528: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x295528u;
    {
        const bool branch_taken_0x295528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29552Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295528u;
        // 0x29552c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295528) {
            ctx->pc = 0x2955D8u;
            goto label_2955d8;
        }
    }
    ctx->pc = 0x295530u;
label_295530:
    // 0x295530: 0x16370007  bne         $s1, $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x295530u;
    {
        const bool branch_taken_0x295530 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 23));
        ctx->pc = 0x295534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295530u;
        // 0x295534: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295530) {
            ctx->pc = 0x295550u;
            goto label_295550;
        }
    }
    ctx->pc = 0x295538u;
    // 0x295538: 0x32020003  andi        $v0, $s0, 0x3
    ctx->pc = 0x295538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
    // 0x29553c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x29553Cu;
    {
        const bool branch_taken_0x29553c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29553c) {
            ctx->pc = 0x295540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29553Cu;
            // 0x295540: 0x240300f2  addiu       $v1, $zero, 0xF2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 242));
            ctx->in_delay_slot = false;
            ctx->pc = 0x295550u;
            goto label_295550;
        }
    }
    ctx->pc = 0x295544u;
    // 0x295544: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x295544u;
    {
        const bool branch_taken_0x295544 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x295548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295544u;
        // 0x295548: 0x240200f2  addiu       $v0, $zero, 0xF2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 242));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295544) {
            ctx->pc = 0x295554u;
            goto label_295554;
        }
    }
    ctx->pc = 0x29554Cu;
    // 0x29554c: 0x240300f2  addiu       $v1, $zero, 0xF2
    ctx->pc = 0x29554cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 242));
label_295550:
    // 0x295550: 0x240200f2  addiu       $v0, $zero, 0xF2
    ctx->pc = 0x295550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 242));
label_295554:
    // 0x295554: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x295554u;
    {
        const bool branch_taken_0x295554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x295558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295554u;
        // 0x295558: 0x2a020040  slti        $v0, $s0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)64) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x295554) {
            ctx->pc = 0x295568u;
            goto label_295568;
        }
    }
    ctx->pc = 0x29555Cu;
    // 0x29555c: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x29555Cu;
    {
        const bool branch_taken_0x29555c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x295560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29555Cu;
        // 0x295560: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29555c) {
            ctx->pc = 0x2955DCu;
            goto label_2955dc;
        }
    }
    ctx->pc = 0x295564u;
    // 0x295564: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x295564u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_295568:
    // 0x295568: 0x1a000010  blez        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x295568u;
    {
        const bool branch_taken_0x295568 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x29556Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295568u;
        // 0x29556c: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295568) {
            ctx->pc = 0x2955ACu;
            goto label_2955ac;
        }
    }
    ctx->pc = 0x295570u;
    // 0x295570: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x295570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295574: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x295574u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295578: 0x7fa70010  sq          $a3, 0x10($sp)
    ctx->pc = 0x295578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 7));
    // 0x29557c: 0x7fa90020  sq          $t1, 0x20($sp)
    ctx->pc = 0x29557cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 9));
    // 0x295580: 0xc0a558c  jal         func_295630
    ctx->pc = 0x295580u;
    SET_GPR_U32(ctx, 31, 0x295588u);
    ctx->pc = 0x295584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295580u;
    // 0x295584: 0x7faa0030  sq          $t2, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295630u, 0x295580u, 0x295588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295588u;
label_295588:
    // 0x295588: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x295588u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29558c: 0x7ba70010  lq          $a3, 0x10($sp)
    ctx->pc = 0x29558cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x295590: 0x7ba90020  lq          $t1, 0x20($sp)
    ctx->pc = 0x295590u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x295594: 0x460ffbe  bltz        $v1, . + 4 + (-0x42 << 2)
    ctx->pc = 0x295594u;
    {
        const bool branch_taken_0x295594 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x295598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295594u;
        // 0x295598: 0x7baa0030  lq          $t2, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295594) {
            ctx->pc = 0x295490u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_295490;
        }
    }
    ctx->pc = 0x29559Cu;
    // 0x29559c: 0x761023  subu        $v0, $v1, $s6
    ctx->pc = 0x29559cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x2955a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2955a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2955a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2955A4u;
    {
        const bool branch_taken_0x2955a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2955A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2955A4u;
        // 0x2955a8: 0xe23821  addu        $a3, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2955a4) {
            ctx->pc = 0x2955B4u;
            goto label_2955b4;
        }
    }
    ctx->pc = 0x2955ACu;
label_2955ac:
    // 0x2955ac: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x2955acu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2955b0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2955b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2955b4:
    // 0x2955b4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2955b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2955b8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2955b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2955bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2955BCu;
    {
        const bool branch_taken_0x2955bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2955bc) {
            ctx->pc = 0x2955CCu;
            goto label_2955cc;
        }
    }
    ctx->pc = 0x2955C4u;
    // 0x2955c4: 0x16c00009  bnez        $s6, . + 4 + (0x9 << 2)
    ctx->pc = 0x2955C4u;
    {
        const bool branch_taken_0x2955c4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x2955C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2955C4u;
        // 0x2955c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2955c4) {
            ctx->pc = 0x2955ECu;
            goto label_2955ec;
        }
    }
    ctx->pc = 0x2955CCu;
label_2955cc:
    // 0x2955cc: 0x7c1ffb0  bgez        $fp, . + 4 + (-0x50 << 2)
    ctx->pc = 0x2955CCu;
    {
        const bool branch_taken_0x2955cc = (GPR_S32(ctx, 30) >= 0);
        ctx->pc = 0x2955D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2955CCu;
        // 0x2955d0: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2955cc) {
            ctx->pc = 0x295490u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_295490;
        }
    }
    ctx->pc = 0x2955D4u;
    // 0x2955d4: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x2955d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_2955d8:
    // 0x2955d8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2955d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2955dc:
    // 0x2955dc: 0xd7102a  slt         $v0, $a2, $s7
    ctx->pc = 0x2955dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x2955e0: 0x1440ffb1  bnez        $v0, . + 4 + (-0x4F << 2)
    ctx->pc = 0x2955E0u;
    {
        const bool branch_taken_0x2955e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2955E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2955E0u;
        // 0x2955e4: 0x2a820050  slti        $v0, $s4, 0x50 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)80) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2955e0) {
            ctx->pc = 0x2954A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2954a8;
        }
    }
    ctx->pc = 0x2955E8u;
label_2955e8:
    // 0x2955e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2955e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2955ec:
    // 0x2955ec: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2955ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2955f0: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x2955f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2955f4: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x2955f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x2955f8: 0xae53005c  sw          $s3, 0x5C($s2)
    ctx->pc = 0x2955f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 19));
    // 0x2955fc: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x2955fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x295600: 0xae540058  sw          $s4, 0x58($s2)
    ctx->pc = 0x295600u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 20));
    // 0x295604: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x295604u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x295608: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x295608u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x29560c: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x29560cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x295610: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x295610u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x295614: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x295614u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x295618: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x295618u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29561c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x29561cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x295620: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x295620u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x295624: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x295624u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x295628: 0x3e00008  jr          $ra
    ctx->pc = 0x295628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29562Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295628u;
        // 0x29562c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295630u;
}
