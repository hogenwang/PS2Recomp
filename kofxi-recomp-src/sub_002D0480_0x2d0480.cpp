#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D0480
// Address: 0x2d0480 - 0x2d0618
void sub_002D0480_0x2d0480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0480_0x2d0480");
#endif

    switch (ctx->pc) {
        case 0x2d04dcu: goto label_2d04dc;
        case 0x2d0500u: goto label_2d0500;
        case 0x2d0510u: goto label_2d0510;
        case 0x2d0578u: goto label_2d0578;
        case 0x2d05d0u: goto label_2d05d0;
        default: break;
    }

    ctx->pc = 0x2d0480u;

    // 0x2d0480: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d0480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d0484: 0x24020102  addiu       $v0, $zero, 0x102
    ctx->pc = 0x2d0484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x2d0488: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d0488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2d048c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2d048cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0490: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d0490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d0494: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2d0494u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0498: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2d0498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2d049c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2d049cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d04a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d04a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d04a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d04a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d04a8: 0x12600053  beqz        $s3, . + 4 + (0x53 << 2)
    ctx->pc = 0x2D04A8u;
    {
        const bool branch_taken_0x2d04a8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D04ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D04A8u;
            // 0x2d04ac: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d04a8) {
            ctx->pc = 0x2D05F8u;
            goto label_2d05f8;
        }
    }
    ctx->pc = 0x2D04B0u;
    // 0x2d04b0: 0x26630007  addiu       $v1, $s3, 0x7
    ctx->pc = 0x2d04b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 7));
    // 0x2d04b4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2d04b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d04b8: 0x340c2  srl         $t0, $v1, 3
    ctx->pc = 0x2d04b8u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x2d04bc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2d04bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d04c0: 0x108800b  movn        $s0, $t0, $t0
    ctx->pc = 0x2d04c0u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 8));
    // 0x2d04c4: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2d04c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2d04c8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D04C8u;
    {
        const bool branch_taken_0x2d04c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D04CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D04C8u;
            // 0x2d04cc: 0x1390c2  srl         $s2, $s3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 19), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d04c8) {
            ctx->pc = 0x2D04E4u;
            goto label_2d04e4;
        }
    }
    ctx->pc = 0x2D04D0u;
    // 0x2d04d0: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x2d04d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2d04d4: 0xc0b466a  jal         func_2D19A8
    ctx->pc = 0x2D04D4u;
    SET_GPR_U32(ctx, 31, 0x2D04DCu);
    ctx->pc = 0x2D04D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D04D4u;
            // 0x2d04d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D19A8u;
    if (runtime->hasFunction(0x2D19A8u)) {
        auto targetFn = runtime->lookupFunction(0x2D19A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D04DCu; }
        if (ctx->pc != 0x2D04DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D19A8_0x2d19a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D04DCu; }
        if (ctx->pc != 0x2D04DCu) { return; }
    }
    ctx->pc = 0x2D04DCu;
label_2d04dc:
    // 0x2d04dc: 0x54400047  bnel        $v0, $zero, . + 4 + (0x47 << 2)
    ctx->pc = 0x2D04DCu;
    {
        const bool branch_taken_0x2d04dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d04dc) {
            ctx->pc = 0x2D04E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D04DCu;
            // 0x2d04e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D05FCu;
            goto label_2d05fc;
        }
    }
    ctx->pc = 0x2D04E4u;
label_2d04e4:
    // 0x2d04e4: 0x2931021  addu        $v0, $s4, $s3
    ctx->pc = 0x2d04e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x2d04e8: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x2d04e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x2d04ec: 0x2449ffff  addiu       $t1, $v0, -0x1
    ctx->pc = 0x2d04ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d04f0: 0x8e270008  lw          $a3, 0x8($s1)
    ctx->pc = 0x2d04f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2d04f4: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x2D04F4u;
    {
        const bool branch_taken_0x2d04f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D04F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D04F4u;
            // 0x2d04f8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d04f4) {
            ctx->pc = 0x2D054Cu;
            goto label_2d054c;
        }
    }
    ctx->pc = 0x2D04FCu;
    // 0x2d04fc: 0x0  nop
    ctx->pc = 0x2d04fcu;
    // NOP
label_2d0500:
    // 0x2d0500: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x2d0500u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2d0504: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2d0504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d0508: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x2d0508u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x2d050c: 0x0  nop
    ctx->pc = 0x2d050cu;
    // NOP
label_2d0510:
    // 0x2d0510: 0x1261023  subu        $v0, $t1, $a2
    ctx->pc = 0x2d0510u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x2d0514: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x2d0514u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2d0518: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2d0518u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d051c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2d051cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2d0520: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x2d0520u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2d0524: 0x28c40008  slti        $a0, $a2, 0x8
    ctx->pc = 0x2d0524u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2d0528: 0xa31814  dsllv       $v1, $v1, $a1
    ctx->pc = 0x2d0528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 5) & 0x3F));
    // 0x2d052c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2d052cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2d0530: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2D0530u;
    {
        const bool branch_taken_0x2d0530 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0530u;
            // 0x2d0534: 0xfce20000  sd          $v0, 0x0($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0530) {
            ctx->pc = 0x2D0510u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d0510;
        }
    }
    ctx->pc = 0x2D0538u;
    // 0x2d0538: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2d0538u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2d053c: 0x2529fff8  addiu       $t1, $t1, -0x8
    ctx->pc = 0x2d053cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967288));
    // 0x2d0540: 0x112102a  slt         $v0, $t0, $s2
    ctx->pc = 0x2d0540u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2d0544: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2D0544u;
    {
        const bool branch_taken_0x2d0544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0544u;
            // 0x2d0548: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0544) {
            ctx->pc = 0x2D0500u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d0500;
        }
    }
    ctx->pc = 0x2D054Cu;
label_2d054c:
    // 0x2d054c: 0x1240c0  sll         $t0, $s2, 3
    ctx->pc = 0x2d054cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x2d0550: 0x113102a  slt         $v0, $t0, $s3
    ctx->pc = 0x2d0550u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2d0554: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D0554u;
    {
        const bool branch_taken_0x2d0554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0554) {
            ctx->pc = 0x2D0558u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0554u;
            // 0x2d0558: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D05A4u;
            goto label_2d05a4;
        }
    }
    ctx->pc = 0x2D055Cu;
    // 0x2d055c: 0x2684023  subu        $t0, $s3, $t0
    ctx->pc = 0x2d055cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 8)));
    // 0x2d0560: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x2d0560u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2d0564: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2d0564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d0568: 0xc8102a  slt         $v0, $a2, $t0
    ctx->pc = 0x2d0568u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2d056c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2D056Cu;
    {
        const bool branch_taken_0x2d056c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D056Cu;
            // 0x2d0570: 0xfce30000  sd          $v1, 0x0($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d056c) {
            ctx->pc = 0x2D05A0u;
            goto label_2d05a0;
        }
    }
    ctx->pc = 0x2D0574u;
    // 0x2d0574: 0x0  nop
    ctx->pc = 0x2d0574u;
    // NOP
label_2d0578:
    // 0x2d0578: 0x1261023  subu        $v0, $t1, $a2
    ctx->pc = 0x2d0578u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x2d057c: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x2d057cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2d0580: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2d0580u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d0584: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2d0584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2d0588: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x2d0588u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2d058c: 0xc8202a  slt         $a0, $a2, $t0
    ctx->pc = 0x2d058cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2d0590: 0xa31814  dsllv       $v1, $v1, $a1
    ctx->pc = 0x2d0590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 5) & 0x3F));
    // 0x2d0594: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2d0594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2d0598: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2D0598u;
    {
        const bool branch_taken_0x2d0598 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D059Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0598u;
            // 0x2d059c: 0xfce20000  sd          $v0, 0x0($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0598) {
            ctx->pc = 0x2D0578u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d0578;
        }
    }
    ctx->pc = 0x2D05A0u;
label_2d05a0:
    // 0x2d05a0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x2d05a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2d05a4:
    // 0x2d05a4: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x2d05a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2d05a8: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x2d05a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2d05ac: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2d05acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2d05b0: 0xdc43fff8  ld          $v1, -0x8($v0)
    ctx->pc = 0x2d05b0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 4294967288)));
    // 0x2d05b4: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D05B4u;
    {
        const bool branch_taken_0x2d05b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D05B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D05B4u;
            // 0x2d05b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d05b4) {
            ctx->pc = 0x2D05F8u;
            goto label_2d05f8;
        }
    }
    ctx->pc = 0x2D05BCu;
    // 0x2d05bc: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x2d05bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2d05c0: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2D05C0u;
    {
        const bool branch_taken_0x2d05c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d05c0) {
            ctx->pc = 0x2D05C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D05C0u;
            // 0x2d05c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D05F8u;
            goto label_2d05f8;
        }
    }
    ctx->pc = 0x2D05C8u;
    // 0x2d05c8: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x2d05c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2d05cc: 0x0  nop
    ctx->pc = 0x2d05ccu;
    // NOP
label_2d05d0:
    // 0x2d05d0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2d05d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2d05d4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d05d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d05d8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2d05d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2d05dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d05dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d05e0: 0xdc64fff8  ld          $a0, -0x8($v1)
    ctx->pc = 0x2d05e0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
    // 0x2d05e4: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D05E4u;
    {
        const bool branch_taken_0x2d05e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D05E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D05E4u;
            // 0x2d05e8: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d05e4) {
            ctx->pc = 0x2D05F4u;
            goto label_2d05f4;
        }
    }
    ctx->pc = 0x2D05ECu;
    // 0x2d05ec: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2D05ECu;
    {
        const bool branch_taken_0x2d05ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D05F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D05ECu;
            // 0x2d05f0: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d05ec) {
            ctx->pc = 0x2D05D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d05d0;
        }
    }
    ctx->pc = 0x2D05F4u;
label_2d05f4:
    // 0x2d05f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d05f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d05f8:
    // 0x2d05f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d05f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d05fc:
    // 0x2d05fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d05fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d0600: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d0600u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0604: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d0604u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d0608: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d0608u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d060c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2d060cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d0610: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0610u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0610u;
            // 0x2d0614: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D0618u;
    ctx->pc = 0x2d0618u;
}
