#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FB3D0
// Address: 0x1fb3d0 - 0x1fb498
void sub_001FB3D0_0x1fb3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB3D0_0x1fb3d0");
#endif

    switch (ctx->pc) {
        case 0x1fb3f8u: goto label_1fb3f8;
        case 0x1fb400u: goto label_1fb400;
        case 0x1fb424u: goto label_1fb424;
        case 0x1fb450u: goto label_1fb450;
        default: break;
    }

    ctx->pc = 0x1fb3d0u;

    // 0x1fb3d0: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x1fb3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1fb3d4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1fb3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1fb3d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fb3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fb3dc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1fb3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1fb3e0: 0x8c421f90  lw          $v0, 0x1F90($v0)
    ctx->pc = 0x1fb3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8080)));
    // 0x1fb3e4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FB3E4u;
    {
        const bool branch_taken_0x1fb3e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb3e4) {
            ctx->pc = 0x1FB3E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB3E4u;
            // 0x1fb3e8: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FB3F8u;
            goto label_1fb3f8;
        }
    }
    ctx->pc = 0x1FB3ECu;
    // 0x1fb3ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB3ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB3ECu;
            // 0x1fb3f0: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FB3F4u;
    // 0x1fb3f4: 0x0  nop
    ctx->pc = 0x1fb3f4u;
    // NOP
label_1fb3f8:
    // 0x1fb3f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB3F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB3F8u;
            // 0x1fb3fc: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FB400u;
label_1fb400:
    // 0x1fb400: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fb400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fb404: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fb404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fb408: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fb408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb40c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fb40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fb410: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1fb410u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb414: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fb414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fb418: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1fb418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1fb41c: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1FB41Cu;
    SET_GPR_U32(ctx, 31, 0x1FB424u);
    ctx->pc = 0x1FB420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB41Cu;
            // 0x1fb420: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (runtime->hasFunction(0x1ED920u)) {
        auto targetFn = runtime->lookupFunction(0x1ED920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB424u; }
        if (ctx->pc != 0x1FB424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED920_0x1ed920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB424u; }
        if (ctx->pc != 0x1FB424u) { return; }
    }
    ctx->pc = 0x1FB424u;
label_1fb424:
    // 0x1fb424: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1fb424u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1fb428: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fb428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb42c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FB42Cu;
    {
        const bool branch_taken_0x1fb42c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB42Cu;
            // 0x1fb430: 0x34a5011c  ori         $a1, $a1, 0x11C (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)284);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb42c) {
            ctx->pc = 0x1FB450u;
            goto label_1fb450;
        }
    }
    ctx->pc = 0x1FB434u;
    // 0x1fb434: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fb434u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fb438: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fb438u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fb43c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fb43cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fb440: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1fb440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fb444: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1FB444u;
    ctx->pc = 0x1FB448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB444u;
            // 0x1fb448: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1FB44Cu;
    // 0x1fb44c: 0x0  nop
    ctx->pc = 0x1fb44cu;
    // NOP
label_1fb450:
    // 0x1fb450: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x1fb450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x1fb454: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FB454u;
    {
        const bool branch_taken_0x1fb454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB454u;
            // 0x1fb458: 0x2602010c  addiu       $v0, $s0, 0x10C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb454) {
            ctx->pc = 0x1FB470u;
            goto label_1fb470;
        }
    }
    ctx->pc = 0x1FB45Cu;
    // 0x1fb45c: 0x8e030108  lw          $v1, 0x108($s0)
    ctx->pc = 0x1fb45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1fb460: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1fb460u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1fb464: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FB464u;
    {
        const bool branch_taken_0x1fb464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB464u;
            // 0x1fb468: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb464) {
            ctx->pc = 0x1FB478u;
            goto label_1fb478;
        }
    }
    ctx->pc = 0x1FB46Cu;
    // 0x1fb46c: 0x0  nop
    ctx->pc = 0x1fb46cu;
    // NOP
label_1fb470:
    // 0x1fb470: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1fb470u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1fb474: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1fb474u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_1fb478:
    // 0x1fb478: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fb478u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fb47c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fb47cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb480: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fb480u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fb484: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fb484u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fb488: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1fb488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fb48c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB48Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB48Cu;
            // 0x1fb490: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FB494u;
    // 0x1fb494: 0x0  nop
    ctx->pc = 0x1fb494u;
    // NOP
    ctx->pc = 0x1fb498u;
}
