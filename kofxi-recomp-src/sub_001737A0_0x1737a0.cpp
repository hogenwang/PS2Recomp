#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001737A0
// Address: 0x1737a0 - 0x173890
void sub_001737A0_0x1737a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001737A0_0x1737a0");
#endif

    ctx->pc = 0x1737a0u;

    // 0x1737a0: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x1737a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1737a4: 0x821824  and         $v1, $a0, $v0
    ctx->pc = 0x1737a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1737a8: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x1737a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x1737ac: 0x50620034  beql        $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1737ACu;
    {
        const bool branch_taken_0x1737ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1737ac) {
            ctx->pc = 0x1737B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1737ACu;
            // 0x1737b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x173880u;
            goto label_173880;
        }
    }
    ctx->pc = 0x1737B4u;
    // 0x1737b4: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1737b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1737b8: 0x10620030  beq         $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1737B8u;
    {
        const bool branch_taken_0x1737b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1737b8) {
            ctx->pc = 0x17387Cu;
            goto label_17387c;
        }
    }
    ctx->pc = 0x1737C0u;
    // 0x1737c0: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1737c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1737c4: 0x1062002d  beq         $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1737C4u;
    {
        const bool branch_taken_0x1737c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1737c4) {
            ctx->pc = 0x17387Cu;
            goto label_17387c;
        }
    }
    ctx->pc = 0x1737CCu;
    // 0x1737cc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1737ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1737d0: 0x1062002a  beq         $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1737D0u;
    {
        const bool branch_taken_0x1737d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1737d0) {
            ctx->pc = 0x17387Cu;
            goto label_17387c;
        }
    }
    ctx->pc = 0x1737D8u;
    // 0x1737d8: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1737d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1737dc: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1737DCu;
    {
        const bool branch_taken_0x1737dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1737dc) {
            ctx->pc = 0x17387Cu;
            goto label_17387c;
        }
    }
    ctx->pc = 0x1737E4u;
    // 0x1737e4: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1737e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1737e8: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1737E8u;
    {
        const bool branch_taken_0x1737e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1737e8) {
            ctx->pc = 0x17387Cu;
            goto label_17387c;
        }
    }
    ctx->pc = 0x1737F0u;
    // 0x1737f0: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x1737f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x1737f4: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1737F4u;
    {
        const bool branch_taken_0x1737f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1737f4) {
            ctx->pc = 0x17387Cu;
            goto label_17387c;
        }
    }
    ctx->pc = 0x1737FCu;
    // 0x1737fc: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x1737fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x173800: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x173800u;
    {
        const bool branch_taken_0x173800 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x173800) {
            ctx->pc = 0x17387Cu;
            goto label_17387c;
        }
    }
    ctx->pc = 0x173808u;
    // 0x173808: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x173808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x17380c: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x17380Cu;
    {
        const bool branch_taken_0x17380c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17380c) {
            ctx->pc = 0x17387Cu;
            goto label_17387c;
        }
    }
    ctx->pc = 0x173814u;
    // 0x173814: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x173814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x173818: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x173818u;
    {
        const bool branch_taken_0x173818 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x173818) {
            ctx->pc = 0x17387Cu;
            goto label_17387c;
        }
    }
    ctx->pc = 0x173820u;
    // 0x173820: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x173820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x173824: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x173824u;
    {
        const bool branch_taken_0x173824 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x173824) {
            ctx->pc = 0x17387Cu;
            goto label_17387c;
        }
    }
    ctx->pc = 0x17382Cu;
    // 0x17382c: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x17382cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x173830: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x173830u;
    {
        const bool branch_taken_0x173830 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x173830) {
            ctx->pc = 0x17387Cu;
            goto label_17387c;
        }
    }
    ctx->pc = 0x173838u;
    // 0x173838: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x173838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x17383c: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x17383Cu;
    {
        const bool branch_taken_0x17383c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17383c) {
            ctx->pc = 0x17387Cu;
            goto label_17387c;
        }
    }
    ctx->pc = 0x173844u;
    // 0x173844: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x173844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x173848: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x173848u;
    {
        const bool branch_taken_0x173848 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x173848) {
            ctx->pc = 0x17387Cu;
            goto label_17387c;
        }
    }
    ctx->pc = 0x173850u;
    // 0x173850: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x173850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x173854: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x173854u;
    {
        const bool branch_taken_0x173854 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x173854) {
            ctx->pc = 0x17387Cu;
            goto label_17387c;
        }
    }
    ctx->pc = 0x17385Cu;
    // 0x17385c: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x17385cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x173860: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x173860u;
    {
        const bool branch_taken_0x173860 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x173860) {
            ctx->pc = 0x17387Cu;
            goto label_17387c;
        }
    }
    ctx->pc = 0x173868u;
    // 0x173868: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x173868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x17386c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17386Cu;
    {
        const bool branch_taken_0x17386c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17386c) {
            ctx->pc = 0x17387Cu;
            goto label_17387c;
        }
    }
    ctx->pc = 0x173874u;
    // 0x173874: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x173874u;
    {
        const bool branch_taken_0x173874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173874u;
            // 0x173878: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173874) {
            ctx->pc = 0x173880u;
            goto label_173880;
        }
    }
    ctx->pc = 0x17387Cu;
label_17387c:
    // 0x17387c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17387cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173880:
    // 0x173880: 0x3e00008  jr          $ra
    ctx->pc = 0x173880u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x173888u;
    // 0x173888: 0x0  nop
    ctx->pc = 0x173888u;
    // NOP
    // 0x17388c: 0x0  nop
    ctx->pc = 0x17388cu;
    // NOP
    ctx->pc = 0x173890u;
}
