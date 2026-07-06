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

// Function: sub_0013C2A0
// Address: 0x13c2a0 - 0x13c3f0
void sub_0013C2A0_0x13c2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C2A0_0x13c2a0");
#endif

    switch (ctx->pc) {
        case 0x13c380u: goto label_13c380;
        case 0x13c390u: goto label_13c390;
        case 0x13c3c4u: goto label_13c3c4;
        default: break;
    }

    ctx->pc = 0x13c2a0u;

    // 0x13c2a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13c2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13c2a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13c2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13c2a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13c2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13c2ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13c2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13c2b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13c2b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c2b4: 0x84820246  lh          $v0, 0x246($a0)
    ctx->pc = 0x13c2b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 582)));
    // 0x13c2b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x13c2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13c2bc: 0xa4820246  sh          $v0, 0x246($a0)
    ctx->pc = 0x13c2bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 582), (uint16_t)GPR_U32(ctx, 2));
    // 0x13c2c0: 0x90a30204  lbu         $v1, 0x204($a1)
    ctx->pc = 0x13c2c0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 516)));
    // 0x13c2c4: 0x28620078  slti        $v0, $v1, 0x78
    ctx->pc = 0x13c2c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)120) ? 1 : 0);
    // 0x13c2c8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13C2C8u;
    {
        const bool branch_taken_0x13c2c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13C2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C2C8u;
        // 0x13c2cc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c2c8) {
            ctx->pc = 0x13C2DCu;
            goto label_13c2dc;
        }
    }
    ctx->pc = 0x13C2D0u;
    // 0x13c2d0: 0x28610080  slti        $at, $v1, 0x80
    ctx->pc = 0x13c2d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x13c2d4: 0x54200011  bnel        $at, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x13C2D4u;
    {
        const bool branch_taken_0x13c2d4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c2d4) {
            ctx->pc = 0x13C2D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C2D4u;
            // 0x13c2d8: 0x8e22023c  lw          $v0, 0x23C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 572)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C31Cu;
            goto label_13c31c;
        }
    }
    ctx->pc = 0x13C2DCu;
label_13c2dc:
    // 0x13c2dc: 0x2862008c  slti        $v0, $v1, 0x8C
    ctx->pc = 0x13c2dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)140) ? 1 : 0);
    // 0x13c2e0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x13C2E0u;
    {
        const bool branch_taken_0x13c2e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c2e0) {
            ctx->pc = 0x13C2E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C2E0u;
            // 0x13c2e4: 0x286200d8  slti        $v0, $v1, 0xD8 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)216) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C2F8u;
            goto label_13c2f8;
        }
    }
    ctx->pc = 0x13C2E8u;
    // 0x13c2e8: 0x28610099  slti        $at, $v1, 0x99
    ctx->pc = 0x13c2e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)153) ? 1 : 0);
    // 0x13c2ec: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x13C2ECu;
    {
        const bool branch_taken_0x13c2ec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c2ec) {
            ctx->pc = 0x13C318u;
            goto label_13c318;
        }
    }
    ctx->pc = 0x13C2F4u;
    // 0x13c2f4: 0x286200d8  slti        $v0, $v1, 0xD8
    ctx->pc = 0x13c2f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)216) ? 1 : 0);
label_13c2f8:
    // 0x13c2f8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x13C2F8u;
    {
        const bool branch_taken_0x13c2f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c2f8) {
            ctx->pc = 0x13C2FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C2F8u;
            // 0x13c2fc: 0x240200bf  addiu       $v0, $zero, 0xBF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C310u;
            goto label_13c310;
        }
    }
    ctx->pc = 0x13C300u;
    // 0x13c300: 0x286100de  slti        $at, $v1, 0xDE
    ctx->pc = 0x13c300u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)222) ? 1 : 0);
    // 0x13c304: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x13C304u;
    {
        const bool branch_taken_0x13c304 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c304) {
            ctx->pc = 0x13C318u;
            goto label_13c318;
        }
    }
    ctx->pc = 0x13C30Cu;
    // 0x13c30c: 0x240200bf  addiu       $v0, $zero, 0xBF
    ctx->pc = 0x13c30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
label_13c310:
    // 0x13c310: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13C310u;
    {
        const bool branch_taken_0x13c310 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13c310) {
            ctx->pc = 0x13C314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C310u;
            // 0x13c314: 0x8e23023c  lw          $v1, 0x23C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 572)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C328u;
            goto label_13c328;
        }
    }
    ctx->pc = 0x13C318u;
label_13c318:
    // 0x13c318: 0x8e22023c  lw          $v0, 0x23C($s1)
    ctx->pc = 0x13c318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 572)));
label_13c31c:
    // 0x13c31c: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x13c31cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x13c320: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13C320u;
    {
        const bool branch_taken_0x13c320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C320u;
        // 0x13c324: 0xae22023c  sw          $v0, 0x23C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c320) {
            ctx->pc = 0x13C334u;
            goto label_13c334;
        }
    }
    ctx->pc = 0x13C328u;
label_13c328:
    // 0x13c328: 0x2402f7ff  addiu       $v0, $zero, -0x801
    ctx->pc = 0x13c328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x13c32c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13c32cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13c330: 0xae22023c  sw          $v0, 0x23C($s1)
    ctx->pc = 0x13c330u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 2));
label_13c334:
    // 0x13c334: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x13c334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x13c338: 0xac505ca8  sw          $s0, 0x5CA8($v0)
    ctx->pc = 0x13c338u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 23720), GPR_U32(ctx, 16));
    // 0x13c33c: 0x8e23023c  lw          $v1, 0x23C($s1)
    ctx->pc = 0x13c33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 572)));
    // 0x13c340: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x13c340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x13c344: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x13C344u;
    {
        const bool branch_taken_0x13c344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c344) {
            ctx->pc = 0x13C348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C344u;
            // 0x13c348: 0x8e23023c  lw          $v1, 0x23C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 572)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C394u;
            goto label_13c394;
        }
    }
    ctx->pc = 0x13C34Cu;
    // 0x13c34c: 0x86220246  lh          $v0, 0x246($s1)
    ctx->pc = 0x13c34cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 582)));
    // 0x13c350: 0x5c400005  bgtzl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13C350u;
    {
        const bool branch_taken_0x13c350 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x13c350) {
            ctx->pc = 0x13C354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C350u;
            // 0x13c354: 0x8e23023c  lw          $v1, 0x23C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 572)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C368u;
            goto label_13c368;
        }
    }
    ctx->pc = 0x13C358u;
    // 0x13c358: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x13c358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x13c35c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13c35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13c360: 0xae22023c  sw          $v0, 0x23C($s1)
    ctx->pc = 0x13c360u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 2));
    // 0x13c364: 0x8e23023c  lw          $v1, 0x23C($s1)
    ctx->pc = 0x13c364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 572)));
label_13c368:
    // 0x13c368: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x13c368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x13c36c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13C36Cu;
    {
        const bool branch_taken_0x13c36c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c36c) {
            ctx->pc = 0x13C390u;
            goto label_13c390;
        }
    }
    ctx->pc = 0x13C374u;
    // 0x13c374: 0x34620010  ori         $v0, $v1, 0x10
    ctx->pc = 0x13c374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x13c378: 0xc04f93c  jal         func_13E4F0
    ctx->pc = 0x13C378u;
    SET_GPR_U32(ctx, 31, 0x13C380u);
    ctx->pc = 0x13C37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C378u;
    // 0x13c37c: 0xae22023c  sw          $v0, 0x23C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E4F0u, 0x13C378u, 0x13C380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C380u;
label_13c380:
    // 0x13c380: 0xa6220246  sh          $v0, 0x246($s1)
    ctx->pc = 0x13c380u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 582), (uint16_t)GPR_U32(ctx, 2));
    // 0x13c384: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13c384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c388: 0xc04f260  jal         func_13C980
    ctx->pc = 0x13C388u;
    SET_GPR_U32(ctx, 31, 0x13C390u);
    ctx->pc = 0x13C38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C388u;
    // 0x13c38c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C980u, 0x13C388u, 0x13C390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C390u;
label_13c390:
    // 0x13c390: 0x8e23023c  lw          $v1, 0x23C($s1)
    ctx->pc = 0x13c390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 572)));
label_13c394:
    // 0x13c394: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x13c394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x13c398: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x13C398u;
    {
        const bool branch_taken_0x13c398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c398) {
            ctx->pc = 0x13C39Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C398u;
            // 0x13c39c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C3D8u;
            goto label_13c3d8;
        }
    }
    ctx->pc = 0x13C3A0u;
    // 0x13c3a0: 0x86220246  lh          $v0, 0x246($s1)
    ctx->pc = 0x13c3a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 582)));
    // 0x13c3a4: 0x5c400005  bgtzl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13C3A4u;
    {
        const bool branch_taken_0x13c3a4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x13c3a4) {
            ctx->pc = 0x13C3A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C3A4u;
            // 0x13c3a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C3BCu;
            goto label_13c3bc;
        }
    }
    ctx->pc = 0x13C3ACu;
    // 0x13c3ac: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x13c3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x13c3b0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13c3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13c3b4: 0xae22023c  sw          $v0, 0x23C($s1)
    ctx->pc = 0x13c3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 2));
    // 0x13c3b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13c3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13c3bc:
    // 0x13c3bc: 0xc04f454  jal         func_13D150
    ctx->pc = 0x13C3BCu;
    SET_GPR_U32(ctx, 31, 0x13C3C4u);
    ctx->pc = 0x13C3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C3BCu;
    // 0x13c3c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D150u, 0x13C3BCu, 0x13C3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C3C4u;
label_13c3c4:
    // 0x13c3c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C3C4u;
    {
        const bool branch_taken_0x13c3c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c3c4) {
            ctx->pc = 0x13C3D4u;
            goto label_13c3d4;
        }
    }
    ctx->pc = 0x13C3CCu;
    // 0x13c3cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13C3CCu;
    {
        const bool branch_taken_0x13c3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C3CCu;
        // 0x13c3d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c3cc) {
            ctx->pc = 0x13C3D8u;
            goto label_13c3d8;
        }
    }
    ctx->pc = 0x13C3D4u;
label_13c3d4:
    // 0x13c3d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13c3d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13c3d8:
    // 0x13c3d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13c3d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13c3dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13c3dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c3e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13c3e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c3e4: 0x3e00008  jr          $ra
    ctx->pc = 0x13C3E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C3E4u;
        // 0x13c3e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C3E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C3ECu;
    // 0x13c3ec: 0x0  nop
    ctx->pc = 0x13c3ecu;
    // NOP
    if (ctx->pc == 0x13c3ecu) { ctx->pc = 0x13c3f0u; }
}
