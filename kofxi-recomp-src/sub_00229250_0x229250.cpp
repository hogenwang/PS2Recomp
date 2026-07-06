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

// Function: sub_00229250
// Address: 0x229250 - 0x2294d0
void sub_00229250_0x229250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229250_0x229250");
#endif

    switch (ctx->pc) {
        case 0x229280u: goto label_229280;
        case 0x229350u: goto label_229350;
        case 0x229450u: goto label_229450;
        case 0x229460u: goto label_229460;
        case 0x229490u: goto label_229490;
        case 0x2294a8u: goto label_2294a8;
        case 0x2294b0u: goto label_2294b0;
        default: break;
    }

    ctx->pc = 0x229250u;

    // 0x229250: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x229250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x229254: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x229254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x229258: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x229258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x22925c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22925cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x229260: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x229260u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229264: 0x8c43a768  lw          $v1, -0x5898($v0)
    ctx->pc = 0x229264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944616)));
    // 0x229268: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x229268u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22926c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x22926cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x229270: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x229270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x229274: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x229274u;
    {
        const bool branch_taken_0x229274 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x229278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229274u;
        // 0x229278: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229274) {
            ctx->pc = 0x22929Cu;
            goto label_22929c;
        }
    }
    ctx->pc = 0x22927Cu;
    // 0x22927c: 0x0  nop
    ctx->pc = 0x22927cu;
    // NOP
label_229280:
    // 0x229280: 0x0  nop
    ctx->pc = 0x229280u;
    // NOP
    // 0x229284: 0x0  nop
    ctx->pc = 0x229284u;
    // NOP
    // 0x229288: 0x0  nop
    ctx->pc = 0x229288u;
    // NOP
    // 0x22928c: 0x0  nop
    ctx->pc = 0x22928cu;
    // NOP
    // 0x229290: 0x0  nop
    ctx->pc = 0x229290u;
    // NOP
    // 0x229294: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x229294u;
    {
        const bool branch_taken_0x229294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x229294) {
            ctx->pc = 0x229280u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_229280;
        }
    }
    ctx->pc = 0x22929Cu;
label_22929c:
    // 0x22929c: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x22929cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x2292a0: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x2292a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x2292a4: 0x8c45a73c  lw          $a1, -0x58C4($v0)
    ctx->pc = 0x2292a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944572)));
    // 0x2292a8: 0x3c0601c1  lui         $a2, 0x1C1
    ctx->pc = 0x2292a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)449 << 16));
    // 0x2292ac: 0x8c83a728  lw          $v1, -0x58D8($a0)
    ctx->pc = 0x2292acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294944552)));
    // 0x2292b0: 0x2654021  addu        $t0, $s3, $a1
    ctx->pc = 0x2292b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x2292b4: 0x8cc4a740  lw          $a0, -0x58C0($a2)
    ctx->pc = 0x2292b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294944576)));
    // 0x2292b8: 0x681006  srlv        $v0, $t0, $v1
    ctx->pc = 0x2292b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 3) & 0x1F));
    // 0x2292bc: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2292bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2292c0: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x2292c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2292c4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2292C4u;
    {
        const bool branch_taken_0x2292c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2292C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2292C4u;
        // 0x2292c8: 0x3c0301c1  lui         $v1, 0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2292c4) {
            ctx->pc = 0x2292D8u;
            goto label_2292d8;
        }
    }
    ctx->pc = 0x2292CCu;
    // 0x2292cc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2292ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2292d0: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x2292D0u;
    {
        const bool branch_taken_0x2292d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2292D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2292D0u;
        // 0x2292d4: 0x24844368  addiu       $a0, $a0, 0x4368 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2292d0) {
            ctx->pc = 0x229448u;
            goto label_229448;
        }
    }
    ctx->pc = 0x2292D8u;
label_2292d8:
    // 0x2292d8: 0x8c62a744  lw          $v0, -0x58BC($v1)
    ctx->pc = 0x2292d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944580)));
    // 0x2292dc: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2292dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2292e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2292E0u;
    {
        const bool branch_taken_0x2292e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2292E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2292E0u;
        // 0x2292e4: 0x3c0201c1  lui         $v0, 0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2292e0) {
            ctx->pc = 0x2292F4u;
            goto label_2292f4;
        }
    }
    ctx->pc = 0x2292E8u;
    // 0x2292e8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2292e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2292ec: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x2292ECu;
    {
        const bool branch_taken_0x2292ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2292F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2292ECu;
        // 0x2292f0: 0x24844390  addiu       $a0, $a0, 0x4390 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2292ec) {
            ctx->pc = 0x229448u;
            goto label_229448;
        }
    }
    ctx->pc = 0x2292F4u;
label_2292f4:
    // 0x2292f4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2292f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2292f8: 0x8c43a748  lw          $v1, -0x58B8($v0)
    ctx->pc = 0x2292f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944584)));
    // 0x2292fc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2292fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x229300: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x229300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x229304: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x229304u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x229308: 0x14e50026  bne         $a3, $a1, . + 4 + (0x26 << 2)
    ctx->pc = 0x229308u;
    {
        const bool branch_taken_0x229308 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 5));
        ctx->pc = 0x22930Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229308u;
        // 0x22930c: 0x2ce20004  sltiu       $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x229308) {
            ctx->pc = 0x2293A4u;
            goto label_2293a4;
        }
    }
    ctx->pc = 0x229310u;
    // 0x229310: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x229310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x229314: 0x8c62a72c  lw          $v0, -0x58D4($v1)
    ctx->pc = 0x229314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944556)));
    // 0x229318: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x229318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x22931c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22931Cu;
    {
        const bool branch_taken_0x22931c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22931Cu;
        // 0x229320: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22931c) {
            ctx->pc = 0x22932Cu;
            goto label_22932c;
        }
    }
    ctx->pc = 0x229324u;
    // 0x229324: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x229324u;
    {
        const bool branch_taken_0x229324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229324u;
        // 0x229328: 0x248443b8  addiu       $a0, $a0, 0x43B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229324) {
            ctx->pc = 0x229448u;
            goto label_229448;
        }
    }
    ctx->pc = 0x22932Cu;
label_22932c:
    // 0x22932c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x22932cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x229330: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x229330u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x229334: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x229334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x229338: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x229338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22933c: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x22933Cu;
    {
        const bool branch_taken_0x22933c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x229340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22933Cu;
        // 0x229340: 0x8cb0a724  lw          $s0, -0x58DC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294944548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22933c) {
            ctx->pc = 0x229374u;
            goto label_229374;
        }
    }
    ctx->pc = 0x229344u;
    // 0x229344: 0x3c0701c1  lui         $a3, 0x1C1
    ctx->pc = 0x229344u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)449 << 16));
    // 0x229348: 0x8ca4a724  lw          $a0, -0x58DC($a1)
    ctx->pc = 0x229348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294944548)));
    // 0x22934c: 0x0  nop
    ctx->pc = 0x22934cu;
    // NOP
label_229350:
    // 0x229350: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x229350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x229354: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x229354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x229358: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x229358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22935c: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x22935cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x229360: 0x0  nop
    ctx->pc = 0x229360u;
    // NOP
    // 0x229364: 0x1062fffa  beq         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x229364u;
    {
        const bool branch_taken_0x229364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x229364) {
            ctx->pc = 0x229350u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_229350;
        }
    }
    ctx->pc = 0x22936Cu;
    // 0x22936c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x22936Cu;
    {
        const bool branch_taken_0x22936c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22936Cu;
        // 0x229370: 0x8ce2a76c  lw          $v0, -0x5894($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294944620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22936c) {
            ctx->pc = 0x22937Cu;
            goto label_22937c;
        }
    }
    ctx->pc = 0x229374u;
label_229374:
    // 0x229374: 0x3c0701c1  lui         $a3, 0x1C1
    ctx->pc = 0x229374u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)449 << 16));
    // 0x229378: 0x8ce2a76c  lw          $v0, -0x5894($a3)
    ctx->pc = 0x229378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294944620)));
label_22937c:
    // 0x22937c: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x22937Cu;
    {
        const bool branch_taken_0x22937c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x229380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22937Cu;
        // 0x229380: 0x212102b  sltu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22937c) {
            ctx->pc = 0x229458u;
            goto label_229458;
        }
    }
    ctx->pc = 0x229384u;
    // 0x229384: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x229384u;
    {
        const bool branch_taken_0x229384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x229388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229384u;
        // 0x229388: 0x8ca2a724  lw          $v0, -0x58DC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294944548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229384) {
            ctx->pc = 0x229458u;
            goto label_229458;
        }
    }
    ctx->pc = 0x22938Cu;
    // 0x22938c: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x22938cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x229390: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x229390u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x229394: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x229394u;
    {
        const bool branch_taken_0x229394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229394u;
        // 0x229398: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229394) {
            ctx->pc = 0x229458u;
            goto label_229458;
        }
    }
    ctx->pc = 0x22939Cu;
    // 0x22939c: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x22939Cu;
    {
        const bool branch_taken_0x22939c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22939c) {
            ctx->pc = 0x2294B4u;
            goto label_2294b4;
        }
    }
    ctx->pc = 0x2293A4u;
label_2293a4:
    // 0x2293a4: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2293A4u;
    {
        const bool branch_taken_0x2293a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2293A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2293A4u;
        // 0x2293a8: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2293a4) {
            ctx->pc = 0x229444u;
            goto label_229444;
        }
    }
    ctx->pc = 0x2293ACu;
    // 0x2293ac: 0x94e60008  lhu         $a2, 0x8($a3)
    ctx->pc = 0x2293acu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2293b0: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x2293b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2293b4: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x2293b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x2293b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2293B8u;
    {
        const bool branch_taken_0x2293b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2293BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2293B8u;
        // 0x2293bc: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2293b8) {
            ctx->pc = 0x2293C8u;
            goto label_2293c8;
        }
    }
    ctx->pc = 0x2293C0u;
    // 0x2293c0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2293C0u;
    {
        const bool branch_taken_0x2293c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2293C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2293C0u;
        // 0x2293c4: 0x248443d8  addiu       $a0, $a0, 0x43D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2293c0) {
            ctx->pc = 0x229448u;
            goto label_229448;
        }
    }
    ctx->pc = 0x2293C8u;
label_2293c8:
    // 0x2293c8: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x2293c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x2293cc: 0x94e5000a  lhu         $a1, 0xA($a3)
    ctx->pc = 0x2293ccu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x2293d0: 0x8c43a72c  lw          $v1, -0x58D4($v0)
    ctx->pc = 0x2293d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944556)));
    // 0x2293d4: 0x1031824  and         $v1, $t0, $v1
    ctx->pc = 0x2293d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x2293d8: 0xa31806  srlv        $v1, $v1, $a1
    ctx->pc = 0x2293d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x2293dc: 0x32142  srl         $a0, $v1, 5
    ctx->pc = 0x2293dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x2293e0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2293e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2293e4: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x2293e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x2293e8: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x2293e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x2293ec: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2293ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2293f0: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x2293f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x2293f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2293f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2293f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2293F8u;
    {
        const bool branch_taken_0x2293f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2293FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2293F8u;
        // 0x2293fc: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2293f8) {
            ctx->pc = 0x229408u;
            goto label_229408;
        }
    }
    ctx->pc = 0x229400u;
    // 0x229400: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x229400u;
    {
        const bool branch_taken_0x229400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229400u;
        // 0x229404: 0x248443f8  addiu       $a0, $a0, 0x43F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229400) {
            ctx->pc = 0x229448u;
            goto label_229448;
        }
    }
    ctx->pc = 0x229408u;
label_229408:
    // 0x229408: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x229408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x22940c: 0x8c62a76c  lw          $v0, -0x5894($v1)
    ctx->pc = 0x22940cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944620)));
    // 0x229410: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x229410u;
    {
        const bool branch_taken_0x229410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x229414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229410u;
        // 0x229414: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229410) {
            ctx->pc = 0x229458u;
            goto label_229458;
        }
    }
    ctx->pc = 0x229418u;
    // 0x229418: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x229418u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x22941c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x22941Cu;
    {
        const bool branch_taken_0x22941c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22941Cu;
        // 0x229420: 0x101042  srl         $v0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22941c) {
            ctx->pc = 0x229458u;
            goto label_229458;
        }
    }
    ctx->pc = 0x229424u;
    // 0x229424: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x229424u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x229428: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x229428u;
    {
        const bool branch_taken_0x229428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22942Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229428u;
        // 0x22942c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229428) {
            ctx->pc = 0x2294B4u;
            goto label_2294b4;
        }
    }
    ctx->pc = 0x229430u;
    // 0x229430: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x229430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x229434: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x229434u;
    {
        const bool branch_taken_0x229434 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x229438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229434u;
        // 0x229438: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229434) {
            ctx->pc = 0x229458u;
            goto label_229458;
        }
    }
    ctx->pc = 0x22943Cu;
    // 0x22943c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x22943Cu;
    {
        const bool branch_taken_0x22943c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22943Cu;
        // 0x229440: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22943c) {
            ctx->pc = 0x2294B8u;
            goto label_2294b8;
        }
    }
    ctx->pc = 0x229444u;
label_229444:
    // 0x229444: 0x24844410  addiu       $a0, $a0, 0x4410
    ctx->pc = 0x229444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17424));
label_229448:
    // 0x229448: 0xc08a2b4  jal         func_228AD0
    ctx->pc = 0x229448u;
    SET_GPR_U32(ctx, 31, 0x229450u);
    ctx->pc = 0x228AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228AD0u, 0x229448u, 0x229450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229450u;
label_229450:
    // 0x229450: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x229450u;
    {
        const bool branch_taken_0x229450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229450u;
        // 0x229454: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229450) {
            ctx->pc = 0x2294B4u;
            goto label_2294b4;
        }
    }
    ctx->pc = 0x229458u;
label_229458:
    // 0x229458: 0xc08a45c  jal         func_229170
    ctx->pc = 0x229458u;
    SET_GPR_U32(ctx, 31, 0x229460u);
    ctx->pc = 0x22945Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229458u;
    // 0x22945c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229170u, 0x229458u, 0x229460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229460u;
label_229460:
    // 0x229460: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x229460u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229464: 0x52200013  beql        $s1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x229464u;
    {
        const bool branch_taken_0x229464 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x229464) {
            ctx->pc = 0x229468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229464u;
            // 0x229468: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2294B4u;
            goto label_2294b4;
        }
    }
    ctx->pc = 0x22946Cu;
    // 0x22946c: 0x1240000e  beqz        $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x22946Cu;
    {
        const bool branch_taken_0x22946c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x22946c) {
            ctx->pc = 0x2294A8u;
            goto label_2294a8;
        }
    }
    ctx->pc = 0x229474u;
    // 0x229474: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x229474u;
    {
        const bool branch_taken_0x229474 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x229478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229474u;
        // 0x229478: 0x212102b  sltu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x229474) {
            ctx->pc = 0x2294A8u;
            goto label_2294a8;
        }
    }
    ctx->pc = 0x22947Cu;
    // 0x22947c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22947Cu;
    {
        const bool branch_taken_0x22947c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22947Cu;
        // 0x229480: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22947c) {
            ctx->pc = 0x229498u;
            goto label_229498;
        }
    }
    ctx->pc = 0x229484u;
    // 0x229484: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x229484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229488: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x229488u;
    SET_GPR_U32(ctx, 31, 0x229490u);
    ctx->pc = 0x22948Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229488u;
    // 0x22948c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x229488u, 0x229490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229490u;
label_229490:
    // 0x229490: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x229490u;
    {
        const bool branch_taken_0x229490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x229490) {
            ctx->pc = 0x2294A8u;
            goto label_2294a8;
        }
    }
    ctx->pc = 0x229498u;
label_229498:
    // 0x229498: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x229498u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22949c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22949cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2294a0: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x2294A0u;
    SET_GPR_U32(ctx, 31, 0x2294A8u);
    ctx->pc = 0x2294A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2294A0u;
    // 0x2294a4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x2294A0u, 0x2294A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2294A8u;
label_2294a8:
    // 0x2294a8: 0xc08a534  jal         func_2294D0
    ctx->pc = 0x2294A8u;
    SET_GPR_U32(ctx, 31, 0x2294B0u);
    ctx->pc = 0x2294ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2294A8u;
    // 0x2294ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2294D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2294D0u, 0x2294A8u, 0x2294B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2294B0u;
label_2294b0:
    // 0x2294b0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2294b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2294b4:
    // 0x2294b4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2294b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2294b8:
    // 0x2294b8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2294b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2294bc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2294bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2294c0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2294c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2294c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2294c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2294c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2294C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2294CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2294C8u;
        // 0x2294cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2294C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2294D0u;
}
