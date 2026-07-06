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

// Function: sub_0020A510
// Address: 0x20a510 - 0x20a660
void sub_0020A510_0x20a510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A510_0x20a510");
#endif

    ctx->pc = 0x20a510u;

    // 0x20a510: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x20a510u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x20a514: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x20a514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x20a518: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x20a518u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x20a51c: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x20a51cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
    // 0x20a520: 0x8c6a4348  lw          $t2, 0x4348($v1)
    ctx->pc = 0x20a520u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17224)));
    // 0x20a524: 0x5420004  bltzl       $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x20A524u;
    {
        const bool branch_taken_0x20a524 = (GPR_S32(ctx, 10) < 0);
        if (branch_taken_0x20a524) {
            ctx->pc = 0x20A528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A524u;
            // 0x20a528: 0xa2823  negu        $a1, $t2 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A538u;
            goto label_20a538;
        }
    }
    ctx->pc = 0x20A52Cu;
    // 0x20a52c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x20a52cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x20a530: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x20a530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x20a534: 0x1432823  subu        $a1, $t2, $v1
    ctx->pc = 0x20a534u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_20a538:
    // 0x20a538: 0x4a30003  bgezl       $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20A538u;
    {
        const bool branch_taken_0x20a538 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x20a538) {
            ctx->pc = 0x20A53Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A538u;
            // 0x20a53c: 0x24a30001  addiu       $v1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A548u;
            goto label_20a548;
        }
    }
    ctx->pc = 0x20A540u;
    // 0x20a540: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20a540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a544: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x20a544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_20a548:
    // 0x20a548: 0x2c810007  sltiu       $at, $a0, 0x7
    ctx->pc = 0x20a548u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x20a54c: 0x10200041  beqz        $at, . + 4 + (0x41 << 2)
    ctx->pc = 0x20A54Cu;
    {
        const bool branch_taken_0x20a54c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A54Cu;
        // 0x20a550: 0xa32818  mult        $a1, $a1, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a54c) {
            ctx->pc = 0x20A654u;
            goto label_20a654;
        }
    }
    ctx->pc = 0x20A554u;
    // 0x20a554: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x20a554u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x20a558: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x20a558u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x20a55c: 0x2484f980  addiu       $a0, $a0, -0x680
    ctx->pc = 0x20a55cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965632));
    // 0x20a560: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20a560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20a564: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x20a564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20a568: 0x600008  jr          $v1
    ctx->pc = 0x20A568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20A570u: goto label_20a570;
            case 0x20A57Cu: goto label_20a57c;
            case 0x20A584u: goto label_20a584;
            case 0x20A590u: goto label_20a590;
            case 0x20A598u: goto label_20a598;
            case 0x20A600u: goto label_20a600;
            case 0x20A654u: goto label_20a654;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A568u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x20A570u;
label_20a570:
    // 0x20a570: 0x51823  negu        $v1, $a1
    ctx->pc = 0x20a570u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x20a574: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x20A574u;
    {
        const bool branch_taken_0x20a574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A574u;
        // 0x20a578: 0xad030000  sw          $v1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a574) {
            ctx->pc = 0x20A654u;
            goto label_20a654;
        }
    }
    ctx->pc = 0x20A57Cu;
label_20a57c:
    // 0x20a57c: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x20A57Cu;
    {
        const bool branch_taken_0x20a57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A57Cu;
        // 0x20a580: 0xad050000  sw          $a1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a57c) {
            ctx->pc = 0x20A654u;
            goto label_20a654;
        }
    }
    ctx->pc = 0x20A584u;
label_20a584:
    // 0x20a584: 0x51823  negu        $v1, $a1
    ctx->pc = 0x20a584u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x20a588: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x20A588u;
    {
        const bool branch_taken_0x20a588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A588u;
        // 0x20a58c: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a588) {
            ctx->pc = 0x20A654u;
            goto label_20a654;
        }
    }
    ctx->pc = 0x20A590u;
label_20a590:
    // 0x20a590: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x20A590u;
    {
        const bool branch_taken_0x20a590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A590u;
        // 0x20a594: 0xace50000  sw          $a1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a590) {
            ctx->pc = 0x20A654u;
            goto label_20a654;
        }
    }
    ctx->pc = 0x20A598u;
label_20a598:
    // 0x20a598: 0x542000f  bltzl       $t2, . + 4 + (0xF << 2)
    ctx->pc = 0x20A598u;
    {
        const bool branch_taken_0x20a598 = (GPR_S32(ctx, 10) < 0);
        if (branch_taken_0x20a598) {
            ctx->pc = 0x20A59Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A598u;
            // 0x20a59c: 0x25440028  addiu       $a0, $t2, 0x28 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 40));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A5D8u;
            goto label_20a5d8;
        }
    }
    ctx->pc = 0x20A5A0u;
    // 0x20a5a0: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x20a5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x20a5a4: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x20a5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
    // 0x20a5a8: 0x8a2023  subu        $a0, $a0, $t2
    ctx->pc = 0x20a5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x20a5ac: 0x34636667  ori         $v1, $v1, 0x6667
    ctx->pc = 0x20a5acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
    // 0x20a5b0: 0x862018  mult        $a0, $a0, $a2
    ctx->pc = 0x20a5b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x20a5b4: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x20a5b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x20a5b8: 0x0  nop
    ctx->pc = 0x20a5b8u;
    // NOP
    // 0x20a5bc: 0x0  nop
    ctx->pc = 0x20a5bcu;
    // NOP
    // 0x20a5c0: 0x1810  mfhi        $v1
    ctx->pc = 0x20a5c0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x20a5c4: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x20a5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x20a5c8: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x20a5c8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x20a5cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20a5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20a5d0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x20A5D0u;
    {
        const bool branch_taken_0x20a5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A5D0u;
        // 0x20a5d4: 0xad230000  sw          $v1, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a5d0) {
            ctx->pc = 0x20A654u;
            goto label_20a654;
        }
    }
    ctx->pc = 0x20A5D8u;
label_20a5d8:
    // 0x20a5d8: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x20a5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
    // 0x20a5dc: 0x862018  mult        $a0, $a0, $a2
    ctx->pc = 0x20a5dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x20a5e0: 0x34636667  ori         $v1, $v1, 0x6667
    ctx->pc = 0x20a5e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
    // 0x20a5e4: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x20a5e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x20a5e8: 0x1810  mfhi        $v1
    ctx->pc = 0x20a5e8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x20a5ec: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x20a5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x20a5f0: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x20a5f0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x20a5f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20a5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20a5f8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x20A5F8u;
    {
        const bool branch_taken_0x20a5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A5F8u;
        // 0x20a5fc: 0xad230000  sw          $v1, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a5f8) {
            ctx->pc = 0x20A654u;
            goto label_20a654;
        }
    }
    ctx->pc = 0x20A600u;
label_20a600:
    // 0x20a600: 0x11400003  beqz        $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x20A600u;
    {
        const bool branch_taken_0x20a600 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a600) {
            ctx->pc = 0x20A610u;
            goto label_20a610;
        }
    }
    ctx->pc = 0x20A608u;
    // 0x20a608: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x20A608u;
    {
        const bool branch_taken_0x20a608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A608u;
        // 0x20a60c: 0xad200000  sw          $zero, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a608) {
            ctx->pc = 0x20A654u;
            goto label_20a654;
        }
    }
    ctx->pc = 0x20A610u;
label_20a610:
    // 0x20a610: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x20a610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x20a614: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x20a614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x20a618: 0x8c63e680  lw          $v1, -0x1980($v1)
    ctx->pc = 0x20a618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960768)));
    // 0x20a61c: 0x64001b  divu        $zero, $v1, $a0
    ctx->pc = 0x20a61cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x20a620: 0x1810  mfhi        $v1
    ctx->pc = 0x20a620u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x20a624: 0x2c610020  sltiu       $at, $v1, 0x20
    ctx->pc = 0x20a624u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x20a628: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x20A628u;
    {
        const bool branch_taken_0x20a628 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a628) {
            ctx->pc = 0x20A62Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A628u;
            // 0x20a62c: 0x2c610040  sltiu       $at, $v1, 0x40 (Delay Slot)
            SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A638u;
            goto label_20a638;
        }
    }
    ctx->pc = 0x20A630u;
    // 0x20a630: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x20A630u;
    {
        const bool branch_taken_0x20a630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A630u;
        // 0x20a634: 0xad200000  sw          $zero, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a630) {
            ctx->pc = 0x20A654u;
            goto label_20a654;
        }
    }
    ctx->pc = 0x20A638u;
label_20a638:
    // 0x20a638: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x20A638u;
    {
        const bool branch_taken_0x20a638 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a638) {
            ctx->pc = 0x20A63Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A638u;
            // 0x20a63c: 0x831823  subu        $v1, $a0, $v1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A648u;
            goto label_20a648;
        }
    }
    ctx->pc = 0x20A640u;
    // 0x20a640: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x20A640u;
    {
        const bool branch_taken_0x20a640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A640u;
        // 0x20a644: 0xad260000  sw          $a2, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a640) {
            ctx->pc = 0x20A654u;
            goto label_20a654;
        }
    }
    ctx->pc = 0x20A648u;
label_20a648:
    // 0x20a648: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x20a648u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x20a64c: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x20a64cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x20a650: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x20a650u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
label_20a654:
    // 0x20a654: 0x3e00008  jr          $ra
    ctx->pc = 0x20A654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A65Cu;
    // 0x20a65c: 0x0  nop
    ctx->pc = 0x20a65cu;
    // NOP
}
