#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E6480
// Address: 0x2e6480 - 0x2e6570
void sub_002E6480_0x2e6480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E6480_0x2e6480");
#endif

    switch (ctx->pc) {
        case 0x2e6550u: goto label_2e6550;
        default: break;
    }

    ctx->pc = 0x2e6480u;

    // 0x2e6480: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e6480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e6484: 0x24860004  addiu       $a2, $a0, 0x4
    ctx->pc = 0x2e6484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2e6488: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e6488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e648c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e648cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e6490: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x2e6490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2e6494: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2e6494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e6498: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2E6498u;
    {
        const bool branch_taken_0x2e6498 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E649Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6498u;
            // 0x2e649c: 0x2c620003  sltiu       $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6498) {
            ctx->pc = 0x2E64CCu;
            goto label_2e64cc;
        }
    }
    ctx->pc = 0x2E64A0u;
    // 0x2e64a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E64A0u;
    {
        const bool branch_taken_0x2e64a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E64A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E64A0u;
            // 0x2e64a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e64a0) {
            ctx->pc = 0x2E64B8u;
            goto label_2e64b8;
        }
    }
    ctx->pc = 0x2E64A8u;
    // 0x2e64a8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E64A8u;
    {
        const bool branch_taken_0x2e64a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E64ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E64A8u;
            // 0x2e64ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e64a8) {
            ctx->pc = 0x2E64D8u;
            goto label_2e64d8;
        }
    }
    ctx->pc = 0x2E64B0u;
    // 0x2e64b0: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2E64B0u;
    {
        const bool branch_taken_0x2e64b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E64B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E64B0u;
            // 0x2e64b4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e64b0) {
            ctx->pc = 0x2E6564u;
            goto label_2e6564;
        }
    }
    ctx->pc = 0x2E64B8u;
label_2e64b8:
    // 0x2e64b8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e64b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e64bc: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E64BCu;
    {
        const bool branch_taken_0x2e64bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E64C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E64BCu;
            // 0x2e64c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e64bc) {
            ctx->pc = 0x2E64D8u;
            goto label_2e64d8;
        }
    }
    ctx->pc = 0x2E64C4u;
    // 0x2e64c4: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2E64C4u;
    {
        const bool branch_taken_0x2e64c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E64C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E64C4u;
            // 0x2e64c8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e64c4) {
            ctx->pc = 0x2E6564u;
            goto label_2e6564;
        }
    }
    ctx->pc = 0x2E64CCu;
label_2e64cc:
    // 0x2e64cc: 0x90826a10  lbu         $v0, 0x6A10($a0)
    ctx->pc = 0x2e64ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 27152)));
    // 0x2e64d0: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2E64D0u;
    {
        const bool branch_taken_0x2e64d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E64D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E64D0u;
            // 0x2e64d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e64d0) {
            ctx->pc = 0x2E6560u;
            goto label_2e6560;
        }
    }
    ctx->pc = 0x2E64D8u;
label_2e64d8:
    // 0x2e64d8: 0x8c826a0c  lw          $v0, 0x6A0C($a0)
    ctx->pc = 0x2e64d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 27148)));
    // 0x2e64dc: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x2e64dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e64e0: 0x2c830007  sltiu       $v1, $a0, 0x7
    ctx->pc = 0x2e64e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2e64e4: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2E64E4u;
    {
        const bool branch_taken_0x2e64e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E64E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E64E4u;
            // 0x2e64e8: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e64e4) {
            ctx->pc = 0x2E6544u;
            goto label_2e6544;
        }
    }
    ctx->pc = 0x2E64ECu;
    // 0x2e64ec: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e64ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e64f0: 0x2442f710  addiu       $v0, $v0, -0x8F0
    ctx->pc = 0x2e64f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965008));
    // 0x2e64f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2e64f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e64f8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2e64f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e64fc: 0x800008  jr          $a0
    ctx->pc = 0x2E64FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2E6504u: goto label_2e6504;
            case 0x2E650Cu: goto label_2e650c;
            case 0x2E6518u: goto label_2e6518;
            case 0x2E6524u: goto label_2e6524;
            case 0x2E652Cu: goto label_2e652c;
            case 0x2E6538u: goto label_2e6538;
            case 0x2E6544u: goto label_2e6544;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2E6504u;
label_2e6504:
    // 0x2e6504: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2E6504u;
    {
        const bool branch_taken_0x2e6504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6504u;
            // 0x2e6508: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6504) {
            ctx->pc = 0x2E6548u;
            goto label_2e6548;
        }
    }
    ctx->pc = 0x2E650Cu;
label_2e650c:
    // 0x2e650c: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x2e650cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    // 0x2e6510: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2E6510u;
    {
        const bool branch_taken_0x2e6510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6510u;
            // 0x2e6514: 0x34a50023  ori         $a1, $a1, 0x23 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)35);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6510) {
            ctx->pc = 0x2E6548u;
            goto label_2e6548;
        }
    }
    ctx->pc = 0x2E6518u;
label_2e6518:
    // 0x2e6518: 0x3c050050  lui         $a1, 0x50
    ctx->pc = 0x2e6518u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)80 << 16));
    // 0x2e651c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E651Cu;
    {
        const bool branch_taken_0x2e651c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E651Cu;
            // 0x2e6520: 0x34a50023  ori         $a1, $a1, 0x23 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)35);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e651c) {
            ctx->pc = 0x2E6548u;
            goto label_2e6548;
        }
    }
    ctx->pc = 0x2E6524u;
label_2e6524:
    // 0x2e6524: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E6524u;
    {
        const bool branch_taken_0x2e6524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6524u;
            // 0x2e6528: 0x24050026  addiu       $a1, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6524) {
            ctx->pc = 0x2E6548u;
            goto label_2e6548;
        }
    }
    ctx->pc = 0x2E652Cu;
label_2e652c:
    // 0x2e652c: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x2e652cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    // 0x2e6530: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E6530u;
    {
        const bool branch_taken_0x2e6530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6530u;
            // 0x2e6534: 0x34a50026  ori         $a1, $a1, 0x26 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)38);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6530) {
            ctx->pc = 0x2E6548u;
            goto label_2e6548;
        }
    }
    ctx->pc = 0x2E6538u;
label_2e6538:
    // 0x2e6538: 0x3c050050  lui         $a1, 0x50
    ctx->pc = 0x2e6538u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)80 << 16));
    // 0x2e653c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E653Cu;
    {
        const bool branch_taken_0x2e653c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E653Cu;
            // 0x2e6540: 0x34a50026  ori         $a1, $a1, 0x26 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)38);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e653c) {
            ctx->pc = 0x2E6548u;
            goto label_2e6548;
        }
    }
    ctx->pc = 0x2E6544u;
label_2e6544:
    // 0x2e6544: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e6544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e6548:
    // 0x2e6548: 0xc099fda  jal         func_267F68
    ctx->pc = 0x2E6548u;
    SET_GPR_U32(ctx, 31, 0x2E6550u);
    ctx->pc = 0x2E654Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6548u;
            // 0x2e654c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x267F68u;
    if (runtime->hasFunction(0x267F68u)) {
        auto targetFn = runtime->lookupFunction(0x267F68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6550u; }
        if (ctx->pc != 0x2E6550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00267F68_0x267f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6550u; }
        if (ctx->pc != 0x2E6550u) { return; }
    }
    ctx->pc = 0x2E6550u;
label_2e6550:
    // 0x2e6550: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2e6550u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6554: 0x4600002  bltz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E6554u;
    {
        const bool branch_taken_0x2e6554 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2E6558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6554u;
            // 0x2e6558: 0x2402fffa  addiu       $v0, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6554) {
            ctx->pc = 0x2E6560u;
            goto label_2e6560;
        }
    }
    ctx->pc = 0x2E655Cu;
    // 0x2e655c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e655cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e6560:
    // 0x2e6560: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e6560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e6564:
    // 0x2e6564: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6564u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E6568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6564u;
            // 0x2e6568: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E656Cu;
    // 0x2e656c: 0x0  nop
    ctx->pc = 0x2e656cu;
    // NOP
    ctx->pc = 0x2e6570u;
}
