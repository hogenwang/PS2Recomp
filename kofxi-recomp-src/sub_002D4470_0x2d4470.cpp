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

// Function: sub_002D4470
// Address: 0x2d4470 - 0x2d45e8
void sub_002D4470_0x2d4470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4470_0x2d4470");
#endif

    switch (ctx->pc) {
        case 0x2d44c8u: goto label_2d44c8;
        case 0x2d4524u: goto label_2d4524;
        case 0x2d4590u: goto label_2d4590;
        default: break;
    }

    ctx->pc = 0x2d4470u;

    // 0x2d4470: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d4470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d4474: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d4474u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4478: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d4478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d447c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d447cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4480: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d4480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d4484: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2d4484u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4488: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d4488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d448c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d448cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2d4490: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2d4490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2d4494: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2d4494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2d4498: 0x1a400049  blez        $s2, . + 4 + (0x49 << 2)
    ctx->pc = 0x2D4498u;
    {
        const bool branch_taken_0x2d4498 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x2D449Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4498u;
        // 0x2d449c: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4498) {
            ctx->pc = 0x2D45C0u;
            goto label_2d45c0;
        }
    }
    ctx->pc = 0x2D44A0u;
    // 0x2d44a0: 0x2a420040  slti        $v0, $s2, 0x40
    ctx->pc = 0x2d44a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x2d44a4: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2D44A4u;
    {
        const bool branch_taken_0x2d44a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d44a4) {
            ctx->pc = 0x2D44A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D44A4u;
            // 0x2d44a8: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D44E4u;
            goto label_2d44e4;
        }
    }
    ctx->pc = 0x2D44ACu;
    // 0x2d44ac: 0x2644003f  addiu       $a0, $s2, 0x3F
    ctx->pc = 0x2d44acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 63));
    // 0x2d44b0: 0x2a430000  slti        $v1, $s2, 0x0
    ctx->pc = 0x2d44b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2d44b4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2d44b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d44b8: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x2d44b8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x2d44bc: 0x28183  sra         $s0, $v0, 6
    ctx->pc = 0x2d44bcu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2d44c0: 0xc0b50ac  jal         func_2D42B0
    ctx->pc = 0x2D44C0u;
    SET_GPR_U32(ctx, 31, 0x2D44C8u);
    ctx->pc = 0x2D44C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D44C0u;
    // 0x2d44c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D42B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D42B0u, 0x2D44C0u, 0x2D44C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D44C8u;
label_2d44c8:
    // 0x2d44c8: 0x5440003e  bnel        $v0, $zero, . + 4 + (0x3E << 2)
    ctx->pc = 0x2D44C8u;
    {
        const bool branch_taken_0x2d44c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d44c8) {
            ctx->pc = 0x2D44CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D44C8u;
            // 0x2d44cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D45C4u;
            goto label_2d45c4;
        }
    }
    ctx->pc = 0x2D44D0u;
    // 0x2d44d0: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x2d44d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x2d44d4: 0x2439023  subu        $s2, $s2, $v1
    ctx->pc = 0x2d44d4u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2d44d8: 0x1240003a  beqz        $s2, . + 4 + (0x3A << 2)
    ctx->pc = 0x2D44D8u;
    {
        const bool branch_taken_0x2d44d8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D44DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D44D8u;
        // 0x2d44dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d44d8) {
            ctx->pc = 0x2D45C4u;
            goto label_2d45c4;
        }
    }
    ctx->pc = 0x2D44E0u;
    // 0x2d44e0: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x2d44e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2d44e4:
    // 0x2d44e4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x2d44e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2d44e8: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x2d44e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2d44ec: 0x52a823  subu        $s5, $v0, $s2
    ctx->pc = 0x2d44ecu;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2d44f0: 0x10a0c0  sll         $s4, $s0, 3
    ctx->pc = 0x2d44f0u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2d44f4: 0xb41021  addu        $v0, $a1, $s4
    ctx->pc = 0x2d44f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x2d44f8: 0xdc43fff8  ld          $v1, -0x8($v0)
    ctx->pc = 0x2d44f8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 4294967288)));
    // 0x2d44fc: 0x2a39816  dsrlv       $s3, $v1, $s5
    ctx->pc = 0x2d44fcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) >> (GPR_U32(ctx, 21) & 0x3F));
    // 0x2d4500: 0x12600011  beqz        $s3, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D4500u;
    {
        const bool branch_taken_0x2d4500 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4500u;
        // 0x2d4504: 0x26030001  addiu       $v1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4500) {
            ctx->pc = 0x2D4548u;
            goto label_2d4548;
        }
    }
    ctx->pc = 0x2D4508u;
    // 0x2d4508: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2d4508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d450c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2d450cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2d4510: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D4510u;
    {
        const bool branch_taken_0x2d4510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4510) {
            ctx->pc = 0x2D4514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D4510u;
            // 0x2d4514: 0x2851821  addu        $v1, $s4, $a1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D4534u;
            goto label_2d4534;
        }
    }
    ctx->pc = 0x2D4518u;
    // 0x2d4518: 0x26040002  addiu       $a0, $s0, 0x2
    ctx->pc = 0x2d4518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x2d451c: 0xc0b462c  jal         func_2D18B0
    ctx->pc = 0x2D451Cu;
    SET_GPR_U32(ctx, 31, 0x2D4524u);
    ctx->pc = 0x2D4520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D451Cu;
    // 0x2d4520: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D18B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D18B0u, 0x2D451Cu, 0x2D4524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4524u;
label_2d4524:
    // 0x2d4524: 0x54400027  bnel        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x2D4524u;
    {
        const bool branch_taken_0x2d4524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d4524) {
            ctx->pc = 0x2D4528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D4524u;
            // 0x2d4528: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D45C4u;
            goto label_2d45c4;
        }
    }
    ctx->pc = 0x2D452Cu;
    // 0x2d452c: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x2d452cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2d4530: 0x2851821  addu        $v1, $s4, $a1
    ctx->pc = 0x2d4530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_2d4534:
    // 0x2d4534: 0xfc730000  sd          $s3, 0x0($v1)
    ctx->pc = 0x2d4534u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 19));
    // 0x2d4538: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2d4538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2d453c: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x2d453cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2d4540: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d4540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d4544: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2d4544u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_2d4548:
    // 0x2d4548: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2d4548u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2d454c: 0x56000006  bnel        $s0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D454Cu;
    {
        const bool branch_taken_0x2d454c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d454c) {
            ctx->pc = 0x2D4550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D454Cu;
            // 0x2d4550: 0x1010c0  sll         $v0, $s0, 3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D4568u;
            goto label_2d4568;
        }
    }
    ctx->pc = 0x2D4554u;
    // 0x2d4554: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x2d4554u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d4558: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d4558u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d455c: 0x2431814  dsllv       $v1, $v1, $s2
    ctx->pc = 0x2d455cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 18) & 0x3F));
    // 0x2d4560: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2D4560u;
    {
        const bool branch_taken_0x2d4560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4560u;
        // 0x2d4564: 0xfca30000  sd          $v1, 0x0($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4560) {
            ctx->pc = 0x2D45C0u;
            goto label_2d45c0;
        }
    }
    ctx->pc = 0x2D4568u;
label_2d4568:
    // 0x2d4568: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d4568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d456c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2d456cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2d4570: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2d4570u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2d4574: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x2d4574u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d4578: 0x2431814  dsllv       $v1, $v1, $s2
    ctx->pc = 0x2d4578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 18) & 0x3F));
    // 0x2d457c: 0x1880000f  blez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x2D457Cu;
    {
        const bool branch_taken_0x2d457c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2D4580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D457Cu;
        // 0x2d4580: 0xfc430000  sd          $v1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d457c) {
            ctx->pc = 0x2D45BCu;
            goto label_2d45bc;
        }
    }
    ctx->pc = 0x2D4584u;
    // 0x2d4584: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x2d4584u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2d4588: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x2d4588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2d458c: 0x0  nop
    ctx->pc = 0x2d458cu;
    // NOP
label_2d4590:
    // 0x2d4590: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x2d4590u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d4594: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d4594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4598: 0xdcc30008  ld          $v1, 0x8($a2)
    ctx->pc = 0x2d4598u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2d459c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2d459cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2d45a0: 0x2a22016  dsrlv       $a0, $v0, $s5
    ctx->pc = 0x2d45a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 21) & 0x3F));
    // 0x2d45a4: 0x2421014  dsllv       $v0, $v0, $s2
    ctx->pc = 0x2d45a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 18) & 0x3F));
    // 0x2d45a8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2d45a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2d45ac: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x2d45acu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x2d45b0: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x2d45b0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x2d45b4: 0x1ca0fff6  bgtz        $a1, . + 4 + (-0xA << 2)
    ctx->pc = 0x2D45B4u;
    {
        const bool branch_taken_0x2d45b4 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x2D45B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D45B4u;
        // 0x2d45b8: 0x24c6fff8  addiu       $a2, $a2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d45b4) {
            ctx->pc = 0x2D4590u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d4590;
        }
    }
    ctx->pc = 0x2D45BCu;
label_2d45bc:
    // 0x2d45bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d45bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d45c0:
    // 0x2d45c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d45c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d45c4:
    // 0x2d45c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d45c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d45c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d45c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d45cc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d45ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d45d0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d45d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d45d4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2d45d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d45d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d45d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d45dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D45DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D45E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D45DCu;
        // 0x2d45e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D45DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D45E4u;
    // 0x2d45e4: 0x0  nop
    ctx->pc = 0x2d45e4u;
    // NOP
    if (ctx->pc == 0x2d45e4u) { ctx->pc = 0x2d45e8u; }
}
