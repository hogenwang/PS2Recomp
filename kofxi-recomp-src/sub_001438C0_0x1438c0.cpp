#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001438C0
// Address: 0x1438c0 - 0x144c70
void sub_001438C0_0x1438c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001438C0_0x1438c0");
#endif

    switch (ctx->pc) {
        case 0x143970u: goto label_143970;
        case 0x143980u: goto label_143980;
        case 0x1439a4u: goto label_1439a4;
        case 0x1439c0u: goto label_1439c0;
        case 0x143a84u: goto label_143a84;
        case 0x143aa0u: goto label_143aa0;
        case 0x143b68u: goto label_143b68;
        case 0x143b80u: goto label_143b80;
        case 0x143ba0u: goto label_143ba0;
        case 0x143bc0u: goto label_143bc0;
        case 0x143be0u: goto label_143be0;
        case 0x143c00u: goto label_143c00;
        case 0x143c10u: goto label_143c10;
        case 0x143c2cu: goto label_143c2c;
        case 0x143c40u: goto label_143c40;
        case 0x143c60u: goto label_143c60;
        case 0x143cd8u: goto label_143cd8;
        case 0x143dc8u: goto label_143dc8;
        case 0x143de0u: goto label_143de0;
        case 0x143e60u: goto label_143e60;
        case 0x143ed0u: goto label_143ed0;
        case 0x143ef8u: goto label_143ef8;
        case 0x143fb0u: goto label_143fb0;
        case 0x143fd0u: goto label_143fd0;
        case 0x143fe0u: goto label_143fe0;
        case 0x144098u: goto label_144098;
        case 0x144170u: goto label_144170;
        case 0x144228u: goto label_144228;
        case 0x144300u: goto label_144300;
        case 0x144330u: goto label_144330;
        case 0x144350u: goto label_144350;
        case 0x144378u: goto label_144378;
        case 0x144390u: goto label_144390;
        case 0x1443a8u: goto label_1443a8;
        case 0x1443c0u: goto label_1443c0;
        case 0x1443f8u: goto label_1443f8;
        case 0x144420u: goto label_144420;
        case 0x144440u: goto label_144440;
        case 0x144460u: goto label_144460;
        case 0x144480u: goto label_144480;
        case 0x1444b0u: goto label_1444b0;
        case 0x1444c0u: goto label_1444c0;
        case 0x1444fcu: goto label_1444fc;
        case 0x144524u: goto label_144524;
        case 0x144550u: goto label_144550;
        case 0x144578u: goto label_144578;
        case 0x144590u: goto label_144590;
        case 0x144600u: goto label_144600;
        case 0x144670u: goto label_144670;
        case 0x1446e0u: goto label_1446e0;
        case 0x144750u: goto label_144750;
        case 0x1447c0u: goto label_1447c0;
        case 0x144830u: goto label_144830;
        case 0x1448a0u: goto label_1448a0;
        case 0x144910u: goto label_144910;
        case 0x144938u: goto label_144938;
        case 0x144950u: goto label_144950;
        case 0x144970u: goto label_144970;
        case 0x14498cu: goto label_14498c;
        case 0x1449b0u: goto label_1449b0;
        case 0x144a88u: goto label_144a88;
        case 0x144aa0u: goto label_144aa0;
        case 0x144abcu: goto label_144abc;
        case 0x144b80u: goto label_144b80;
        case 0x144bb0u: goto label_144bb0;
        case 0x144bd8u: goto label_144bd8;
        case 0x144bf0u: goto label_144bf0;
        case 0x144c00u: goto label_144c00;
        case 0x144c18u: goto label_144c18;
        case 0x144c30u: goto label_144c30;
        case 0x144c54u: goto label_144c54;
        default: break;
    }

    ctx->pc = 0x1438c0u;

label_1438c0:
    // 0x1438c0: 0x2cc10007  sltiu       $at, $a2, 0x7
    ctx->pc = 0x1438c0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1438c4: 0x50200027  beql        $at, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x1438C4u;
    {
        const bool branch_taken_0x1438c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1438c4) {
            ctx->pc = 0x1438C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1438C4u;
            // 0x1438c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x143964u;
            goto label_143964;
        }
    }
    ctx->pc = 0x1438CCu;
    // 0x1438cc: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x1438ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x1438d0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1438d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1438d4: 0x2463cd80  addiu       $v1, $v1, -0x3280
    ctx->pc = 0x1438d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954368));
    // 0x1438d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1438d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1438dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1438dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1438e0: 0x400008  jr          $v0
    ctx->pc = 0x1438E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1438E8u: goto label_1438e8;
            case 0x1438F8u: goto label_1438f8;
            case 0x143908u: goto label_143908;
            case 0x14391Cu: goto label_14391c;
            case 0x143930u: goto label_143930;
            case 0x143944u: goto label_143944;
            case 0x143958u: goto label_143958;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1438E8u;
label_1438e8:
    // 0x1438e8: 0x1485001d  bne         $a0, $a1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1438E8u;
    {
        const bool branch_taken_0x1438e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x1438e8) {
            ctx->pc = 0x143960u;
            goto label_143960;
        }
    }
    ctx->pc = 0x1438F0u;
    // 0x1438f0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1438F0u;
    {
        const bool branch_taken_0x1438f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1438F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1438F0u;
            // 0x1438f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1438f0) {
            ctx->pc = 0x143964u;
            goto label_143964;
        }
    }
    ctx->pc = 0x1438F8u;
label_1438f8:
    // 0x1438f8: 0x10850019  beq         $a0, $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1438F8u;
    {
        const bool branch_taken_0x1438f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x1438f8) {
            ctx->pc = 0x143960u;
            goto label_143960;
        }
    }
    ctx->pc = 0x143900u;
    // 0x143900: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x143900u;
    {
        const bool branch_taken_0x143900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143900u;
            // 0x143904: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143900) {
            ctx->pc = 0x143964u;
            goto label_143964;
        }
    }
    ctx->pc = 0x143908u;
label_143908:
    // 0x143908: 0xa4082a  slt         $at, $a1, $a0
    ctx->pc = 0x143908u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x14390c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x14390Cu;
    {
        const bool branch_taken_0x14390c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14390c) {
            ctx->pc = 0x143960u;
            goto label_143960;
        }
    }
    ctx->pc = 0x143914u;
    // 0x143914: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x143914u;
    {
        const bool branch_taken_0x143914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143914u;
            // 0x143918: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143914) {
            ctx->pc = 0x143964u;
            goto label_143964;
        }
    }
    ctx->pc = 0x14391Cu;
label_14391c:
    // 0x14391c: 0x85082a  slt         $at, $a0, $a1
    ctx->pc = 0x14391cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x143920: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x143920u;
    {
        const bool branch_taken_0x143920 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x143920) {
            ctx->pc = 0x143960u;
            goto label_143960;
        }
    }
    ctx->pc = 0x143928u;
    // 0x143928: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x143928u;
    {
        const bool branch_taken_0x143928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14392Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143928u;
            // 0x14392c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143928) {
            ctx->pc = 0x143964u;
            goto label_143964;
        }
    }
    ctx->pc = 0x143930u;
label_143930:
    // 0x143930: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x143930u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x143934: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x143934u;
    {
        const bool branch_taken_0x143934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x143934) {
            ctx->pc = 0x143960u;
            goto label_143960;
        }
    }
    ctx->pc = 0x14393Cu;
    // 0x14393c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x14393Cu;
    {
        const bool branch_taken_0x14393c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14393Cu;
            // 0x143940: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14393c) {
            ctx->pc = 0x143964u;
            goto label_143964;
        }
    }
    ctx->pc = 0x143944u;
label_143944:
    // 0x143944: 0xa4082a  slt         $at, $a1, $a0
    ctx->pc = 0x143944u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x143948: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x143948u;
    {
        const bool branch_taken_0x143948 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x143948) {
            ctx->pc = 0x143960u;
            goto label_143960;
        }
    }
    ctx->pc = 0x143950u;
    // 0x143950: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x143950u;
    {
        const bool branch_taken_0x143950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143950u;
            // 0x143954: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143950) {
            ctx->pc = 0x143964u;
            goto label_143964;
        }
    }
    ctx->pc = 0x143958u;
label_143958:
    // 0x143958: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x143958u;
    {
        const bool branch_taken_0x143958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14395Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143958u;
            // 0x14395c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143958) {
            ctx->pc = 0x143964u;
            goto label_143964;
        }
    }
    ctx->pc = 0x143960u;
label_143960:
    // 0x143960: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x143960u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_143964:
    // 0x143964: 0x3e00008  jr          $ra
    ctx->pc = 0x143964u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14396Cu;
    // 0x14396c: 0x0  nop
    ctx->pc = 0x14396cu;
    // NOP
label_143970:
    // 0x143970: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x143970u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x143974: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x143974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143978: 0x3e00008  jr          $ra
    ctx->pc = 0x143978u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14397Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143978u;
            // 0x14397c: 0xa4a300f2  sh          $v1, 0xF2($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 242), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x143980u;
label_143980:
    // 0x143980: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x143980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x143984: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x143984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x143988: 0x90a20438  lbu         $v0, 0x438($a1)
    ctx->pc = 0x143988u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1080)));
    // 0x14398c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x14398cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x143990: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x143990u;
    {
        const bool branch_taken_0x143990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x143990) {
            ctx->pc = 0x143994u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x143990u;
            // 0x143994: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1439A8u;
            goto label_1439a8;
        }
    }
    ctx->pc = 0x143998u;
    // 0x143998: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x143998u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14399c: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x14399Cu;
    SET_GPR_U32(ctx, 31, 0x1439A4u);
    ctx->pc = 0x1439A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14399Cu;
            // 0x1439a0: 0x24a50268  addiu       $a1, $a1, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1439A4u; }
        if (ctx->pc != 0x1439A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1439A4u; }
        if (ctx->pc != 0x1439A4u) { return; }
    }
    ctx->pc = 0x1439A4u;
label_1439a4:
    // 0x1439a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1439a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1439a8:
    // 0x1439a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1439a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1439ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1439ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1439B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1439ACu;
            // 0x1439b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1439B4u;
    // 0x1439b4: 0x0  nop
    ctx->pc = 0x1439b4u;
    // NOP
    // 0x1439b8: 0x0  nop
    ctx->pc = 0x1439b8u;
    // NOP
    // 0x1439bc: 0x0  nop
    ctx->pc = 0x1439bcu;
    // NOP
label_1439c0:
    // 0x1439c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1439c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1439c4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1439c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1439c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1439c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1439cc: 0x90a20438  lbu         $v0, 0x438($a1)
    ctx->pc = 0x1439ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1080)));
    // 0x1439d0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1439d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1439d4: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1439D4u;
    {
        const bool branch_taken_0x1439d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1439D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1439D4u;
            // 0x1439d8: 0xa0482d  daddu       $t1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1439d4) {
            ctx->pc = 0x143A84u;
            goto label_143a84;
        }
    }
    ctx->pc = 0x1439DCu;
    // 0x1439dc: 0x94c20006  lhu         $v0, 0x6($a2)
    ctx->pc = 0x1439dcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x1439e0: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1439E0u;
    {
        const bool branch_taken_0x1439e0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1439e0) {
            ctx->pc = 0x1439E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1439E0u;
            // 0x1439e4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1439F4u;
            goto label_1439f4;
        }
    }
    ctx->pc = 0x1439E8u;
    // 0x1439e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1439e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1439ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1439ECu;
    {
        const bool branch_taken_0x1439ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1439F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1439ECu;
            // 0x1439f0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1439ec) {
            ctx->pc = 0x143A0Cu;
            goto label_143a0c;
        }
    }
    ctx->pc = 0x1439F4u;
label_1439f4:
    // 0x1439f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1439f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1439f8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1439f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1439fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1439fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143a00: 0x0  nop
    ctx->pc = 0x143a00u;
    // NOP
    // 0x143a04: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x143a04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x143a08: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x143a08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_143a0c:
    // 0x143a0c: 0xc5200090  lwc1        $f0, 0x90($t1)
    ctx->pc = 0x143a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143a10: 0x94c20008  lhu         $v0, 0x8($a2)
    ctx->pc = 0x143a10u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x143a14: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x143a14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x143a18: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x143a18u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x143a1c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x143a1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x143a20: 0x0  nop
    ctx->pc = 0x143a20u;
    // NOP
    // 0x143a24: 0x33c3c  dsll32      $a3, $v1, 16
    ctx->pc = 0x143a24u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 16));
    // 0x143a28: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x143A28u;
    {
        const bool branch_taken_0x143a28 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x143A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143A28u;
            // 0x143a2c: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
        SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143a28) {
            ctx->pc = 0x143A3Cu;
            goto label_143a3c;
        }
    }
    ctx->pc = 0x143A30u;
    // 0x143a30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x143a30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143a34: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x143A34u;
    {
        const bool branch_taken_0x143a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143A34u;
            // 0x143a38: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x143a34) {
            ctx->pc = 0x143A58u;
            goto label_143a58;
        }
    }
    ctx->pc = 0x143A3Cu;
label_143a3c:
    // 0x143a3c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x143a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x143a40: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x143a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x143a44: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x143a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x143a48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x143a48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143a4c: 0x0  nop
    ctx->pc = 0x143a4cu;
    // NOP
    // 0x143a50: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x143a50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x143a54: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x143a54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_143a58:
    // 0x143a58: 0xc5200094  lwc1        $f0, 0x94($t1)
    ctx->pc = 0x143a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143a5c: 0x94c40000  lhu         $a0, 0x0($a2)
    ctx->pc = 0x143a5cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x143a60: 0x94c50002  lhu         $a1, 0x2($a2)
    ctx->pc = 0x143a60u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x143a64: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x143a64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x143a68: 0x94c60004  lhu         $a2, 0x4($a2)
    ctx->pc = 0x143a68u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x143a6c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x143a6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x143a70: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x143a70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x143a74: 0x0  nop
    ctx->pc = 0x143a74u;
    // NOP
    // 0x143a78: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x143a78u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x143a7c: 0xc0508b0  jal         func_1422C0
    ctx->pc = 0x143A7Cu;
    SET_GPR_U32(ctx, 31, 0x143A84u);
    ctx->pc = 0x143A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143A7Cu;
            // 0x143a80: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1422C0u;
    if (runtime->hasFunction(0x1422C0u)) {
        auto targetFn = runtime->lookupFunction(0x1422C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143A84u; }
        if (ctx->pc != 0x143A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001422C0_0x1422c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143A84u; }
        if (ctx->pc != 0x143A84u) { return; }
    }
    ctx->pc = 0x143A84u;
label_143a84:
    // 0x143a84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x143a84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143a88: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x143a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x143a8c: 0x3e00008  jr          $ra
    ctx->pc = 0x143A8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143A8Cu;
            // 0x143a90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x143A94u;
    // 0x143a94: 0x0  nop
    ctx->pc = 0x143a94u;
    // NOP
    // 0x143a98: 0x0  nop
    ctx->pc = 0x143a98u;
    // NOP
    // 0x143a9c: 0x0  nop
    ctx->pc = 0x143a9cu;
    // NOP
label_143aa0:
    // 0x143aa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x143aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x143aa4: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x143aa4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143aa8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x143aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x143aac: 0x90a20438  lbu         $v0, 0x438($a1)
    ctx->pc = 0x143aacu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1080)));
    // 0x143ab0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x143ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x143ab4: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x143AB4u;
    {
        const bool branch_taken_0x143ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x143AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143AB4u;
            // 0x143ab8: 0xa0502d  daddu       $t2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143ab4) {
            ctx->pc = 0x143B68u;
            goto label_143b68;
        }
    }
    ctx->pc = 0x143ABCu;
    // 0x143abc: 0x95020006  lhu         $v0, 0x6($t0)
    ctx->pc = 0x143abcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x143ac0: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x143AC0u;
    {
        const bool branch_taken_0x143ac0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x143ac0) {
            ctx->pc = 0x143AC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x143AC0u;
            // 0x143ac4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x143AD4u;
            goto label_143ad4;
        }
    }
    ctx->pc = 0x143AC8u;
    // 0x143ac8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x143ac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143acc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x143ACCu;
    {
        const bool branch_taken_0x143acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143ACCu;
            // 0x143ad0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x143acc) {
            ctx->pc = 0x143AECu;
            goto label_143aec;
        }
    }
    ctx->pc = 0x143AD4u;
label_143ad4:
    // 0x143ad4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x143ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x143ad8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x143ad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x143adc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x143adcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143ae0: 0x0  nop
    ctx->pc = 0x143ae0u;
    // NOP
    // 0x143ae4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x143ae4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x143ae8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x143ae8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_143aec:
    // 0x143aec: 0xc5400090  lwc1        $f0, 0x90($t2)
    ctx->pc = 0x143aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143af0: 0x95020008  lhu         $v0, 0x8($t0)
    ctx->pc = 0x143af0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x143af4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x143af4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x143af8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x143af8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x143afc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x143afcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x143b00: 0x0  nop
    ctx->pc = 0x143b00u;
    // NOP
    // 0x143b04: 0x33c3c  dsll32      $a3, $v1, 16
    ctx->pc = 0x143b04u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 16));
    // 0x143b08: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x143B08u;
    {
        const bool branch_taken_0x143b08 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x143B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143B08u;
            // 0x143b0c: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
        SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143b08) {
            ctx->pc = 0x143B1Cu;
            goto label_143b1c;
        }
    }
    ctx->pc = 0x143B10u;
    // 0x143b10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x143b10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143b14: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x143B14u;
    {
        const bool branch_taken_0x143b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143B14u;
            // 0x143b18: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x143b14) {
            ctx->pc = 0x143B38u;
            goto label_143b38;
        }
    }
    ctx->pc = 0x143B1Cu;
label_143b1c:
    // 0x143b1c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x143b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x143b20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x143b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x143b24: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x143b24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x143b28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x143b28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143b2c: 0x0  nop
    ctx->pc = 0x143b2cu;
    // NOP
    // 0x143b30: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x143b30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x143b34: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x143b34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_143b38:
    // 0x143b38: 0xc5400094  lwc1        $f0, 0x94($t2)
    ctx->pc = 0x143b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143b3c: 0x95040000  lhu         $a0, 0x0($t0)
    ctx->pc = 0x143b3cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x143b40: 0x95050002  lhu         $a1, 0x2($t0)
    ctx->pc = 0x143b40u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x143b44: 0x95060004  lhu         $a2, 0x4($t0)
    ctx->pc = 0x143b44u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x143b48: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x143b48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x143b4c: 0x9509000a  lhu         $t1, 0xA($t0)
    ctx->pc = 0x143b4cu;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 10)));
    // 0x143b50: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x143b50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x143b54: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x143b54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x143b58: 0x0  nop
    ctx->pc = 0x143b58u;
    // NOP
    // 0x143b5c: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x143b5cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x143b60: 0xc050948  jal         func_142520
    ctx->pc = 0x143B60u;
    SET_GPR_U32(ctx, 31, 0x143B68u);
    ctx->pc = 0x143B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143B60u;
            // 0x143b64: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142520u;
    if (runtime->hasFunction(0x142520u)) {
        auto targetFn = runtime->lookupFunction(0x142520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143B68u; }
        if (ctx->pc != 0x143B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00142520_0x142520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143B68u; }
        if (ctx->pc != 0x143B68u) { return; }
    }
    ctx->pc = 0x143B68u;
label_143b68:
    // 0x143b68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x143b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143b6c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x143b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x143b70: 0x3e00008  jr          $ra
    ctx->pc = 0x143B70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143B70u;
            // 0x143b74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x143B78u;
    // 0x143b78: 0x0  nop
    ctx->pc = 0x143b78u;
    // NOP
    // 0x143b7c: 0x0  nop
    ctx->pc = 0x143b7cu;
    // NOP
label_143b80:
    // 0x143b80: 0x8ca30410  lw          $v1, 0x410($a1)
    ctx->pc = 0x143b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1040)));
    // 0x143b84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x143b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143b88: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x143b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x143b8c: 0xaca30410  sw          $v1, 0x410($a1)
    ctx->pc = 0x143b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1040), GPR_U32(ctx, 3));
    // 0x143b90: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x143b90u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x143b94: 0x3e00008  jr          $ra
    ctx->pc = 0x143B94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143B94u;
            // 0x143b98: 0xa4a30414  sh          $v1, 0x414($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 1044), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x143B9Cu;
    // 0x143b9c: 0x0  nop
    ctx->pc = 0x143b9cu;
    // NOP
label_143ba0:
    // 0x143ba0: 0x8ca30410  lw          $v1, 0x410($a1)
    ctx->pc = 0x143ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1040)));
    // 0x143ba4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x143ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143ba8: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x143ba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x143bac: 0xaca30410  sw          $v1, 0x410($a1)
    ctx->pc = 0x143bacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1040), GPR_U32(ctx, 3));
    // 0x143bb0: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x143bb0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x143bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x143BB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143BB4u;
            // 0x143bb8: 0xa4a30416  sh          $v1, 0x416($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 1046), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x143BBCu;
    // 0x143bbc: 0x0  nop
    ctx->pc = 0x143bbcu;
    // NOP
label_143bc0:
    // 0x143bc0: 0x8ca30410  lw          $v1, 0x410($a1)
    ctx->pc = 0x143bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1040)));
    // 0x143bc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x143bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143bc8: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x143bc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x143bcc: 0xaca30410  sw          $v1, 0x410($a1)
    ctx->pc = 0x143bccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1040), GPR_U32(ctx, 3));
    // 0x143bd0: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x143bd0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x143bd4: 0x3e00008  jr          $ra
    ctx->pc = 0x143BD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143BD4u;
            // 0x143bd8: 0xa4a30418  sh          $v1, 0x418($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 1048), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x143BDCu;
    // 0x143bdc: 0x0  nop
    ctx->pc = 0x143bdcu;
    // NOP
label_143be0:
    // 0x143be0: 0x8ca30410  lw          $v1, 0x410($a1)
    ctx->pc = 0x143be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1040)));
    // 0x143be4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x143be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143be8: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x143be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x143bec: 0xaca30410  sw          $v1, 0x410($a1)
    ctx->pc = 0x143becu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1040), GPR_U32(ctx, 3));
    // 0x143bf0: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x143bf0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x143bf4: 0x3e00008  jr          $ra
    ctx->pc = 0x143BF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143BF4u;
            // 0x143bf8: 0xa4a3041a  sh          $v1, 0x41A($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 1050), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x143BFCu;
    // 0x143bfc: 0x0  nop
    ctx->pc = 0x143bfcu;
    // NOP
label_143c00:
    // 0x143c00: 0x3e00008  jr          $ra
    ctx->pc = 0x143C00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143C00u;
            // 0x143c04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x143C08u;
    // 0x143c08: 0x0  nop
    ctx->pc = 0x143c08u;
    // NOP
    // 0x143c0c: 0x0  nop
    ctx->pc = 0x143c0cu;
    // NOP
label_143c10:
    // 0x143c10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x143c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x143c14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x143c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x143c18: 0x8ca200dc  lw          $v0, 0xDC($a1)
    ctx->pc = 0x143c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 220)));
    // 0x143c1c: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x143c1cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x143c20: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x143c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x143c24: 0xc0c7d18  jal         func_31F460
    ctx->pc = 0x143C24u;
    SET_GPR_U32(ctx, 31, 0x143C2Cu);
    ctx->pc = 0x143C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143C24u;
            // 0x143c28: 0x22082  srl         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31F460u;
    if (runtime->hasFunction(0x31F460u)) {
        auto targetFn = runtime->lookupFunction(0x31F460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143C2Cu; }
        if (ctx->pc != 0x143C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031F460_0x31f460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143C2Cu; }
        if (ctx->pc != 0x143C2Cu) { return; }
    }
    ctx->pc = 0x143C2Cu;
label_143c2c:
    // 0x143c2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x143c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143c30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x143c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143c34: 0x3e00008  jr          $ra
    ctx->pc = 0x143C34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143C34u;
            // 0x143c38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x143C3Cu;
    // 0x143c3c: 0x0  nop
    ctx->pc = 0x143c3cu;
    // NOP
label_143c40:
    // 0x143c40: 0x8ca30410  lw          $v1, 0x410($a1)
    ctx->pc = 0x143c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1040)));
    // 0x143c44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x143c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143c48: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x143c48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x143c4c: 0xaca30410  sw          $v1, 0x410($a1)
    ctx->pc = 0x143c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1040), GPR_U32(ctx, 3));
    // 0x143c50: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x143c50u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x143c54: 0x3e00008  jr          $ra
    ctx->pc = 0x143C54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143C54u;
            // 0x143c58: 0xa4a3041c  sh          $v1, 0x41C($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 1052), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x143C5Cu;
    // 0x143c5c: 0x0  nop
    ctx->pc = 0x143c5cu;
    // NOP
label_143c60:
    // 0x143c60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x143c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x143c64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x143c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x143c68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x143c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x143c6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x143c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x143c70: 0x8ca20470  lw          $v0, 0x470($a1)
    ctx->pc = 0x143c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1136)));
    // 0x143c74: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x143c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x143c78: 0xaca20470  sw          $v0, 0x470($a1)
    ctx->pc = 0x143c78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1136), GPR_U32(ctx, 2));
    // 0x143c7c: 0xaca40478  sw          $a0, 0x478($a1)
    ctx->pc = 0x143c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1144), GPR_U32(ctx, 4));
    // 0x143c80: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x143c80u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x143c84: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x143C84u;
    {
        const bool branch_taken_0x143c84 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x143C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143C84u;
            // 0x143c88: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143c84) {
            ctx->pc = 0x143C98u;
            goto label_143c98;
        }
    }
    ctx->pc = 0x143C8Cu;
    // 0x143c8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x143c8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143c90: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x143C90u;
    {
        const bool branch_taken_0x143c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143C90u;
            // 0x143c94: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x143c90) {
            ctx->pc = 0x143CB4u;
            goto label_143cb4;
        }
    }
    ctx->pc = 0x143C98u;
label_143c98:
    // 0x143c98: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x143c98u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x143c9c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x143c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x143ca0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x143ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x143ca4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x143ca4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143ca8: 0x0  nop
    ctx->pc = 0x143ca8u;
    // NOP
    // 0x143cac: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x143cacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x143cb0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x143cb0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_143cb4:
    // 0x143cb4: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x143cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143cb8: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x143cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x143cbc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x143cbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x143cc0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x143cc0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x143cc4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x143cc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x143cc8: 0x0  nop
    ctx->pc = 0x143cc8u;
    // NOP
    // 0x143ccc: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x143cccu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x143cd0: 0xc0627d8  jal         func_189F60
    ctx->pc = 0x143CD0u;
    SET_GPR_U32(ctx, 31, 0x143CD8u);
    ctx->pc = 0x143CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143CD0u;
            // 0x143cd4: 0x118c3f  dsra32      $s1, $s1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189F60u;
    if (runtime->hasFunction(0x189F60u)) {
        auto targetFn = runtime->lookupFunction(0x189F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143CD8u; }
        if (ctx->pc != 0x143CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189F60_0x189f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143CD8u; }
        if (ctx->pc != 0x143CD8u) { return; }
    }
    ctx->pc = 0x143CD8u;
label_143cd8:
    // 0x143cd8: 0x9202008c  lbu         $v0, 0x8C($s0)
    ctx->pc = 0x143cd8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x143cdc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x143cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x143ce0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x143CE0u;
    {
        const bool branch_taken_0x143ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x143ce0) {
            ctx->pc = 0x143CE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x143CE0u;
            // 0x143ce4: 0x86030000  lh          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x143D04u;
            goto label_143d04;
        }
    }
    ctx->pc = 0x143CE8u;
    // 0x143ce8: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x143ce8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x143cec: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x143cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x143cf0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x143cf0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x143cf4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x143cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x143cf8: 0x2543c  dsll32      $t2, $v0, 16
    ctx->pc = 0x143cf8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << (32 + 16));
    // 0x143cfc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x143CFCu;
    {
        const bool branch_taken_0x143cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143CFCu;
            // 0x143d00: 0xa543f  dsra32      $t2, $t2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143cfc) {
            ctx->pc = 0x143D18u;
            goto label_143d18;
        }
    }
    ctx->pc = 0x143D04u;
label_143d04:
    // 0x143d04: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x143d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x143d08: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x143d08u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x143d0c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x143d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x143d10: 0x2543c  dsll32      $t2, $v0, 16
    ctx->pc = 0x143d10u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << (32 + 16));
    // 0x143d14: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x143d14u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
label_143d18:
    // 0x143d18: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x143d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x143d1c: 0x8c42a208  lw          $v0, -0x5DF8($v0)
    ctx->pc = 0x143d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943240)));
    // 0x143d20: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x143d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x143d24: 0x50400029  beql        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x143D24u;
    {
        const bool branch_taken_0x143d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x143d24) {
            ctx->pc = 0x143D28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x143D24u;
            // 0x143d28: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x143DCCu;
            goto label_143dcc;
        }
    }
    ctx->pc = 0x143D2Cu;
    // 0x143d2c: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x143d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x143d30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x143d30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143d34: 0x8449f10c  lh          $t1, -0xEF4($v0)
    ctx->pc = 0x143d34u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294963468)));
    // 0x143d38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x143d38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143d3c: 0x0  nop
    ctx->pc = 0x143d3cu;
    // NOP
    // 0x143d40: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x143d40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x143d44: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x143d44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x143d48: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x143d48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x143d4c: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x143d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x143d50: 0x8448f10e  lh          $t0, -0xEF2($v0)
    ctx->pc = 0x143d50u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294963470)));
    // 0x143d54: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x143d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x143d58: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x143d58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x143d5c: 0x3444ff00  ori         $a0, $v0, 0xFF00
    ctx->pc = 0x143d5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x143d60: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x143d60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x143d64: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x143d64u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143d68: 0x0  nop
    ctx->pc = 0x143d68u;
    // NOP
    // 0x143d6c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x143d6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x143d70: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x143d70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x143d74: 0x0  nop
    ctx->pc = 0x143d74u;
    // NOP
    // 0x143d78: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x143d78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x143d7c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x143d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x143d80: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x143d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x143d84: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x143d84u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143d88: 0x0  nop
    ctx->pc = 0x143d88u;
    // NOP
    // 0x143d8c: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x143d8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x143d90: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x143d90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x143d94: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x143d94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x143d98: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x143d98u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143d9c: 0x0  nop
    ctx->pc = 0x143d9cu;
    // NOP
    // 0x143da0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x143da0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x143da4: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x143da4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x143da8: 0xe7a1004c  swc1        $f1, 0x4C($sp)
    ctx->pc = 0x143da8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x143dac: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x143dacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x143db0: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x143db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x143db4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x143db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x143db8: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x143db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x143dbc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x143dbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x143dc0: 0xc0c11b8  jal         func_3046E0
    ctx->pc = 0x143DC0u;
    SET_GPR_U32(ctx, 31, 0x143DC8u);
    ctx->pc = 0x143DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143DC0u;
            // 0x143dc4: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3046E0u;
    if (runtime->hasFunction(0x3046E0u)) {
        auto targetFn = runtime->lookupFunction(0x3046E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143DC8u; }
        if (ctx->pc != 0x143DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003046E0_0x3046e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143DC8u; }
        if (ctx->pc != 0x143DC8u) { return; }
    }
    ctx->pc = 0x143DC8u;
label_143dc8:
    // 0x143dc8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x143dc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_143dcc:
    // 0x143dcc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x143dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x143dd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x143dd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143dd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x143dd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x143DD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143DD8u;
            // 0x143ddc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x143DE0u;
label_143de0:
    // 0x143de0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x143de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x143de4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x143de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x143de8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x143de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x143dec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x143decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x143df0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x143df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x143df4: 0x8ca20470  lw          $v0, 0x470($a1)
    ctx->pc = 0x143df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1136)));
    // 0x143df8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x143df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x143dfc: 0xaca20470  sw          $v0, 0x470($a1)
    ctx->pc = 0x143dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1136), GPR_U32(ctx, 2));
    // 0x143e00: 0xaca4047c  sw          $a0, 0x47C($a1)
    ctx->pc = 0x143e00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1148), GPR_U32(ctx, 4));
    // 0x143e04: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x143e04u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x143e08: 0x94910000  lhu         $s1, 0x0($a0)
    ctx->pc = 0x143e08u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x143e0c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x143E0Cu;
    {
        const bool branch_taken_0x143e0c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x143E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143E0Cu;
            // 0x143e10: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143e0c) {
            ctx->pc = 0x143E20u;
            goto label_143e20;
        }
    }
    ctx->pc = 0x143E14u;
    // 0x143e14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x143e14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143e18: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x143E18u;
    {
        const bool branch_taken_0x143e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143E18u;
            // 0x143e1c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x143e18) {
            ctx->pc = 0x143E3Cu;
            goto label_143e3c;
        }
    }
    ctx->pc = 0x143E20u;
label_143e20:
    // 0x143e20: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x143e20u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x143e24: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x143e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x143e28: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x143e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x143e2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x143e2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143e30: 0x0  nop
    ctx->pc = 0x143e30u;
    // NOP
    // 0x143e34: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x143e34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x143e38: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x143e38u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_143e3c:
    // 0x143e3c: 0xc6400090  lwc1        $f0, 0x90($s2)
    ctx->pc = 0x143e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143e40: 0x8e4400dc  lw          $a0, 0xDC($s2)
    ctx->pc = 0x143e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x143e44: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x143e44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x143e48: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x143e48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x143e4c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x143e4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x143e50: 0x0  nop
    ctx->pc = 0x143e50u;
    // NOP
    // 0x143e54: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x143e54u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x143e58: 0xc0627d8  jal         func_189F60
    ctx->pc = 0x143E58u;
    SET_GPR_U32(ctx, 31, 0x143E60u);
    ctx->pc = 0x143E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143E58u;
            // 0x143e5c: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189F60u;
    if (runtime->hasFunction(0x189F60u)) {
        auto targetFn = runtime->lookupFunction(0x189F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143E60u; }
        if (ctx->pc != 0x143E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189F60_0x189f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143E60u; }
        if (ctx->pc != 0x143E60u) { return; }
    }
    ctx->pc = 0x143E60u;
label_143e60:
    // 0x143e60: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x143e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x143e64: 0x9242008c  lbu         $v0, 0x8C($s2)
    ctx->pc = 0x143e64u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x143e68: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x143e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x143e6c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x143E6Cu;
    {
        const bool branch_taken_0x143e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x143e6c) {
            ctx->pc = 0x143E70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x143E6Cu;
            // 0x143e70: 0x84620000  lh          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x143E8Cu;
            goto label_143e8c;
        }
    }
    ctx->pc = 0x143E74u;
    // 0x143e74: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x143e74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x143e78: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x143e78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x143e7c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x143e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x143e80: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x143e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x143e84: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x143E84u;
    {
        const bool branch_taken_0x143e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143E84u;
            // 0x143e88: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143e84) {
            ctx->pc = 0x143E9Cu;
            goto label_143e9c;
        }
    }
    ctx->pc = 0x143E8Cu;
label_143e8c:
    // 0x143e8c: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x143e8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x143e90: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x143e90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x143e94: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x143e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x143e98: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x143e98u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_143e9c:
    // 0x143e9c: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x143e9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x143ea0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x143ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x143ea4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x143ea4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x143ea8: 0x461000b  bgez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x143EA8u;
    {
        const bool branch_taken_0x143ea8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x143EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143EA8u;
            // 0x143eac: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143ea8) {
            ctx->pc = 0x143ED8u;
            goto label_143ed8;
        }
    }
    ctx->pc = 0x143EB0u;
    // 0x143eb0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x143eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x143eb4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x143eb4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x143eb8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x143eb8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x143ebc: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x143EBCu;
    {
        const bool branch_taken_0x143ebc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x143ebc) {
            ctx->pc = 0x143EF8u;
            goto label_143ef8;
        }
    }
    ctx->pc = 0x143EC4u;
    // 0x143ec4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x143ec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143ec8: 0xc050e14  jal         func_143850
    ctx->pc = 0x143EC8u;
    SET_GPR_U32(ctx, 31, 0x143ED0u);
    ctx->pc = 0x143ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143EC8u;
            // 0x143ecc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143850u;
    if (runtime->hasFunction(0x143850u)) {
        auto targetFn = runtime->lookupFunction(0x143850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143ED0u; }
        if (ctx->pc != 0x143ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143850_0x143850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143ED0u; }
        if (ctx->pc != 0x143ED0u) { return; }
    }
    ctx->pc = 0x143ED0u;
label_143ed0:
    // 0x143ed0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x143ED0u;
    {
        const bool branch_taken_0x143ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x143ed0) {
            ctx->pc = 0x143EF8u;
            goto label_143ef8;
        }
    }
    ctx->pc = 0x143ED8u;
label_143ed8:
    // 0x143ed8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x143ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x143edc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x143edcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x143ee0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x143ee0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x143ee4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x143EE4u;
    {
        const bool branch_taken_0x143ee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x143ee4) {
            ctx->pc = 0x143EF8u;
            goto label_143ef8;
        }
    }
    ctx->pc = 0x143EECu;
    // 0x143eec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x143eecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143ef0: 0xc050e14  jal         func_143850
    ctx->pc = 0x143EF0u;
    SET_GPR_U32(ctx, 31, 0x143EF8u);
    ctx->pc = 0x143EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143EF0u;
            // 0x143ef4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143850u;
    if (runtime->hasFunction(0x143850u)) {
        auto targetFn = runtime->lookupFunction(0x143850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143EF8u; }
        if (ctx->pc != 0x143EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143850_0x143850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143EF8u; }
        if (ctx->pc != 0x143EF8u) { return; }
    }
    ctx->pc = 0x143EF8u;
label_143ef8:
    // 0x143ef8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x143ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x143efc: 0x8c42a208  lw          $v0, -0x5DF8($v0)
    ctx->pc = 0x143efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943240)));
    // 0x143f00: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x143f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x143f04: 0x5040002b  beql        $v0, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x143F04u;
    {
        const bool branch_taken_0x143f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x143f04) {
            ctx->pc = 0x143F08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x143F04u;
            // 0x143f08: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x143FB4u;
            goto label_143fb4;
        }
    }
    ctx->pc = 0x143F0Cu;
    // 0x143f0c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x143f0cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143f10: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x143f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x143f14: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x143f14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x143f18: 0x86480000  lh          $t0, 0x0($s2)
    ctx->pc = 0x143f18u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x143f1c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x143f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x143f20: 0x3444ff00  ori         $a0, $v0, 0xFF00
    ctx->pc = 0x143f20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x143f24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x143f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143f28: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x143f28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x143f2c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x143f2cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143f30: 0x0  nop
    ctx->pc = 0x143f30u;
    // NOP
    // 0x143f34: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x143f34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x143f38: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x143f38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x143f3c: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x143f3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x143f40: 0xc6410090  lwc1        $f1, 0x90($s2)
    ctx->pc = 0x143f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x143f44: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x143f44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x143f48: 0x0  nop
    ctx->pc = 0x143f48u;
    // NOP
    // 0x143f4c: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x143f4cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x143f50: 0x4601201c  madd.s      $f0, $f4, $f1
    ctx->pc = 0x143f50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
    // 0x143f54: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x143f54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x143f58: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x143f58u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x143f5c: 0x4601201c  madd.s      $f0, $f4, $f1
    ctx->pc = 0x143f5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
    // 0x143f60: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x143f60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x143f64: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x143f64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x143f68: 0x86420002  lh          $v0, 0x2($s2)
    ctx->pc = 0x143f68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x143f6c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x143f6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x143f70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x143f70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143f74: 0x0  nop
    ctx->pc = 0x143f74u;
    // NOP
    // 0x143f78: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x143f78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x143f7c: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x143f7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x143f80: 0xc6410094  lwc1        $f1, 0x94($s2)
    ctx->pc = 0x143f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x143f84: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x143f84u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x143f88: 0x4601201c  madd.s      $f0, $f4, $f1
    ctx->pc = 0x143f88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
    // 0x143f8c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x143f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x143f90: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x143f90u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x143f94: 0x4601201c  madd.s      $f0, $f4, $f1
    ctx->pc = 0x143f94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
    // 0x143f98: 0xe7a2005c  swc1        $f2, 0x5C($sp)
    ctx->pc = 0x143f98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x143f9c: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x143f9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x143fa0: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x143fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x143fa4: 0xc64d0004  lwc1        $f13, 0x4($s2)
    ctx->pc = 0x143fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x143fa8: 0xc0c11b8  jal         func_3046E0
    ctx->pc = 0x143FA8u;
    SET_GPR_U32(ctx, 31, 0x143FB0u);
    ctx->pc = 0x143FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143FA8u;
            // 0x143fac: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3046E0u;
    if (runtime->hasFunction(0x3046E0u)) {
        auto targetFn = runtime->lookupFunction(0x3046E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143FB0u; }
        if (ctx->pc != 0x143FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003046E0_0x3046e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143FB0u; }
        if (ctx->pc != 0x143FB0u) { return; }
    }
    ctx->pc = 0x143FB0u;
label_143fb0:
    // 0x143fb0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x143fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_143fb4:
    // 0x143fb4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x143fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x143fb8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x143fb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x143fbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x143fbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143fc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x143fc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x143FC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143FC4u;
            // 0x143fc8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x143FCCu;
    // 0x143fcc: 0x0  nop
    ctx->pc = 0x143fccu;
    // NOP
label_143fd0:
    // 0x143fd0: 0xa4a00400  sh          $zero, 0x400($a1)
    ctx->pc = 0x143fd0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1024), (uint16_t)GPR_U32(ctx, 0));
    // 0x143fd4: 0x3e00008  jr          $ra
    ctx->pc = 0x143FD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143FD4u;
            // 0x143fd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x143FDCu;
    // 0x143fdc: 0x0  nop
    ctx->pc = 0x143fdcu;
    // NOP
label_143fe0:
    // 0x143fe0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x143fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x143fe4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x143fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x143fe8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x143fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x143fec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x143fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x143ff0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x143ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x143ff4: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x143ff4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x143ff8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x143FF8u;
    {
        const bool branch_taken_0x143ff8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x143FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143FF8u;
            // 0x143ffc: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143ff8) {
            ctx->pc = 0x14400Cu;
            goto label_14400c;
        }
    }
    ctx->pc = 0x144000u;
    // 0x144000: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x144000u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144004: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x144004u;
    {
        const bool branch_taken_0x144004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144004u;
            // 0x144008: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x144004) {
            ctx->pc = 0x144028u;
            goto label_144028;
        }
    }
    ctx->pc = 0x14400Cu;
label_14400c:
    // 0x14400c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x14400cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x144010: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x144010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x144014: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x144014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x144018: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x144018u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14401c: 0x0  nop
    ctx->pc = 0x14401cu;
    // NOP
    // 0x144020: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x144020u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x144024: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x144024u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_144028:
    // 0x144028: 0xc6400090  lwc1        $f0, 0x90($s2)
    ctx->pc = 0x144028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14402c: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x14402cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x144030: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x144030u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x144034: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x144034u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x144038: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x144038u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14403c: 0x0  nop
    ctx->pc = 0x14403cu;
    // NOP
    // 0x144040: 0x38c3c  dsll32      $s1, $v1, 16
    ctx->pc = 0x144040u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 16));
    // 0x144044: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x144044u;
    {
        const bool branch_taken_0x144044 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x144048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144044u;
            // 0x144048: 0x118c3f  dsra32      $s1, $s1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144044) {
            ctx->pc = 0x144058u;
            goto label_144058;
        }
    }
    ctx->pc = 0x14404Cu;
    // 0x14404c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14404cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144050: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x144050u;
    {
        const bool branch_taken_0x144050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144050u;
            // 0x144054: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x144050) {
            ctx->pc = 0x144074u;
            goto label_144074;
        }
    }
    ctx->pc = 0x144058u;
label_144058:
    // 0x144058: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x144058u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x14405c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14405cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x144060: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x144060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x144064: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x144064u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144068: 0x0  nop
    ctx->pc = 0x144068u;
    // NOP
    // 0x14406c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x14406cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x144070: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x144070u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_144074:
    // 0x144074: 0xc6400094  lwc1        $f0, 0x94($s2)
    ctx->pc = 0x144074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144078: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x144078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14407c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x14407cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x144080: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x144080u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x144084: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x144084u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x144088: 0x0  nop
    ctx->pc = 0x144088u;
    // NOP
    // 0x14408c: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x14408cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x144090: 0xc05089c  jal         func_142270
    ctx->pc = 0x144090u;
    SET_GPR_U32(ctx, 31, 0x144098u);
    ctx->pc = 0x144094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144090u;
            // 0x144094: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142270u;
    if (runtime->hasFunction(0x142270u)) {
        auto targetFn = runtime->lookupFunction(0x142270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144098u; }
        if (ctx->pc != 0x144098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00142270_0x142270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144098u; }
        if (ctx->pc != 0x144098u) { return; }
    }
    ctx->pc = 0x144098u;
label_144098:
    // 0x144098: 0x9043008c  lbu         $v1, 0x8C($v0)
    ctx->pc = 0x144098u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x14409c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x14409cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1440a0: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1440A0u;
    {
        const bool branch_taken_0x1440a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1440a0) {
            ctx->pc = 0x1440A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1440A0u;
            // 0x1440a4: 0x8e4403f0  lw          $a0, 0x3F0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1008)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1440CCu;
            goto label_1440cc;
        }
    }
    ctx->pc = 0x1440A8u;
    // 0x1440a8: 0x8e4403f0  lw          $a0, 0x3F0($s2)
    ctx->pc = 0x1440a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1008)));
    // 0x1440ac: 0x112c3c  dsll32      $a1, $s1, 16
    ctx->pc = 0x1440acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 16));
    // 0x1440b0: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x1440b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1440b4: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1440b4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1440b8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1440b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1440bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1440bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1440c0: 0xa6430000  sh          $v1, 0x0($s2)
    ctx->pc = 0x1440c0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1440c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1440C4u;
    {
        const bool branch_taken_0x1440c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1440C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1440C4u;
            // 0x1440c8: 0xae400048  sw          $zero, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1440c4) {
            ctx->pc = 0x1440E8u;
            goto label_1440e8;
        }
    }
    ctx->pc = 0x1440CCu;
label_1440cc:
    // 0x1440cc: 0x112c3c  dsll32      $a1, $s1, 16
    ctx->pc = 0x1440ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 16));
    // 0x1440d0: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x1440d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1440d4: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1440d4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1440d8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1440d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1440dc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1440dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1440e0: 0xa6430000  sh          $v1, 0x0($s2)
    ctx->pc = 0x1440e0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1440e4: 0xae400048  sw          $zero, 0x48($s2)
    ctx->pc = 0x1440e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
label_1440e8:
    // 0x1440e8: 0x9043008c  lbu         $v1, 0x8C($v0)
    ctx->pc = 0x1440e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x1440ec: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1440ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1440f0: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1440F0u;
    {
        const bool branch_taken_0x1440f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1440f0) {
            ctx->pc = 0x1440F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1440F0u;
            // 0x1440f4: 0x84440002  lh          $a0, 0x2($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14411Cu;
            goto label_14411c;
        }
    }
    ctx->pc = 0x1440F8u;
    // 0x1440f8: 0x84440002  lh          $a0, 0x2($v0)
    ctx->pc = 0x1440f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1440fc: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x1440fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x144100: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x144100u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x144104: 0x8e4203f4  lw          $v0, 0x3F4($s2)
    ctx->pc = 0x144104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1012)));
    // 0x144108: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x144108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14410c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x14410cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x144110: 0xa6420002  sh          $v0, 0x2($s2)
    ctx->pc = 0x144110u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x144114: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x144114u;
    {
        const bool branch_taken_0x144114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144114u;
            // 0x144118: 0xae40004c  sw          $zero, 0x4C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144114) {
            ctx->pc = 0x144138u;
            goto label_144138;
        }
    }
    ctx->pc = 0x14411Cu;
label_14411c:
    // 0x14411c: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x14411cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x144120: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x144120u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x144124: 0x8e4203f4  lw          $v0, 0x3F4($s2)
    ctx->pc = 0x144124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1012)));
    // 0x144128: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x144128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14412c: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x14412cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x144130: 0xa6420002  sh          $v0, 0x2($s2)
    ctx->pc = 0x144130u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x144134: 0xae40004c  sw          $zero, 0x4C($s2)
    ctx->pc = 0x144134u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 0));
label_144138:
    // 0x144138: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x144138u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14413c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14413cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x144140: 0xa643003c  sh          $v1, 0x3C($s2)
    ctx->pc = 0x144140u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 60), (uint16_t)GPR_U32(ctx, 3));
    // 0x144144: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x144144u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x144148: 0xa643003e  sh          $v1, 0x3E($s2)
    ctx->pc = 0x144148u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 62), (uint16_t)GPR_U32(ctx, 3));
    // 0x14414c: 0x92430438  lbu         $v1, 0x438($s2)
    ctx->pc = 0x14414cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1080)));
    // 0x144150: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x144150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x144154: 0xa2430438  sb          $v1, 0x438($s2)
    ctx->pc = 0x144154u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1080), (uint8_t)GPR_U32(ctx, 3));
    // 0x144158: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x144158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14415c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14415cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x144160: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x144160u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144164: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x144164u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144168: 0x3e00008  jr          $ra
    ctx->pc = 0x144168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14416Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144168u;
            // 0x14416c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x144170u;
label_144170:
    // 0x144170: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x144170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x144174: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x144174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x144178: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x144178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14417c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14417cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x144180: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x144180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x144184: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x144184u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x144188: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x144188u;
    {
        const bool branch_taken_0x144188 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x14418Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144188u;
            // 0x14418c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144188) {
            ctx->pc = 0x14419Cu;
            goto label_14419c;
        }
    }
    ctx->pc = 0x144190u;
    // 0x144190: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x144190u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144194: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x144194u;
    {
        const bool branch_taken_0x144194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144194u;
            // 0x144198: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x144194) {
            ctx->pc = 0x1441B8u;
            goto label_1441b8;
        }
    }
    ctx->pc = 0x14419Cu;
label_14419c:
    // 0x14419c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x14419cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1441a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1441a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1441a4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1441a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1441a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1441a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1441ac: 0x0  nop
    ctx->pc = 0x1441acu;
    // NOP
    // 0x1441b0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1441b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1441b4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1441b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1441b8:
    // 0x1441b8: 0xc6400090  lwc1        $f0, 0x90($s2)
    ctx->pc = 0x1441b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1441bc: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x1441bcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1441c0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1441c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1441c4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1441c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1441c8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1441c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1441cc: 0x0  nop
    ctx->pc = 0x1441ccu;
    // NOP
    // 0x1441d0: 0x38c3c  dsll32      $s1, $v1, 16
    ctx->pc = 0x1441d0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1441d4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1441D4u;
    {
        const bool branch_taken_0x1441d4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1441D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1441D4u;
            // 0x1441d8: 0x118c3f  dsra32      $s1, $s1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1441d4) {
            ctx->pc = 0x1441E8u;
            goto label_1441e8;
        }
    }
    ctx->pc = 0x1441DCu;
    // 0x1441dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1441dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1441e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1441E0u;
    {
        const bool branch_taken_0x1441e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1441E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1441E0u;
            // 0x1441e4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1441e0) {
            ctx->pc = 0x144204u;
            goto label_144204;
        }
    }
    ctx->pc = 0x1441E8u;
label_1441e8:
    // 0x1441e8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1441e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1441ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1441ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1441f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1441f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1441f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1441f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1441f8: 0x0  nop
    ctx->pc = 0x1441f8u;
    // NOP
    // 0x1441fc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1441fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x144200: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x144200u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_144204:
    // 0x144204: 0xc6400094  lwc1        $f0, 0x94($s2)
    ctx->pc = 0x144204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144208: 0x8e4400dc  lw          $a0, 0xDC($s2)
    ctx->pc = 0x144208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x14420c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x14420cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x144210: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x144210u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x144214: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x144214u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x144218: 0x0  nop
    ctx->pc = 0x144218u;
    // NOP
    // 0x14421c: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x14421cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x144220: 0xc062804  jal         func_18A010
    ctx->pc = 0x144220u;
    SET_GPR_U32(ctx, 31, 0x144228u);
    ctx->pc = 0x144224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144220u;
            // 0x144224: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A010u;
    if (runtime->hasFunction(0x18A010u)) {
        auto targetFn = runtime->lookupFunction(0x18A010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144228u; }
        if (ctx->pc != 0x144228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A010_0x18a010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144228u; }
        if (ctx->pc != 0x144228u) { return; }
    }
    ctx->pc = 0x144228u;
label_144228:
    // 0x144228: 0x9043008c  lbu         $v1, 0x8C($v0)
    ctx->pc = 0x144228u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x14422c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x14422cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x144230: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x144230u;
    {
        const bool branch_taken_0x144230 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x144230) {
            ctx->pc = 0x144234u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x144230u;
            // 0x144234: 0x8e4403f0  lw          $a0, 0x3F0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1008)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14425Cu;
            goto label_14425c;
        }
    }
    ctx->pc = 0x144238u;
    // 0x144238: 0x8e4403f0  lw          $a0, 0x3F0($s2)
    ctx->pc = 0x144238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1008)));
    // 0x14423c: 0x112c3c  dsll32      $a1, $s1, 16
    ctx->pc = 0x14423cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 16));
    // 0x144240: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x144240u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x144244: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x144244u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x144248: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x144248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14424c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14424cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x144250: 0xa6430000  sh          $v1, 0x0($s2)
    ctx->pc = 0x144250u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x144254: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x144254u;
    {
        const bool branch_taken_0x144254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144254u;
            // 0x144258: 0xae400048  sw          $zero, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144254) {
            ctx->pc = 0x144278u;
            goto label_144278;
        }
    }
    ctx->pc = 0x14425Cu;
label_14425c:
    // 0x14425c: 0x112c3c  dsll32      $a1, $s1, 16
    ctx->pc = 0x14425cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 16));
    // 0x144260: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x144260u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x144264: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x144264u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x144268: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x144268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14426c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x14426cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x144270: 0xa6430000  sh          $v1, 0x0($s2)
    ctx->pc = 0x144270u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x144274: 0xae400048  sw          $zero, 0x48($s2)
    ctx->pc = 0x144274u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
label_144278:
    // 0x144278: 0x9043008c  lbu         $v1, 0x8C($v0)
    ctx->pc = 0x144278u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x14427c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x14427cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x144280: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x144280u;
    {
        const bool branch_taken_0x144280 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x144280) {
            ctx->pc = 0x144284u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x144280u;
            // 0x144284: 0x84440002  lh          $a0, 0x2($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1442ACu;
            goto label_1442ac;
        }
    }
    ctx->pc = 0x144288u;
    // 0x144288: 0x84440002  lh          $a0, 0x2($v0)
    ctx->pc = 0x144288u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x14428c: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x14428cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x144290: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x144290u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x144294: 0x8e4203f4  lw          $v0, 0x3F4($s2)
    ctx->pc = 0x144294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1012)));
    // 0x144298: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x144298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14429c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x14429cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1442a0: 0xa6420002  sh          $v0, 0x2($s2)
    ctx->pc = 0x1442a0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1442a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1442A4u;
    {
        const bool branch_taken_0x1442a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1442A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1442A4u;
            // 0x1442a8: 0xae40004c  sw          $zero, 0x4C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1442a4) {
            ctx->pc = 0x1442C8u;
            goto label_1442c8;
        }
    }
    ctx->pc = 0x1442ACu;
label_1442ac:
    // 0x1442ac: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x1442acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1442b0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1442b0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1442b4: 0x8e4203f4  lw          $v0, 0x3F4($s2)
    ctx->pc = 0x1442b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1012)));
    // 0x1442b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1442b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1442bc: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x1442bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1442c0: 0xa6420002  sh          $v0, 0x2($s2)
    ctx->pc = 0x1442c0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1442c4: 0xae40004c  sw          $zero, 0x4C($s2)
    ctx->pc = 0x1442c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 0));
label_1442c8:
    // 0x1442c8: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x1442c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1442cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1442ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1442d0: 0xa643003c  sh          $v1, 0x3C($s2)
    ctx->pc = 0x1442d0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 60), (uint16_t)GPR_U32(ctx, 3));
    // 0x1442d4: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x1442d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x1442d8: 0xa643003e  sh          $v1, 0x3E($s2)
    ctx->pc = 0x1442d8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 62), (uint16_t)GPR_U32(ctx, 3));
    // 0x1442dc: 0x92430438  lbu         $v1, 0x438($s2)
    ctx->pc = 0x1442dcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1080)));
    // 0x1442e0: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x1442e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x1442e4: 0xa2430438  sb          $v1, 0x438($s2)
    ctx->pc = 0x1442e4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1080), (uint8_t)GPR_U32(ctx, 3));
    // 0x1442e8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1442e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1442ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1442ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1442f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1442f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1442f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1442f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1442f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1442F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1442FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1442F8u;
            // 0x1442fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x144300u;
label_144300:
    // 0x144300: 0x90a30438  lbu         $v1, 0x438($a1)
    ctx->pc = 0x144300u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1080)));
    // 0x144304: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x144304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x144308: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x144308u;
    {
        const bool branch_taken_0x144308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x144308) {
            ctx->pc = 0x14430Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x144308u;
            // 0x14430c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14431Cu;
            goto label_14431c;
        }
    }
    ctx->pc = 0x144310u;
    // 0x144310: 0x34620040  ori         $v0, $v1, 0x40
    ctx->pc = 0x144310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x144314: 0xa0a20438  sb          $v0, 0x438($a1)
    ctx->pc = 0x144314u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1080), (uint8_t)GPR_U32(ctx, 2));
    // 0x144318: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x144318u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14431c:
    // 0x14431c: 0x3e00008  jr          $ra
    ctx->pc = 0x14431Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x144324u;
    // 0x144324: 0x0  nop
    ctx->pc = 0x144324u;
    // NOP
    // 0x144328: 0x0  nop
    ctx->pc = 0x144328u;
    // NOP
    // 0x14432c: 0x0  nop
    ctx->pc = 0x14432cu;
    // NOP
label_144330:
    // 0x144330: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x144330u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x144334: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x144334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x144338: 0xa4a3042e  sh          $v1, 0x42E($a1)
    ctx->pc = 0x144338u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1070), (uint16_t)GPR_U32(ctx, 3));
    // 0x14433c: 0x94a3042e  lhu         $v1, 0x42E($a1)
    ctx->pc = 0x14433cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 1070)));
    // 0x144340: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x144340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x144344: 0x3e00008  jr          $ra
    ctx->pc = 0x144344u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144344u;
            // 0x144348: 0xa4a3042e  sh          $v1, 0x42E($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 1070), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14434Cu;
    // 0x14434c: 0x0  nop
    ctx->pc = 0x14434cu;
    // NOP
label_144350:
    // 0x144350: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x144350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x144354: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x144354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x144358: 0x90a20438  lbu         $v0, 0x438($a1)
    ctx->pc = 0x144358u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1080)));
    // 0x14435c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x14435cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x144360: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x144360u;
    {
        const bool branch_taken_0x144360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x144360) {
            ctx->pc = 0x144364u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x144360u;
            // 0x144364: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14437Cu;
            goto label_14437c;
        }
    }
    ctx->pc = 0x144368u;
    // 0x144368: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x144368u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14436c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x14436cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144370: 0xc050e20  jal         func_143880
    ctx->pc = 0x144370u;
    SET_GPR_U32(ctx, 31, 0x144378u);
    ctx->pc = 0x144374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144370u;
            // 0x144374: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143880u;
    if (runtime->hasFunction(0x143880u)) {
        auto targetFn = runtime->lookupFunction(0x143880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144378u; }
        if (ctx->pc != 0x144378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143880_0x143880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144378u; }
        if (ctx->pc != 0x144378u) { return; }
    }
    ctx->pc = 0x144378u;
label_144378:
    // 0x144378: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x144378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14437c:
    // 0x14437c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14437cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x144380: 0x3e00008  jr          $ra
    ctx->pc = 0x144380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144380u;
            // 0x144384: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x144388u;
    // 0x144388: 0x0  nop
    ctx->pc = 0x144388u;
    // NOP
    // 0x14438c: 0x0  nop
    ctx->pc = 0x14438cu;
    // NOP
label_144390:
    // 0x144390: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x144390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x144394: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x144394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x144398: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x144398u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14439c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x14439cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1443a0: 0xc050e20  jal         func_143880
    ctx->pc = 0x1443A0u;
    SET_GPR_U32(ctx, 31, 0x1443A8u);
    ctx->pc = 0x1443A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1443A0u;
            // 0x1443a4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143880u;
    if (runtime->hasFunction(0x143880u)) {
        auto targetFn = runtime->lookupFunction(0x143880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1443A8u; }
        if (ctx->pc != 0x1443A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143880_0x143880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1443A8u; }
        if (ctx->pc != 0x1443A8u) { return; }
    }
    ctx->pc = 0x1443A8u;
label_1443a8:
    // 0x1443a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1443a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1443ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1443acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1443b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1443B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1443B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1443B0u;
            // 0x1443b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1443B8u;
    // 0x1443b8: 0x0  nop
    ctx->pc = 0x1443b8u;
    // NOP
    // 0x1443bc: 0x0  nop
    ctx->pc = 0x1443bcu;
    // NOP
label_1443c0:
    // 0x1443c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1443c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1443c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1443c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1443c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1443c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1443cc: 0x90a20438  lbu         $v0, 0x438($a1)
    ctx->pc = 0x1443ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1080)));
    // 0x1443d0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1443d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1443d4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1443D4u;
    {
        const bool branch_taken_0x1443d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1443D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1443D4u;
            // 0x1443d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1443d4) {
            ctx->pc = 0x144404u;
            goto label_144404;
        }
    }
    ctx->pc = 0x1443DCu;
    // 0x1443dc: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x1443dcu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1443e0: 0x94860002  lhu         $a2, 0x2($a0)
    ctx->pc = 0x1443e0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1443e4: 0x94870004  lhu         $a3, 0x4($a0)
    ctx->pc = 0x1443e4u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1443e8: 0x94880006  lhu         $t0, 0x6($a0)
    ctx->pc = 0x1443e8u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x1443ec: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x1443ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x1443f0: 0xc0587d0  jal         func_161F40
    ctx->pc = 0x1443F0u;
    SET_GPR_U32(ctx, 31, 0x1443F8u);
    ctx->pc = 0x1443F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1443F0u;
            // 0x1443f4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161F40u;
    if (runtime->hasFunction(0x161F40u)) {
        auto targetFn = runtime->lookupFunction(0x161F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1443F8u; }
        if (ctx->pc != 0x1443F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00161F40_0x161f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1443F8u; }
        if (ctx->pc != 0x1443F8u) { return; }
    }
    ctx->pc = 0x1443F8u;
label_1443f8:
    // 0x1443f8: 0x8e020498  lw          $v0, 0x498($s0)
    ctx->pc = 0x1443f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1176)));
    // 0x1443fc: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x1443fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x144400: 0xae020498  sw          $v0, 0x498($s0)
    ctx->pc = 0x144400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1176), GPR_U32(ctx, 2));
label_144404:
    // 0x144404: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x144404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144408: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x144408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14440c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14440cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144410: 0x3e00008  jr          $ra
    ctx->pc = 0x144410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144410u;
            // 0x144414: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x144418u;
    // 0x144418: 0x0  nop
    ctx->pc = 0x144418u;
    // NOP
    // 0x14441c: 0x0  nop
    ctx->pc = 0x14441cu;
    // NOP
label_144420:
    // 0x144420: 0x8ca40498  lw          $a0, 0x498($a1)
    ctx->pc = 0x144420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1176)));
    // 0x144424: 0x2403fdff  addiu       $v1, $zero, -0x201
    ctx->pc = 0x144424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x144428: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x144428u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14442c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x14442cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x144430: 0x3e00008  jr          $ra
    ctx->pc = 0x144430u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144430u;
            // 0x144434: 0xaca30498  sw          $v1, 0x498($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 1176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x144438u;
    // 0x144438: 0x0  nop
    ctx->pc = 0x144438u;
    // NOP
    // 0x14443c: 0x0  nop
    ctx->pc = 0x14443cu;
    // NOP
label_144440:
    // 0x144440: 0x94a303a4  lhu         $v1, 0x3A4($a1)
    ctx->pc = 0x144440u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 932)));
    // 0x144444: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x144444u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144448: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x144448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x14444c: 0x3e00008  jr          $ra
    ctx->pc = 0x14444Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14444Cu;
            // 0x144450: 0xa4a303a4  sh          $v1, 0x3A4($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 932), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x144454u;
    // 0x144454: 0x0  nop
    ctx->pc = 0x144454u;
    // NOP
    // 0x144458: 0x0  nop
    ctx->pc = 0x144458u;
    // NOP
    // 0x14445c: 0x0  nop
    ctx->pc = 0x14445cu;
    // NOP
label_144460:
    // 0x144460: 0x94a303a4  lhu         $v1, 0x3A4($a1)
    ctx->pc = 0x144460u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 932)));
    // 0x144464: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x144464u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144468: 0x3063ffef  andi        $v1, $v1, 0xFFEF
    ctx->pc = 0x144468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65519);
    // 0x14446c: 0x3e00008  jr          $ra
    ctx->pc = 0x14446Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14446Cu;
            // 0x144470: 0xa4a303a4  sh          $v1, 0x3A4($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 932), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x144474u;
    // 0x144474: 0x0  nop
    ctx->pc = 0x144474u;
    // NOP
    // 0x144478: 0x0  nop
    ctx->pc = 0x144478u;
    // NOP
    // 0x14447c: 0x0  nop
    ctx->pc = 0x14447cu;
    // NOP
label_144480:
    // 0x144480: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x144480u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x144484: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x144484u;
    {
        const bool branch_taken_0x144484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x144484) {
            ctx->pc = 0x144488u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x144484u;
            // 0x144488: 0xa0a003e9  sb          $zero, 0x3E9($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 1001), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1444A0u;
            goto label_1444a0;
        }
    }
    ctx->pc = 0x14448Cu;
    // 0x14448c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x14448cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x144490: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x144490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x144494: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x144494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x144498: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x144498u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x14449c: 0xa0a203e9  sb          $v0, 0x3E9($a1)
    ctx->pc = 0x14449cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1001), (uint8_t)GPR_U32(ctx, 2));
label_1444a0:
    // 0x1444a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1444A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1444A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1444A0u;
            // 0x1444a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1444A8u;
    // 0x1444a8: 0x0  nop
    ctx->pc = 0x1444a8u;
    // NOP
    // 0x1444ac: 0x0  nop
    ctx->pc = 0x1444acu;
    // NOP
label_1444b0:
    // 0x1444b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1444B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1444B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1444B0u;
            // 0x1444b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1444B8u;
    // 0x1444b8: 0x0  nop
    ctx->pc = 0x1444b8u;
    // NOP
    // 0x1444bc: 0x0  nop
    ctx->pc = 0x1444bcu;
    // NOP
label_1444c0:
    // 0x1444c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1444c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1444c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1444c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1444c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1444c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1444cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1444ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1444d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1444d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1444d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1444d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1444d8: 0x94930002  lhu         $s3, 0x2($a0)
    ctx->pc = 0x1444d8u;
    SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1444dc: 0x94900000  lhu         $s0, 0x0($a0)
    ctx->pc = 0x1444dcu;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1444e0: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1444E0u;
    {
        const bool branch_taken_0x1444e0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1444E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1444E0u;
            // 0x1444e4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1444e0) {
            ctx->pc = 0x1444F0u;
            goto label_1444f0;
        }
    }
    ctx->pc = 0x1444E8u;
    // 0x1444e8: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x1444e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1444ec: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x1444ecu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1444f0:
    // 0x1444f0: 0x26320268  addiu       $s2, $s1, 0x268
    ctx->pc = 0x1444f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 616));
    // 0x1444f4: 0xc058068  jal         func_1601A0
    ctx->pc = 0x1444F4u;
    SET_GPR_U32(ctx, 31, 0x1444FCu);
    ctx->pc = 0x1444F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1444F4u;
            // 0x1444f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1601A0u;
    if (runtime->hasFunction(0x1601A0u)) {
        auto targetFn = runtime->lookupFunction(0x1601A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1444FCu; }
        if (ctx->pc != 0x1444FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001601A0_0x1601a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1444FCu; }
        if (ctx->pc != 0x1444FCu) { return; }
    }
    ctx->pc = 0x1444FCu;
label_1444fc:
    // 0x1444fc: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1444FCu;
    {
        const bool branch_taken_0x1444fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1444fc) {
            ctx->pc = 0x144500u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1444FCu;
            // 0x144500: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x144528u;
            goto label_144528;
        }
    }
    ctx->pc = 0x144504u;
    // 0x144504: 0x92420013  lbu         $v0, 0x13($s2)
    ctx->pc = 0x144504u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 19)));
    // 0x144508: 0x3263ffff  andi        $v1, $s3, 0xFFFF
    ctx->pc = 0x144508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x14450c: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x14450cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x144510: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x144510u;
    {
        const bool branch_taken_0x144510 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x144510) {
            ctx->pc = 0x144524u;
            goto label_144524;
        }
    }
    ctx->pc = 0x144518u;
    // 0x144518: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x144518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14451c: 0xc050e14  jal         func_143850
    ctx->pc = 0x14451Cu;
    SET_GPR_U32(ctx, 31, 0x144524u);
    ctx->pc = 0x144520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14451Cu;
            // 0x144520: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143850u;
    if (runtime->hasFunction(0x143850u)) {
        auto targetFn = runtime->lookupFunction(0x143850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144524u; }
        if (ctx->pc != 0x144524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143850_0x143850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144524u; }
        if (ctx->pc != 0x144524u) { return; }
    }
    ctx->pc = 0x144524u;
label_144524:
    // 0x144524: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x144524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_144528:
    // 0x144528: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x144528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14452c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14452cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x144530: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x144530u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x144534: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x144534u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144538: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x144538u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14453c: 0x3e00008  jr          $ra
    ctx->pc = 0x14453Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14453Cu;
            // 0x144540: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x144544u;
    // 0x144544: 0x0  nop
    ctx->pc = 0x144544u;
    // NOP
    // 0x144548: 0x0  nop
    ctx->pc = 0x144548u;
    // NOP
    // 0x14454c: 0x0  nop
    ctx->pc = 0x14454cu;
    // NOP
label_144550:
    // 0x144550: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x144550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x144554: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x144554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x144558: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x144558u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x14455c: 0x90a30281  lbu         $v1, 0x281($a1)
    ctx->pc = 0x14455cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 641)));
    // 0x144560: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x144560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x144564: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x144564u;
    {
        const bool branch_taken_0x144564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x144568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144564u;
            // 0x144568: 0x94860000  lhu         $a2, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144564) {
            ctx->pc = 0x144578u;
            goto label_144578;
        }
    }
    ctx->pc = 0x14456Cu;
    // 0x14456c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x14456cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144570: 0xc050e14  jal         func_143850
    ctx->pc = 0x144570u;
    SET_GPR_U32(ctx, 31, 0x144578u);
    ctx->pc = 0x144574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144570u;
            // 0x144574: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143850u;
    if (runtime->hasFunction(0x143850u)) {
        auto targetFn = runtime->lookupFunction(0x143850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144578u; }
        if (ctx->pc != 0x144578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143850_0x143850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144578u; }
        if (ctx->pc != 0x144578u) { return; }
    }
    ctx->pc = 0x144578u;
label_144578:
    // 0x144578: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x144578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14457c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14457cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x144580: 0x3e00008  jr          $ra
    ctx->pc = 0x144580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144580u;
            // 0x144584: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x144588u;
    // 0x144588: 0x0  nop
    ctx->pc = 0x144588u;
    // NOP
    // 0x14458c: 0x0  nop
    ctx->pc = 0x14458cu;
    // NOP
label_144590:
    // 0x144590: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x144590u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x144594: 0xa4a20442  sh          $v0, 0x442($a1)
    ctx->pc = 0x144594u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1090), (uint16_t)GPR_U32(ctx, 2));
    // 0x144598: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x144598u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x14459c: 0xa4a20444  sh          $v0, 0x444($a1)
    ctx->pc = 0x14459cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1092), (uint16_t)GPR_U32(ctx, 2));
    // 0x1445a0: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x1445a0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1445a4: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1445A4u;
    {
        const bool branch_taken_0x1445a4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1445a4) {
            ctx->pc = 0x1445A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1445A4u;
            // 0x1445a8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1445B8u;
            goto label_1445b8;
        }
    }
    ctx->pc = 0x1445ACu;
    // 0x1445ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1445acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1445b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1445B0u;
    {
        const bool branch_taken_0x1445b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1445B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1445B0u;
            // 0x1445b4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1445b0) {
            ctx->pc = 0x1445D0u;
            goto label_1445d0;
        }
    }
    ctx->pc = 0x1445B8u;
label_1445b8:
    // 0x1445b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1445b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1445bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1445bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1445c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1445c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1445c4: 0x0  nop
    ctx->pc = 0x1445c4u;
    // NOP
    // 0x1445c8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1445c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1445cc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1445ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1445d0:
    // 0x1445d0: 0xc4a00094  lwc1        $f0, 0x94($a1)
    ctx->pc = 0x1445d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1445d4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1445d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1445d8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1445d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1445dc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1445dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1445e0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1445e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1445e4: 0x0  nop
    ctx->pc = 0x1445e4u;
    // NOP
    // 0x1445e8: 0xa4a30446  sh          $v1, 0x446($a1)
    ctx->pc = 0x1445e8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1094), (uint16_t)GPR_U32(ctx, 3));
    // 0x1445ec: 0x94a3046c  lhu         $v1, 0x46C($a1)
    ctx->pc = 0x1445ecu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 1132)));
    // 0x1445f0: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x1445f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x1445f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1445F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1445F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1445F4u;
            // 0x1445f8: 0xa4a3046c  sh          $v1, 0x46C($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 1132), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1445FCu;
    // 0x1445fc: 0x0  nop
    ctx->pc = 0x1445fcu;
    // NOP
label_144600:
    // 0x144600: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x144600u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x144604: 0xa4a2045a  sh          $v0, 0x45A($a1)
    ctx->pc = 0x144604u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1114), (uint16_t)GPR_U32(ctx, 2));
    // 0x144608: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x144608u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x14460c: 0xa4a2045c  sh          $v0, 0x45C($a1)
    ctx->pc = 0x14460cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1116), (uint16_t)GPR_U32(ctx, 2));
    // 0x144610: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x144610u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x144614: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x144614u;
    {
        const bool branch_taken_0x144614 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x144614) {
            ctx->pc = 0x144618u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x144614u;
            // 0x144618: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x144628u;
            goto label_144628;
        }
    }
    ctx->pc = 0x14461Cu;
    // 0x14461c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14461cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144620: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x144620u;
    {
        const bool branch_taken_0x144620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144620u;
            // 0x144624: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x144620) {
            ctx->pc = 0x144640u;
            goto label_144640;
        }
    }
    ctx->pc = 0x144628u;
label_144628:
    // 0x144628: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x144628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x14462c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14462cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x144630: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x144630u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144634: 0x0  nop
    ctx->pc = 0x144634u;
    // NOP
    // 0x144638: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x144638u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x14463c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x14463cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_144640:
    // 0x144640: 0xc4a00094  lwc1        $f0, 0x94($a1)
    ctx->pc = 0x144640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144644: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x144644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x144648: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x144648u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x14464c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14464cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x144650: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x144650u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x144654: 0x0  nop
    ctx->pc = 0x144654u;
    // NOP
    // 0x144658: 0xa4a3045e  sh          $v1, 0x45E($a1)
    ctx->pc = 0x144658u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1118), (uint16_t)GPR_U32(ctx, 3));
    // 0x14465c: 0x94a3046c  lhu         $v1, 0x46C($a1)
    ctx->pc = 0x14465cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 1132)));
    // 0x144660: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x144660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x144664: 0x3e00008  jr          $ra
    ctx->pc = 0x144664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144664u;
            // 0x144668: 0xa4a3046c  sh          $v1, 0x46C($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 1132), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14466Cu;
    // 0x14466c: 0x0  nop
    ctx->pc = 0x14466cu;
    // NOP
label_144670:
    // 0x144670: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x144670u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x144674: 0xa4a2044e  sh          $v0, 0x44E($a1)
    ctx->pc = 0x144674u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1102), (uint16_t)GPR_U32(ctx, 2));
    // 0x144678: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x144678u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x14467c: 0xa4a20450  sh          $v0, 0x450($a1)
    ctx->pc = 0x14467cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1104), (uint16_t)GPR_U32(ctx, 2));
    // 0x144680: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x144680u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x144684: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x144684u;
    {
        const bool branch_taken_0x144684 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x144684) {
            ctx->pc = 0x144688u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x144684u;
            // 0x144688: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x144698u;
            goto label_144698;
        }
    }
    ctx->pc = 0x14468Cu;
    // 0x14468c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14468cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144690: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x144690u;
    {
        const bool branch_taken_0x144690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144690u;
            // 0x144694: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x144690) {
            ctx->pc = 0x1446B0u;
            goto label_1446b0;
        }
    }
    ctx->pc = 0x144698u;
label_144698:
    // 0x144698: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x144698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x14469c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14469cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1446a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1446a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1446a4: 0x0  nop
    ctx->pc = 0x1446a4u;
    // NOP
    // 0x1446a8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1446a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1446ac: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1446acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1446b0:
    // 0x1446b0: 0xc4a00094  lwc1        $f0, 0x94($a1)
    ctx->pc = 0x1446b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1446b4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1446b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1446b8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1446b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1446bc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1446bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1446c0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1446c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1446c4: 0x0  nop
    ctx->pc = 0x1446c4u;
    // NOP
    // 0x1446c8: 0xa4a30452  sh          $v1, 0x452($a1)
    ctx->pc = 0x1446c8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1106), (uint16_t)GPR_U32(ctx, 3));
    // 0x1446cc: 0x94a3046c  lhu         $v1, 0x46C($a1)
    ctx->pc = 0x1446ccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 1132)));
    // 0x1446d0: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x1446d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x1446d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1446D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1446D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1446D4u;
            // 0x1446d8: 0xa4a3046c  sh          $v1, 0x46C($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 1132), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1446DCu;
    // 0x1446dc: 0x0  nop
    ctx->pc = 0x1446dcu;
    // NOP
label_1446e0:
    // 0x1446e0: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x1446e0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1446e4: 0xa4a20466  sh          $v0, 0x466($a1)
    ctx->pc = 0x1446e4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1126), (uint16_t)GPR_U32(ctx, 2));
    // 0x1446e8: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x1446e8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1446ec: 0xa4a20468  sh          $v0, 0x468($a1)
    ctx->pc = 0x1446ecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1128), (uint16_t)GPR_U32(ctx, 2));
    // 0x1446f0: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x1446f0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1446f4: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1446F4u;
    {
        const bool branch_taken_0x1446f4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1446f4) {
            ctx->pc = 0x1446F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1446F4u;
            // 0x1446f8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x144708u;
            goto label_144708;
        }
    }
    ctx->pc = 0x1446FCu;
    // 0x1446fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1446fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144700: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x144700u;
    {
        const bool branch_taken_0x144700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144700u;
            // 0x144704: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x144700) {
            ctx->pc = 0x144720u;
            goto label_144720;
        }
    }
    ctx->pc = 0x144708u;
label_144708:
    // 0x144708: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x144708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x14470c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14470cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x144710: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x144710u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144714: 0x0  nop
    ctx->pc = 0x144714u;
    // NOP
    // 0x144718: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x144718u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x14471c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x14471cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_144720:
    // 0x144720: 0xc4a00094  lwc1        $f0, 0x94($a1)
    ctx->pc = 0x144720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144724: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x144724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x144728: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x144728u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x14472c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14472cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x144730: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x144730u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x144734: 0x0  nop
    ctx->pc = 0x144734u;
    // NOP
    // 0x144738: 0xa4a3046a  sh          $v1, 0x46A($a1)
    ctx->pc = 0x144738u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1130), (uint16_t)GPR_U32(ctx, 3));
    // 0x14473c: 0x94a3046c  lhu         $v1, 0x46C($a1)
    ctx->pc = 0x14473cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 1132)));
    // 0x144740: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x144740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x144744: 0x3e00008  jr          $ra
    ctx->pc = 0x144744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144744u;
            // 0x144748: 0xa4a3046c  sh          $v1, 0x46C($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 1132), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14474Cu;
    // 0x14474c: 0x0  nop
    ctx->pc = 0x14474cu;
    // NOP
label_144750:
    // 0x144750: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x144750u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x144754: 0xa4a20448  sh          $v0, 0x448($a1)
    ctx->pc = 0x144754u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1096), (uint16_t)GPR_U32(ctx, 2));
    // 0x144758: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x144758u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x14475c: 0xa4a2044a  sh          $v0, 0x44A($a1)
    ctx->pc = 0x14475cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1098), (uint16_t)GPR_U32(ctx, 2));
    // 0x144760: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x144760u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x144764: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x144764u;
    {
        const bool branch_taken_0x144764 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x144764) {
            ctx->pc = 0x144768u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x144764u;
            // 0x144768: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x144778u;
            goto label_144778;
        }
    }
    ctx->pc = 0x14476Cu;
    // 0x14476c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14476cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144770: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x144770u;
    {
        const bool branch_taken_0x144770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144770u;
            // 0x144774: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x144770) {
            ctx->pc = 0x144790u;
            goto label_144790;
        }
    }
    ctx->pc = 0x144778u;
label_144778:
    // 0x144778: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x144778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x14477c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14477cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x144780: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x144780u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144784: 0x0  nop
    ctx->pc = 0x144784u;
    // NOP
    // 0x144788: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x144788u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x14478c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x14478cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_144790:
    // 0x144790: 0xc4a00094  lwc1        $f0, 0x94($a1)
    ctx->pc = 0x144790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144794: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x144794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x144798: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x144798u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x14479c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14479cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1447a0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1447a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1447a4: 0x0  nop
    ctx->pc = 0x1447a4u;
    // NOP
    // 0x1447a8: 0xa4a3044c  sh          $v1, 0x44C($a1)
    ctx->pc = 0x1447a8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1100), (uint16_t)GPR_U32(ctx, 3));
    // 0x1447ac: 0x94a3046c  lhu         $v1, 0x46C($a1)
    ctx->pc = 0x1447acu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 1132)));
    // 0x1447b0: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x1447b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x1447b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1447B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1447B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1447B4u;
            // 0x1447b8: 0xa4a3046c  sh          $v1, 0x46C($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 1132), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1447BCu;
    // 0x1447bc: 0x0  nop
    ctx->pc = 0x1447bcu;
    // NOP
label_1447c0:
    // 0x1447c0: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x1447c0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1447c4: 0xa4a20460  sh          $v0, 0x460($a1)
    ctx->pc = 0x1447c4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1120), (uint16_t)GPR_U32(ctx, 2));
    // 0x1447c8: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x1447c8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1447cc: 0xa4a20462  sh          $v0, 0x462($a1)
    ctx->pc = 0x1447ccu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1122), (uint16_t)GPR_U32(ctx, 2));
    // 0x1447d0: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x1447d0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1447d4: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1447D4u;
    {
        const bool branch_taken_0x1447d4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1447d4) {
            ctx->pc = 0x1447D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1447D4u;
            // 0x1447d8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1447E8u;
            goto label_1447e8;
        }
    }
    ctx->pc = 0x1447DCu;
    // 0x1447dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1447dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1447e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1447E0u;
    {
        const bool branch_taken_0x1447e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1447E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1447E0u;
            // 0x1447e4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1447e0) {
            ctx->pc = 0x144800u;
            goto label_144800;
        }
    }
    ctx->pc = 0x1447E8u;
label_1447e8:
    // 0x1447e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1447e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1447ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1447ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1447f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1447f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1447f4: 0x0  nop
    ctx->pc = 0x1447f4u;
    // NOP
    // 0x1447f8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1447f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1447fc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1447fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_144800:
    // 0x144800: 0xc4a00094  lwc1        $f0, 0x94($a1)
    ctx->pc = 0x144800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144804: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x144804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x144808: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x144808u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x14480c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14480cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x144810: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x144810u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x144814: 0x0  nop
    ctx->pc = 0x144814u;
    // NOP
    // 0x144818: 0xa4a30464  sh          $v1, 0x464($a1)
    ctx->pc = 0x144818u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1124), (uint16_t)GPR_U32(ctx, 3));
    // 0x14481c: 0x94a3046c  lhu         $v1, 0x46C($a1)
    ctx->pc = 0x14481cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 1132)));
    // 0x144820: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x144820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x144824: 0x3e00008  jr          $ra
    ctx->pc = 0x144824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144824u;
            // 0x144828: 0xa4a3046c  sh          $v1, 0x46C($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 1132), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14482Cu;
    // 0x14482c: 0x0  nop
    ctx->pc = 0x14482cu;
    // NOP
label_144830:
    // 0x144830: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x144830u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x144834: 0xa4a2043c  sh          $v0, 0x43C($a1)
    ctx->pc = 0x144834u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1084), (uint16_t)GPR_U32(ctx, 2));
    // 0x144838: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x144838u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x14483c: 0xa4a2043e  sh          $v0, 0x43E($a1)
    ctx->pc = 0x14483cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1086), (uint16_t)GPR_U32(ctx, 2));
    // 0x144840: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x144840u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x144844: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x144844u;
    {
        const bool branch_taken_0x144844 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x144844) {
            ctx->pc = 0x144848u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x144844u;
            // 0x144848: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x144858u;
            goto label_144858;
        }
    }
    ctx->pc = 0x14484Cu;
    // 0x14484c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14484cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144850: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x144850u;
    {
        const bool branch_taken_0x144850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144850u;
            // 0x144854: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x144850) {
            ctx->pc = 0x144870u;
            goto label_144870;
        }
    }
    ctx->pc = 0x144858u;
label_144858:
    // 0x144858: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x144858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x14485c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14485cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x144860: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x144860u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144864: 0x0  nop
    ctx->pc = 0x144864u;
    // NOP
    // 0x144868: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x144868u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x14486c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x14486cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_144870:
    // 0x144870: 0xc4a00094  lwc1        $f0, 0x94($a1)
    ctx->pc = 0x144870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144874: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x144874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x144878: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x144878u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x14487c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14487cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x144880: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x144880u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x144884: 0x0  nop
    ctx->pc = 0x144884u;
    // NOP
    // 0x144888: 0xa4a30440  sh          $v1, 0x440($a1)
    ctx->pc = 0x144888u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1088), (uint16_t)GPR_U32(ctx, 3));
    // 0x14488c: 0x94a3046c  lhu         $v1, 0x46C($a1)
    ctx->pc = 0x14488cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 1132)));
    // 0x144890: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x144890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x144894: 0x3e00008  jr          $ra
    ctx->pc = 0x144894u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144894u;
            // 0x144898: 0xa4a3046c  sh          $v1, 0x46C($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 1132), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14489Cu;
    // 0x14489c: 0x0  nop
    ctx->pc = 0x14489cu;
    // NOP
label_1448a0:
    // 0x1448a0: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x1448a0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1448a4: 0xa4a20454  sh          $v0, 0x454($a1)
    ctx->pc = 0x1448a4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1108), (uint16_t)GPR_U32(ctx, 2));
    // 0x1448a8: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x1448a8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1448ac: 0xa4a20456  sh          $v0, 0x456($a1)
    ctx->pc = 0x1448acu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1110), (uint16_t)GPR_U32(ctx, 2));
    // 0x1448b0: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x1448b0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1448b4: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1448B4u;
    {
        const bool branch_taken_0x1448b4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1448b4) {
            ctx->pc = 0x1448B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1448B4u;
            // 0x1448b8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1448C8u;
            goto label_1448c8;
        }
    }
    ctx->pc = 0x1448BCu;
    // 0x1448bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1448bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1448c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1448C0u;
    {
        const bool branch_taken_0x1448c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1448C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1448C0u;
            // 0x1448c4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1448c0) {
            ctx->pc = 0x1448E0u;
            goto label_1448e0;
        }
    }
    ctx->pc = 0x1448C8u;
label_1448c8:
    // 0x1448c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1448c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1448cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1448ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1448d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1448d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1448d4: 0x0  nop
    ctx->pc = 0x1448d4u;
    // NOP
    // 0x1448d8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1448d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1448dc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1448dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1448e0:
    // 0x1448e0: 0xc4a00094  lwc1        $f0, 0x94($a1)
    ctx->pc = 0x1448e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1448e4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1448e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1448e8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1448e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1448ec: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1448ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1448f0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1448f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1448f4: 0x0  nop
    ctx->pc = 0x1448f4u;
    // NOP
    // 0x1448f8: 0xa4a30458  sh          $v1, 0x458($a1)
    ctx->pc = 0x1448f8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1112), (uint16_t)GPR_U32(ctx, 3));
    // 0x1448fc: 0x94a3046c  lhu         $v1, 0x46C($a1)
    ctx->pc = 0x1448fcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 1132)));
    // 0x144900: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x144900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x144904: 0x3e00008  jr          $ra
    ctx->pc = 0x144904u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144904u;
            // 0x144908: 0xa4a3046c  sh          $v1, 0x46C($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 1132), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14490Cu;
    // 0x14490c: 0x0  nop
    ctx->pc = 0x14490cu;
    // NOP
label_144910:
    // 0x144910: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x144910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x144914: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x144914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x144918: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x144918u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x14491c: 0x94a30400  lhu         $v1, 0x400($a1)
    ctx->pc = 0x14491cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 1024)));
    // 0x144920: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x144920u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x144924: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x144924u;
    {
        const bool branch_taken_0x144924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x144928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144924u;
            // 0x144928: 0x94860000  lhu         $a2, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144924) {
            ctx->pc = 0x144938u;
            goto label_144938;
        }
    }
    ctx->pc = 0x14492Cu;
    // 0x14492c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x14492cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144930: 0xc050e14  jal         func_143850
    ctx->pc = 0x144930u;
    SET_GPR_U32(ctx, 31, 0x144938u);
    ctx->pc = 0x144934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144930u;
            // 0x144934: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143850u;
    if (runtime->hasFunction(0x143850u)) {
        auto targetFn = runtime->lookupFunction(0x143850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144938u; }
        if (ctx->pc != 0x144938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143850_0x143850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144938u; }
        if (ctx->pc != 0x144938u) { return; }
    }
    ctx->pc = 0x144938u;
label_144938:
    // 0x144938: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x144938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14493c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14493cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x144940: 0x3e00008  jr          $ra
    ctx->pc = 0x144940u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144940u;
            // 0x144944: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x144948u;
    // 0x144948: 0x0  nop
    ctx->pc = 0x144948u;
    // NOP
    // 0x14494c: 0x0  nop
    ctx->pc = 0x14494cu;
    // NOP
label_144950:
    // 0x144950: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x144950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x144954: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x144954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x144958: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x144958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14495c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14495cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x144960: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x144960u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144964: 0x94900000  lhu         $s0, 0x0($a0)
    ctx->pc = 0x144964u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x144968: 0xc05089c  jal         func_142270
    ctx->pc = 0x144968u;
    SET_GPR_U32(ctx, 31, 0x144970u);
    ctx->pc = 0x14496Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144968u;
            // 0x14496c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142270u;
    if (runtime->hasFunction(0x142270u)) {
        auto targetFn = runtime->lookupFunction(0x142270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144970u; }
        if (ctx->pc != 0x144970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00142270_0x142270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144970u; }
        if (ctx->pc != 0x144970u) { return; }
    }
    ctx->pc = 0x144970u;
label_144970:
    // 0x144970: 0x8c420498  lw          $v0, 0x498($v0)
    ctx->pc = 0x144970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1176)));
    // 0x144974: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x144974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x144978: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x144978u;
    {
        const bool branch_taken_0x144978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x144978) {
            ctx->pc = 0x14497Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x144978u;
            // 0x14497c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x144990u;
            goto label_144990;
        }
    }
    ctx->pc = 0x144980u;
    // 0x144980: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x144980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144984: 0xc050e14  jal         func_143850
    ctx->pc = 0x144984u;
    SET_GPR_U32(ctx, 31, 0x14498Cu);
    ctx->pc = 0x144988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144984u;
            // 0x144988: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143850u;
    if (runtime->hasFunction(0x143850u)) {
        auto targetFn = runtime->lookupFunction(0x143850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14498Cu; }
        if (ctx->pc != 0x14498Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143850_0x143850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14498Cu; }
        if (ctx->pc != 0x14498Cu) { return; }
    }
    ctx->pc = 0x14498Cu;
label_14498c:
    // 0x14498c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14498cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_144990:
    // 0x144990: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x144990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x144994: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x144994u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144998: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x144998u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14499c: 0x3e00008  jr          $ra
    ctx->pc = 0x14499Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1449A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14499Cu;
            // 0x1449a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1449A4u;
    // 0x1449a4: 0x0  nop
    ctx->pc = 0x1449a4u;
    // NOP
    // 0x1449a8: 0x0  nop
    ctx->pc = 0x1449a8u;
    // NOP
    // 0x1449ac: 0x0  nop
    ctx->pc = 0x1449acu;
    // NOP
label_1449b0:
    // 0x1449b0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1449b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1449b4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1449b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1449b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1449b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1449bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1449bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1449c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1449c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1449c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1449c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1449c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1449c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1449cc: 0x94820006  lhu         $v0, 0x6($a0)
    ctx->pc = 0x1449ccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x1449d0: 0x94930000  lhu         $s3, 0x0($a0)
    ctx->pc = 0x1449d0u;
    SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1449d4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1449D4u;
    {
        const bool branch_taken_0x1449d4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1449D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1449D4u;
            // 0x1449d8: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1449d4) {
            ctx->pc = 0x1449E8u;
            goto label_1449e8;
        }
    }
    ctx->pc = 0x1449DCu;
    // 0x1449dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1449dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1449e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1449E0u;
    {
        const bool branch_taken_0x1449e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1449E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1449E0u;
            // 0x1449e4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1449e0) {
            ctx->pc = 0x144A04u;
            goto label_144a04;
        }
    }
    ctx->pc = 0x1449E8u;
label_1449e8:
    // 0x1449e8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1449e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1449ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1449ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1449f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1449f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1449f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1449f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1449f8: 0x0  nop
    ctx->pc = 0x1449f8u;
    // NOP
    // 0x1449fc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1449fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x144a00: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x144a00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_144a04:
    // 0x144a04: 0xc6800090  lwc1        $f0, 0x90($s4)
    ctx->pc = 0x144a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144a08: 0x9482000a  lhu         $v0, 0xA($a0)
    ctx->pc = 0x144a08u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x144a0c: 0x94910008  lhu         $s1, 0x8($a0)
    ctx->pc = 0x144a0cu;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x144a10: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x144a10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x144a14: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x144a14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x144a18: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x144a18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x144a1c: 0x0  nop
    ctx->pc = 0x144a1cu;
    // NOP
    // 0x144a20: 0x3943c  dsll32      $s2, $v1, 16
    ctx->pc = 0x144a20u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) << (32 + 16));
    // 0x144a24: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x144A24u;
    {
        const bool branch_taken_0x144a24 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x144A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144A24u;
            // 0x144a28: 0x12943f  dsra32      $s2, $s2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144a24) {
            ctx->pc = 0x144A38u;
            goto label_144a38;
        }
    }
    ctx->pc = 0x144A2Cu;
    // 0x144a2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x144a2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144a30: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x144A30u;
    {
        const bool branch_taken_0x144a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144A30u;
            // 0x144a34: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x144a30) {
            ctx->pc = 0x144A54u;
            goto label_144a54;
        }
    }
    ctx->pc = 0x144A38u;
label_144a38:
    // 0x144a38: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x144a38u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x144a3c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x144a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x144a40: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x144a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x144a44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x144a44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144a48: 0x0  nop
    ctx->pc = 0x144a48u;
    // NOP
    // 0x144a4c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x144a4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x144a50: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x144a50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_144a54:
    // 0x144a54: 0xc6800094  lwc1        $f0, 0x94($s4)
    ctx->pc = 0x144a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144a58: 0x122c3c  dsll32      $a1, $s2, 16
    ctx->pc = 0x144a58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) << (32 + 16));
    // 0x144a5c: 0x86820430  lh          $v0, 0x430($s4)
    ctx->pc = 0x144a5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1072)));
    // 0x144a60: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x144a60u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x144a64: 0x94860004  lhu         $a2, 0x4($a0)
    ctx->pc = 0x144a64u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x144a68: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x144a68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x144a6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x144a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144a70: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x144a70u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x144a74: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x144a74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x144a78: 0x0  nop
    ctx->pc = 0x144a78u;
    // NOP
    // 0x144a7c: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x144a7cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x144a80: 0xc050e30  jal         func_1438C0
    ctx->pc = 0x144A80u;
    SET_GPR_U32(ctx, 31, 0x144A88u);
    ctx->pc = 0x144A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144A80u;
            // 0x144a84: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1438C0u;
    goto label_1438c0;
    ctx->pc = 0x144A88u;
label_144a88:
    // 0x144a88: 0x86840432  lh          $a0, 0x432($s4)
    ctx->pc = 0x144a88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1074)));
    // 0x144a8c: 0x3226ffff  andi        $a2, $s1, 0xFFFF
    ctx->pc = 0x144a8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x144a90: 0x102c3c  dsll32      $a1, $s0, 16
    ctx->pc = 0x144a90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 16));
    // 0x144a94: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x144a94u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x144a98: 0xc050e30  jal         func_1438C0
    ctx->pc = 0x144A98u;
    SET_GPR_U32(ctx, 31, 0x144AA0u);
    ctx->pc = 0x144A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144A98u;
            // 0x144a9c: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1438C0u;
    goto label_1438c0;
    ctx->pc = 0x144AA0u;
label_144aa0:
    // 0x144aa0: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x144AA0u;
    {
        const bool branch_taken_0x144aa0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x144AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144AA0u;
            // 0x144aa4: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x144aa0) {
            ctx->pc = 0x144ABCu;
            goto label_144abc;
        }
    }
    ctx->pc = 0x144AA8u;
    // 0x144aa8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x144AA8u;
    {
        const bool branch_taken_0x144aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x144aa8) {
            ctx->pc = 0x144ABCu;
            goto label_144abc;
        }
    }
    ctx->pc = 0x144AB0u;
    // 0x144ab0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x144ab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144ab4: 0xc050e14  jal         func_143850
    ctx->pc = 0x144AB4u;
    SET_GPR_U32(ctx, 31, 0x144ABCu);
    ctx->pc = 0x144AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144AB4u;
            // 0x144ab8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143850u;
    if (runtime->hasFunction(0x143850u)) {
        auto targetFn = runtime->lookupFunction(0x143850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144ABCu; }
        if (ctx->pc != 0x144ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143850_0x143850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144ABCu; }
        if (ctx->pc != 0x144ABCu) { return; }
    }
    ctx->pc = 0x144ABCu;
label_144abc:
    // 0x144abc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x144abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x144ac0: 0x8c42a208  lw          $v0, -0x5DF8($v0)
    ctx->pc = 0x144ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943240)));
    // 0x144ac4: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x144ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x144ac8: 0x5040002e  beql        $v0, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x144AC8u;
    {
        const bool branch_taken_0x144ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x144ac8) {
            ctx->pc = 0x144ACCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x144AC8u;
            // 0x144acc: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x144B84u;
            goto label_144b84;
        }
    }
    ctx->pc = 0x144AD0u;
    // 0x144ad0: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x144ad0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144ad4: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x144ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x144ad8: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x144ad8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x144adc: 0x86880000  lh          $t0, 0x0($s4)
    ctx->pc = 0x144adcu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x144ae0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x144ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x144ae4: 0x3444ff00  ori         $a0, $v0, 0xFF00
    ctx->pc = 0x144ae4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x144ae8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x144ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144aec: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x144aecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x144af0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x144af0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144af4: 0x0  nop
    ctx->pc = 0x144af4u;
    // NOP
    // 0x144af8: 0x46800160  cvt.s.w     $f5, $f0
    ctx->pc = 0x144af8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x144afc: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x144afcu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144b00: 0x0  nop
    ctx->pc = 0x144b00u;
    // NOP
    // 0x144b04: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x144b04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x144b08: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x144b08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x144b0c: 0x0  nop
    ctx->pc = 0x144b0cu;
    // NOP
    // 0x144b10: 0xe7a50060  swc1        $f5, 0x60($sp)
    ctx->pc = 0x144b10u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x144b14: 0xe7a50068  swc1        $f5, 0x68($sp)
    ctx->pc = 0x144b14u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x144b18: 0xc6810090  lwc1        $f1, 0x90($s4)
    ctx->pc = 0x144b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x144b1c: 0x46052018  adda.s      $f4, $f5
    ctx->pc = 0x144b1cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x144b20: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x144b20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x144b24: 0x4601181c  madd.s      $f0, $f3, $f1
    ctx->pc = 0x144b24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x144b28: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x144b28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x144b2c: 0x46052018  adda.s      $f4, $f5
    ctx->pc = 0x144b2cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x144b30: 0x4601181c  madd.s      $f0, $f3, $f1
    ctx->pc = 0x144b30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x144b34: 0xe7a50080  swc1        $f5, 0x80($sp)
    ctx->pc = 0x144b34u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x144b38: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x144b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x144b3c: 0x86820002  lh          $v0, 0x2($s4)
    ctx->pc = 0x144b3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x144b40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x144b40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144b44: 0x0  nop
    ctx->pc = 0x144b44u;
    // NOP
    // 0x144b48: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x144b48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x144b4c: 0xe7a30064  swc1        $f3, 0x64($sp)
    ctx->pc = 0x144b4cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x144b50: 0xc6810094  lwc1        $f1, 0x94($s4)
    ctx->pc = 0x144b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x144b54: 0x46032018  adda.s      $f4, $f3
    ctx->pc = 0x144b54u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x144b58: 0x4601101c  madd.s      $f0, $f2, $f1
    ctx->pc = 0x144b58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x144b5c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x144b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x144b60: 0x46032018  adda.s      $f4, $f3
    ctx->pc = 0x144b60u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x144b64: 0x4601101c  madd.s      $f0, $f2, $f1
    ctx->pc = 0x144b64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x144b68: 0xe7a3007c  swc1        $f3, 0x7C($sp)
    ctx->pc = 0x144b68u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x144b6c: 0xe7a30084  swc1        $f3, 0x84($sp)
    ctx->pc = 0x144b6cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x144b70: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x144b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x144b74: 0xc68d0004  lwc1        $f13, 0x4($s4)
    ctx->pc = 0x144b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x144b78: 0xc0c11b8  jal         func_3046E0
    ctx->pc = 0x144B78u;
    SET_GPR_U32(ctx, 31, 0x144B80u);
    ctx->pc = 0x144B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144B78u;
            // 0x144b7c: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3046E0u;
    if (runtime->hasFunction(0x3046E0u)) {
        auto targetFn = runtime->lookupFunction(0x3046E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144B80u; }
        if (ctx->pc != 0x144B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003046E0_0x3046e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144B80u; }
        if (ctx->pc != 0x144B80u) { return; }
    }
    ctx->pc = 0x144B80u;
label_144b80:
    // 0x144b80: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x144b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_144b84:
    // 0x144b84: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x144b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x144b88: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x144b88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x144b8c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x144b8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x144b90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x144b90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x144b94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x144b94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144b98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x144b98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x144B9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144B9Cu;
            // 0x144ba0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x144BA4u;
    // 0x144ba4: 0x0  nop
    ctx->pc = 0x144ba4u;
    // NOP
    // 0x144ba8: 0x0  nop
    ctx->pc = 0x144ba8u;
    // NOP
    // 0x144bac: 0x0  nop
    ctx->pc = 0x144bacu;
    // NOP
label_144bb0:
    // 0x144bb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x144bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x144bb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x144bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x144bb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x144bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x144bbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x144bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x144bc0: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x144bc0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x144bc4: 0x94900000  lhu         $s0, 0x0($a0)
    ctx->pc = 0x144bc4u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x144bc8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x144BC8u;
    {
        const bool branch_taken_0x144bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x144BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144BC8u;
            // 0x144bcc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144bc8) {
            ctx->pc = 0x144BF8u;
            goto label_144bf8;
        }
    }
    ctx->pc = 0x144BD0u;
    // 0x144bd0: 0xc05085c  jal         func_142170
    ctx->pc = 0x144BD0u;
    SET_GPR_U32(ctx, 31, 0x144BD8u);
    ctx->pc = 0x144BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144BD0u;
            // 0x144bd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142170u;
    if (runtime->hasFunction(0x142170u)) {
        auto targetFn = runtime->lookupFunction(0x142170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144BD8u; }
        if (ctx->pc != 0x144BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00142170_0x142170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144BD8u; }
        if (ctx->pc != 0x144BD8u) { return; }
    }
    ctx->pc = 0x144BD8u;
label_144bd8:
    // 0x144bd8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x144bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x144bdc: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x144BDCu;
    {
        const bool branch_taken_0x144bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x144bdc) {
            ctx->pc = 0x144BE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x144BDCu;
            // 0x144be0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x144C1Cu;
            goto label_144c1c;
        }
    }
    ctx->pc = 0x144BE4u;
    // 0x144be4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x144be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144be8: 0xc050e14  jal         func_143850
    ctx->pc = 0x144BE8u;
    SET_GPR_U32(ctx, 31, 0x144BF0u);
    ctx->pc = 0x144BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144BE8u;
            // 0x144bec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143850u;
    if (runtime->hasFunction(0x143850u)) {
        auto targetFn = runtime->lookupFunction(0x143850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144BF0u; }
        if (ctx->pc != 0x144BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143850_0x143850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144BF0u; }
        if (ctx->pc != 0x144BF0u) { return; }
    }
    ctx->pc = 0x144BF0u;
label_144bf0:
    // 0x144bf0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x144BF0u;
    {
        const bool branch_taken_0x144bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x144bf0) {
            ctx->pc = 0x144C18u;
            goto label_144c18;
        }
    }
    ctx->pc = 0x144BF8u;
label_144bf8:
    // 0x144bf8: 0xc05087c  jal         func_1421F0
    ctx->pc = 0x144BF8u;
    SET_GPR_U32(ctx, 31, 0x144C00u);
    ctx->pc = 0x144BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144BF8u;
            // 0x144bfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1421F0u;
    if (runtime->hasFunction(0x1421F0u)) {
        auto targetFn = runtime->lookupFunction(0x1421F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144C00u; }
        if (ctx->pc != 0x144C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001421F0_0x1421f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144C00u; }
        if (ctx->pc != 0x144C00u) { return; }
    }
    ctx->pc = 0x144C00u;
label_144c00:
    // 0x144c00: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x144c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x144c04: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x144C04u;
    {
        const bool branch_taken_0x144c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x144c04) {
            ctx->pc = 0x144C18u;
            goto label_144c18;
        }
    }
    ctx->pc = 0x144C0Cu;
    // 0x144c0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x144c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144c10: 0xc050e14  jal         func_143850
    ctx->pc = 0x144C10u;
    SET_GPR_U32(ctx, 31, 0x144C18u);
    ctx->pc = 0x144C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144C10u;
            // 0x144c14: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143850u;
    if (runtime->hasFunction(0x143850u)) {
        auto targetFn = runtime->lookupFunction(0x143850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144C18u; }
        if (ctx->pc != 0x144C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143850_0x143850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144C18u; }
        if (ctx->pc != 0x144C18u) { return; }
    }
    ctx->pc = 0x144C18u;
label_144c18:
    // 0x144c18: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x144c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_144c1c:
    // 0x144c1c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x144c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x144c20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x144c20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144c24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x144c24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144c28: 0x3e00008  jr          $ra
    ctx->pc = 0x144C28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144C28u;
            // 0x144c2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x144C30u;
label_144c30:
    // 0x144c30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x144c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x144c34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x144c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x144c38: 0xaca403fc  sw          $a0, 0x3FC($a1)
    ctx->pc = 0x144c38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1020), GPR_U32(ctx, 4));
    // 0x144c3c: 0x90a30438  lbu         $v1, 0x438($a1)
    ctx->pc = 0x144c3cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1080)));
    // 0x144c40: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x144c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x144c44: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x144C44u;
    {
        const bool branch_taken_0x144c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x144c44) {
            ctx->pc = 0x144C48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x144C44u;
            // 0x144c48: 0x306200fd  andi        $v0, $v1, 0xFD (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
        ctx->in_delay_slot = false;
            ctx->pc = 0x144C5Cu;
            goto label_144c5c;
        }
    }
    ctx->pc = 0x144C4Cu;
    // 0x144c4c: 0xc05071c  jal         func_141C70
    ctx->pc = 0x144C4Cu;
    SET_GPR_U32(ctx, 31, 0x144C54u);
    ctx->pc = 0x144C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144C4Cu;
            // 0x144c50: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141C70u;
    if (runtime->hasFunction(0x141C70u)) {
        auto targetFn = runtime->lookupFunction(0x141C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144C54u; }
        if (ctx->pc != 0x144C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141C70_0x141c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144C54u; }
        if (ctx->pc != 0x144C54u) { return; }
    }
    ctx->pc = 0x144C54u;
label_144c54:
    // 0x144c54: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x144C54u;
    {
        const bool branch_taken_0x144c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144C54u;
            // 0x144c58: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144c54) {
            ctx->pc = 0x144C64u;
            goto label_144c64;
        }
    }
    ctx->pc = 0x144C5Cu;
label_144c5c:
    // 0x144c5c: 0xa0a20438  sb          $v0, 0x438($a1)
    ctx->pc = 0x144c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1080), (uint8_t)GPR_U32(ctx, 2));
    // 0x144c60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x144c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_144c64:
    // 0x144c64: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x144c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x144c68: 0x3e00008  jr          $ra
    ctx->pc = 0x144C68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144C68u;
            // 0x144c6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x144C70u;
    ctx->pc = 0x144c70u;
}
