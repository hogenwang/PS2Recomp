#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00310510
// Address: 0x310510 - 0x310630
void sub_00310510_0x310510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00310510_0x310510");
#endif

    ctx->pc = 0x310510u;

    // 0x310510: 0x90880028  lbu         $t0, 0x28($a0)
    ctx->pc = 0x310510u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x310514: 0x3c039249  lui         $v1, 0x9249
    ctx->pc = 0x310514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37449 << 16));
    // 0x310518: 0x34672493  ori         $a3, $v1, 0x2493
    ctx->pc = 0x310518u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9363);
    // 0x31051c: 0x8c860054  lw          $a2, 0x54($a0)
    ctx->pc = 0x31051cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x310520: 0x24090070  addiu       $t1, $zero, 0x70
    ctx->pc = 0x310520u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x310524: 0x81940  sll         $v1, $t0, 5
    ctx->pc = 0x310524u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x310528: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x310528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31052c: 0x846a0154  lh          $t2, 0x154($v1)
    ctx->pc = 0x31052cu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x310530: 0xa4080  sll         $t0, $t2, 2
    ctx->pc = 0x310530u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x310534: 0x10a5021  addu        $t2, $t0, $t2
    ctx->pc = 0x310534u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x310538: 0xa4080  sll         $t0, $t2, 2
    ctx->pc = 0x310538u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x31053c: 0x1484021  addu        $t0, $t2, $t0
    ctx->pc = 0x31053cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x310540: 0x85080  sll         $t2, $t0, 2
    ctx->pc = 0x310540u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x310544: 0xea0018  mult        $zero, $a3, $t2
    ctx->pc = 0x310544u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x310548: 0xa47c2  srl         $t0, $t2, 31
    ctx->pc = 0x310548u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
    // 0x31054c: 0x0  nop
    ctx->pc = 0x31054cu;
    // NOP
    // 0x310550: 0x3810  mfhi        $a3
    ctx->pc = 0x310550u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x310554: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x310554u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x310558: 0x73983  sra         $a3, $a3, 6
    ctx->pc = 0x310558u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 6));
    // 0x31055c: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x31055cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x310560: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x310560u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x310564: 0xe84023  subu        $t0, $a3, $t0
    ctx->pc = 0x310564u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x310568: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x310568u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x31056c: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x31056cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x310570: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x310570u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x310574: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x310574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x310578: 0xac860054  sw          $a2, 0x54($a0)
    ctx->pc = 0x310578u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 6));
    // 0x31057c: 0x84630154  lh          $v1, 0x154($v1)
    ctx->pc = 0x31057cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x310580: 0x54690007  bnel        $v1, $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x310580u;
    {
        const bool branch_taken_0x310580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        if (branch_taken_0x310580) {
            ctx->pc = 0x310584u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x310580u;
            // 0x310584: 0x8c870058  lw          $a3, 0x58($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3105A0u;
            goto label_3105a0;
        }
    }
    ctx->pc = 0x310588u;
    // 0x310588: 0x8c86005c  lw          $a2, 0x5C($a0)
    ctx->pc = 0x310588u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x31058c: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x31058cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x310590: 0x346393e0  ori         $v1, $v1, 0x93E0
    ctx->pc = 0x310590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)37856);
    // 0x310594: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x310594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x310598: 0xac83005c  sw          $v1, 0x5C($a0)
    ctx->pc = 0x310598u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 3));
    // 0x31059c: 0x8c870058  lw          $a3, 0x58($a0)
    ctx->pc = 0x31059cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_3105a0:
    // 0x3105a0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3105a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x3105a4: 0x346686a0  ori         $a2, $v1, 0x86A0
    ctx->pc = 0x3105a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34464);
    // 0x3105a8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3105a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3105ac: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x3105acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x3105b0: 0xac860058  sw          $a2, 0x58($a0)
    ctx->pc = 0x3105b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 6));
    // 0x3105b4: 0x8466da60  lh          $a2, -0x25A0($v1)
    ctx->pc = 0x3105b4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957664)));
    // 0x3105b8: 0x28c3005a  slti        $v1, $a2, 0x5A
    ctx->pc = 0x3105b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)90) ? 1 : 0);
    // 0x3105bc: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3105BCu;
    {
        const bool branch_taken_0x3105bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3105bc) {
            ctx->pc = 0x3105C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3105BCu;
            // 0x3105c0: 0x28c30050  slti        $v1, $a2, 0x50 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)80) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3105CCu;
            goto label_3105cc;
        }
    }
    ctx->pc = 0x3105C4u;
    // 0x3105c4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3105C4u;
    {
        const bool branch_taken_0x3105c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3105C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3105C4u;
            // 0x3105c8: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3105c4) {
            ctx->pc = 0x310618u;
            goto label_310618;
        }
    }
    ctx->pc = 0x3105CCu;
label_3105cc:
    // 0x3105cc: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3105CCu;
    {
        const bool branch_taken_0x3105cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3105cc) {
            ctx->pc = 0x3105D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3105CCu;
            // 0x3105d0: 0x28c3003c  slti        $v1, $a2, 0x3C (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)60) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3105DCu;
            goto label_3105dc;
        }
    }
    ctx->pc = 0x3105D4u;
    // 0x3105d4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3105D4u;
    {
        const bool branch_taken_0x3105d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3105D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3105D4u;
            // 0x3105d8: 0x24050258  addiu       $a1, $zero, 0x258 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3105d4) {
            ctx->pc = 0x310618u;
            goto label_310618;
        }
    }
    ctx->pc = 0x3105DCu;
label_3105dc:
    // 0x3105dc: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3105DCu;
    {
        const bool branch_taken_0x3105dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3105dc) {
            ctx->pc = 0x3105E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3105DCu;
            // 0x3105e0: 0x28c30028  slti        $v1, $a2, 0x28 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)40) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3105ECu;
            goto label_3105ec;
        }
    }
    ctx->pc = 0x3105E4u;
    // 0x3105e4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3105E4u;
    {
        const bool branch_taken_0x3105e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3105E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3105E4u;
            // 0x3105e8: 0x24050190  addiu       $a1, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3105e4) {
            ctx->pc = 0x310618u;
            goto label_310618;
        }
    }
    ctx->pc = 0x3105ECu;
label_3105ec:
    // 0x3105ec: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3105ECu;
    {
        const bool branch_taken_0x3105ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3105ec) {
            ctx->pc = 0x3105F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3105ECu;
            // 0x3105f0: 0x28c30014  slti        $v1, $a2, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3105FCu;
            goto label_3105fc;
        }
    }
    ctx->pc = 0x3105F4u;
    // 0x3105f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3105F4u;
    {
        const bool branch_taken_0x3105f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3105F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3105F4u;
            // 0x3105f8: 0x2405012c  addiu       $a1, $zero, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3105f4) {
            ctx->pc = 0x310618u;
            goto label_310618;
        }
    }
    ctx->pc = 0x3105FCu;
label_3105fc:
    // 0x3105fc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3105FCu;
    {
        const bool branch_taken_0x3105fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3105fc) {
            ctx->pc = 0x31060Cu;
            goto label_31060c;
        }
    }
    ctx->pc = 0x310604u;
    // 0x310604: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x310604u;
    {
        const bool branch_taken_0x310604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310604u;
            // 0x310608: 0x240507d0  addiu       $a1, $zero, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310604) {
            ctx->pc = 0x310618u;
            goto label_310618;
        }
    }
    ctx->pc = 0x31060Cu;
label_31060c:
    // 0x31060c: 0x4c20003  bltzl       $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x31060Cu;
    {
        const bool branch_taken_0x31060c = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x31060c) {
            ctx->pc = 0x310610u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31060Cu;
            // 0x310610: 0xc52818  mult        $a1, $a2, $a1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x31061Cu;
            goto label_31061c;
        }
    }
    ctx->pc = 0x310614u;
    // 0x310614: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x310614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_310618:
    // 0x310618: 0xc52818  mult        $a1, $a2, $a1
    ctx->pc = 0x310618u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_31061c:
    // 0x31061c: 0x8c830060  lw          $v1, 0x60($a0)
    ctx->pc = 0x31061cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x310620: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x310620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x310624: 0x3e00008  jr          $ra
    ctx->pc = 0x310624u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310624u;
            // 0x310628: 0xac830060  sw          $v1, 0x60($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31062Cu;
    // 0x31062c: 0x0  nop
    ctx->pc = 0x31062cu;
    // NOP
    ctx->pc = 0x310630u;
}
