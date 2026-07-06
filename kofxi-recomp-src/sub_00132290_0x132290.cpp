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

// Function: sub_00132290
// Address: 0x132290 - 0x134660
void sub_00132290_0x132290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132290_0x132290");
#endif

    switch (ctx->pc) {
        case 0x1322d8u: goto label_1322d8;
        case 0x13233cu: goto label_13233c;
        case 0x132350u: goto label_132350;
        case 0x1323b4u: goto label_1323b4;
        case 0x1323c8u: goto label_1323c8;
        case 0x13242cu: goto label_13242c;
        case 0x132440u: goto label_132440;
        case 0x1324a4u: goto label_1324a4;
        case 0x1324b4u: goto label_1324b4;
        case 0x1324bcu: goto label_1324bc;
        case 0x132520u: goto label_132520;
        case 0x132534u: goto label_132534;
        case 0x1325a0u: goto label_1325a0;
        case 0x132704u: goto label_132704;
        case 0x132760u: goto label_132760;
        case 0x1327b4u: goto label_1327b4;
        case 0x132848u: goto label_132848;
        case 0x1328c4u: goto label_1328c4;
        case 0x132948u: goto label_132948;
        case 0x1329a8u: goto label_1329a8;
        case 0x1329f0u: goto label_1329f0;
        case 0x132a14u: goto label_132a14;
        case 0x132aecu: goto label_132aec;
        case 0x132bccu: goto label_132bcc;
        case 0x132becu: goto label_132bec;
        case 0x132c0cu: goto label_132c0c;
        case 0x132c2cu: goto label_132c2c;
        case 0x132c54u: goto label_132c54;
        case 0x132ca4u: goto label_132ca4;
        case 0x132cc0u: goto label_132cc0;
        case 0x132cd0u: goto label_132cd0;
        case 0x132d20u: goto label_132d20;
        case 0x132d3cu: goto label_132d3c;
        case 0x132d44u: goto label_132d44;
        case 0x132dccu: goto label_132dcc;
        case 0x132e18u: goto label_132e18;
        case 0x132e50u: goto label_132e50;
        case 0x132e74u: goto label_132e74;
        case 0x132e88u: goto label_132e88;
        case 0x132ed4u: goto label_132ed4;
        case 0x132ef0u: goto label_132ef0;
        case 0x132f10u: goto label_132f10;
        case 0x132f94u: goto label_132f94;
        case 0x133094u: goto label_133094;
        case 0x1330fcu: goto label_1330fc;
        case 0x13316cu: goto label_13316c;
        case 0x1331e4u: goto label_1331e4;
        case 0x13324cu: goto label_13324c;
        case 0x1332b8u: goto label_1332b8;
        case 0x1332e8u: goto label_1332e8;
        case 0x133394u: goto label_133394;
        case 0x1333b8u: goto label_1333b8;
        case 0x1333c8u: goto label_1333c8;
        case 0x13340cu: goto label_13340c;
        case 0x133518u: goto label_133518;
        case 0x133540u: goto label_133540;
        case 0x133560u: goto label_133560;
        case 0x1335fcu: goto label_1335fc;
        case 0x133678u: goto label_133678;
        case 0x1336dcu: goto label_1336dc;
        case 0x133774u: goto label_133774;
        case 0x1337ecu: goto label_1337ec;
        case 0x13384cu: goto label_13384c;
        case 0x13387cu: goto label_13387c;
        case 0x1339fcu: goto label_1339fc;
        case 0x133a64u: goto label_133a64;
        case 0x133ae4u: goto label_133ae4;
        case 0x133b90u: goto label_133b90;
        case 0x133bf4u: goto label_133bf4;
        case 0x133c58u: goto label_133c58;
        case 0x133d5cu: goto label_133d5c;
        case 0x133dc4u: goto label_133dc4;
        case 0x133e44u: goto label_133e44;
        case 0x133ef0u: goto label_133ef0;
        case 0x133f54u: goto label_133f54;
        case 0x133fb8u: goto label_133fb8;
        case 0x133fe8u: goto label_133fe8;
        case 0x13412cu: goto label_13412c;
        case 0x13423cu: goto label_13423c;
        case 0x13432cu: goto label_13432c;
        case 0x134424u: goto label_134424;
        case 0x134530u: goto label_134530;
        case 0x13461cu: goto label_13461c;
        case 0x13464cu: goto label_13464c;
        default: break;
    }

    ctx->pc = 0x132290u;

label_132290:
    // 0x132290: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x132290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x132294: 0x2cc10006  sltiu       $at, $a2, 0x6
    ctx->pc = 0x132294u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x132298: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x132298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13229c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13229cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1322a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1322a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1322a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1322a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1322a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1322a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1322ac: 0x30b1ffff  andi        $s1, $a1, 0xFFFF
    ctx->pc = 0x1322acu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1322b0: 0x102000bd  beqz        $at, . + 4 + (0xBD << 2)
    ctx->pc = 0x1322B0u;
    {
        const bool branch_taken_0x1322b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1322B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1322B0u;
        // 0x1322b4: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1322b0) {
            ctx->pc = 0x1325A8u;
            goto label_1325a8;
        }
    }
    ctx->pc = 0x1322B8u;
    // 0x1322b8: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x1322b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x1322bc: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1322bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1322c0: 0x2463c590  addiu       $v1, $v1, -0x3A70
    ctx->pc = 0x1322c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952336));
    // 0x1322c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1322c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1322c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1322c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1322cc: 0x400008  jr          $v0
    ctx->pc = 0x1322CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1322D4u: goto label_1322d4;
            case 0x13234Cu: goto label_13234c;
            case 0x1323C4u: goto label_1323c4;
            case 0x13243Cu: goto label_13243c;
            case 0x1324B4u: goto label_1324b4;
            case 0x132530u: goto label_132530;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1322CCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1322D4u;
label_1322d4:
    // 0x1322d4: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x1322d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_1322d8:
    // 0x1322d8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1322d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1322dc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1322dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1322e0: 0x2484c550  addiu       $a0, $a0, -0x3AB0
    ctx->pc = 0x1322e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952272));
    // 0x1322e4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1322e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1322e8: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1322e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x1322ec: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1322ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1322f0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1322f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1322f4: 0x90650006  lbu         $a1, 0x6($v1)
    ctx->pc = 0x1322f4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x1322f8: 0x1445000d  bne         $v0, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x1322F8u;
    {
        const bool branch_taken_0x1322f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1322FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1322F8u;
        // 0x1322fc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1322f8) {
            ctx->pc = 0x132330u;
            goto label_132330;
        }
    }
    ctx->pc = 0x132300u;
    // 0x132300: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x132300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x132304: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x132304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x132308: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x132308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x13230c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x13230cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x132310: 0x90430006  lbu         $v1, 0x6($v0)
    ctx->pc = 0x132310u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x132314: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x132314u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x132318: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x132318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13231c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x13231cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x132320: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x132320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x132324: 0x90450009  lbu         $a1, 0x9($v0)
    ctx->pc = 0x132324u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x132328: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x132328u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13232c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x13232cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_132330:
    // 0x132330: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x132330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132334: 0xc04c790  jal         func_131E40
    ctx->pc = 0x132334u;
    SET_GPR_U32(ctx, 31, 0x13233Cu);
    ctx->pc = 0x132338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132334u;
    // 0x132338: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E40u, 0x132334u, 0x13233Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13233Cu;
label_13233c:
    // 0x13233c: 0x5440ffe6  bnel        $v0, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x13233Cu;
    {
        const bool branch_taken_0x13233c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13233c) {
            ctx->pc = 0x132340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13233Cu;
            // 0x132340: 0x3205ffff  andi        $a1, $s0, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1322D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1322d8;
        }
    }
    ctx->pc = 0x132344u;
    // 0x132344: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x132344u;
    {
        const bool branch_taken_0x132344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132344) {
            ctx->pc = 0x1325A8u;
            goto label_1325a8;
        }
    }
    ctx->pc = 0x13234Cu;
label_13234c:
    // 0x13234c: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x13234cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_132350:
    // 0x132350: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x132350u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x132354: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x132354u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x132358: 0x2484c550  addiu       $a0, $a0, -0x3AB0
    ctx->pc = 0x132358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952272));
    // 0x13235c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x13235cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x132360: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x132360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x132364: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x132364u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x132368: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x132368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x13236c: 0x90650007  lbu         $a1, 0x7($v1)
    ctx->pc = 0x13236cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 7)));
    // 0x132370: 0x1445000d  bne         $v0, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x132370u;
    {
        const bool branch_taken_0x132370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x132374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132370u;
        // 0x132374: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132370) {
            ctx->pc = 0x1323A8u;
            goto label_1323a8;
        }
    }
    ctx->pc = 0x132378u;
    // 0x132378: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x132378u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13237c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x13237cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x132380: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x132380u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x132384: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x132384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x132388: 0x90430007  lbu         $v1, 0x7($v0)
    ctx->pc = 0x132388u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7)));
    // 0x13238c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x13238cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x132390: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x132390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x132394: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x132394u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x132398: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x132398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x13239c: 0x90450009  lbu         $a1, 0x9($v0)
    ctx->pc = 0x13239cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x1323a0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1323a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1323a4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1323a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1323a8:
    // 0x1323a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1323a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1323ac: 0xc04c790  jal         func_131E40
    ctx->pc = 0x1323ACu;
    SET_GPR_U32(ctx, 31, 0x1323B4u);
    ctx->pc = 0x1323B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1323ACu;
    // 0x1323b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E40u, 0x1323ACu, 0x1323B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1323B4u;
label_1323b4:
    // 0x1323b4: 0x5440ffe6  bnel        $v0, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1323B4u;
    {
        const bool branch_taken_0x1323b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1323b4) {
            ctx->pc = 0x1323B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1323B4u;
            // 0x1323b8: 0x3205ffff  andi        $a1, $s0, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x132350u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_132350;
        }
    }
    ctx->pc = 0x1323BCu;
    // 0x1323bc: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x1323BCu;
    {
        const bool branch_taken_0x1323bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1323bc) {
            ctx->pc = 0x1325A8u;
            goto label_1325a8;
        }
    }
    ctx->pc = 0x1323C4u;
label_1323c4:
    // 0x1323c4: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x1323c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_1323c8:
    // 0x1323c8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1323c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1323cc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1323ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1323d0: 0x2484c550  addiu       $a0, $a0, -0x3AB0
    ctx->pc = 0x1323d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952272));
    // 0x1323d4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1323d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1323d8: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1323d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x1323dc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1323dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1323e0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1323e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1323e4: 0x90650008  lbu         $a1, 0x8($v1)
    ctx->pc = 0x1323e4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1323e8: 0x1445000d  bne         $v0, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x1323E8u;
    {
        const bool branch_taken_0x1323e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1323ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1323E8u;
        // 0x1323ec: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1323e8) {
            ctx->pc = 0x132420u;
            goto label_132420;
        }
    }
    ctx->pc = 0x1323F0u;
    // 0x1323f0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1323f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1323f4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1323f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1323f8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1323f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1323fc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1323fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x132400: 0x90430008  lbu         $v1, 0x8($v0)
    ctx->pc = 0x132400u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x132404: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x132404u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x132408: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x132408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13240c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x13240cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x132410: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x132410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x132414: 0x90450007  lbu         $a1, 0x7($v0)
    ctx->pc = 0x132414u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7)));
    // 0x132418: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x132418u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13241c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x13241cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_132420:
    // 0x132420: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x132420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132424: 0xc04c790  jal         func_131E40
    ctx->pc = 0x132424u;
    SET_GPR_U32(ctx, 31, 0x13242Cu);
    ctx->pc = 0x132428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132424u;
    // 0x132428: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E40u, 0x132424u, 0x13242Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13242Cu;
label_13242c:
    // 0x13242c: 0x5440ffe6  bnel        $v0, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x13242Cu;
    {
        const bool branch_taken_0x13242c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13242c) {
            ctx->pc = 0x132430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13242Cu;
            // 0x132430: 0x3205ffff  andi        $a1, $s0, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1323C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1323c8;
        }
    }
    ctx->pc = 0x132434u;
    // 0x132434: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x132434u;
    {
        const bool branch_taken_0x132434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132434) {
            ctx->pc = 0x1325A8u;
            goto label_1325a8;
        }
    }
    ctx->pc = 0x13243Cu;
label_13243c:
    // 0x13243c: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x13243cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_132440:
    // 0x132440: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x132440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x132444: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x132444u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x132448: 0x2484c550  addiu       $a0, $a0, -0x3AB0
    ctx->pc = 0x132448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952272));
    // 0x13244c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x13244cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x132450: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x132450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x132454: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x132454u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x132458: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x132458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x13245c: 0x90650009  lbu         $a1, 0x9($v1)
    ctx->pc = 0x13245cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 9)));
    // 0x132460: 0x1445000d  bne         $v0, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x132460u;
    {
        const bool branch_taken_0x132460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x132464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132460u;
        // 0x132464: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132460) {
            ctx->pc = 0x132498u;
            goto label_132498;
        }
    }
    ctx->pc = 0x132468u;
    // 0x132468: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x132468u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13246c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x13246cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x132470: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x132470u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x132474: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x132474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x132478: 0x90430009  lbu         $v1, 0x9($v0)
    ctx->pc = 0x132478u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x13247c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x13247cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x132480: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x132480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x132484: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x132484u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x132488: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x132488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x13248c: 0x90450007  lbu         $a1, 0x7($v0)
    ctx->pc = 0x13248cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7)));
    // 0x132490: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x132490u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132494: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x132494u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_132498:
    // 0x132498: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x132498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13249c: 0xc04c790  jal         func_131E40
    ctx->pc = 0x13249Cu;
    SET_GPR_U32(ctx, 31, 0x1324A4u);
    ctx->pc = 0x1324A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13249Cu;
    // 0x1324a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E40u, 0x13249Cu, 0x1324A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1324A4u;
label_1324a4:
    // 0x1324a4: 0x5440ffe6  bnel        $v0, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1324A4u;
    {
        const bool branch_taken_0x1324a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1324a4) {
            ctx->pc = 0x1324A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1324A4u;
            // 0x1324a8: 0x3205ffff  andi        $a1, $s0, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x132440u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_132440;
        }
    }
    ctx->pc = 0x1324ACu;
    // 0x1324ac: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x1324ACu;
    {
        const bool branch_taken_0x1324ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1324ac) {
            ctx->pc = 0x1325A8u;
            goto label_1325a8;
        }
    }
    ctx->pc = 0x1324B4u;
label_1324b4:
    // 0x1324b4: 0xc067c48  jal         func_19F120
    ctx->pc = 0x1324B4u;
    SET_GPR_U32(ctx, 31, 0x1324BCu);
    ctx->pc = 0x19F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F120u, 0x1324B4u, 0x1324BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1324BCu;
label_1324bc:
    // 0x1324bc: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x1324bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
    // 0x1324c0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1324c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1324c4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1324c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1324c8: 0x0  nop
    ctx->pc = 0x1324c8u;
    // NOP
    // 0x1324cc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1324ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1324d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1324d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1324d4: 0x0  nop
    ctx->pc = 0x1324d4u;
    // NOP
    // 0x1324d8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1324d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1324dc: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1324DCu;
    {
        const bool branch_taken_0x1324dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1324dc) {
            ctx->pc = 0x1324E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1324DCu;
            // 0x1324e0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1324F4u;
            goto label_1324f4;
        }
    }
    ctx->pc = 0x1324E4u;
    // 0x1324e4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1324e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1324e8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1324e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1324ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1324ECu;
    {
        const bool branch_taken_0x1324ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1324F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1324ECu;
        // 0x1324f0: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1324ec) {
            ctx->pc = 0x13250Cu;
            goto label_13250c;
        }
    }
    ctx->pc = 0x1324F4u;
label_1324f4:
    // 0x1324f4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1324f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1324f8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1324f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1324fc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1324fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x132500: 0x0  nop
    ctx->pc = 0x132500u;
    // NOP
    // 0x132504: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x132504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x132508: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x132508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_13250c:
    // 0x13250c: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x13250cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x132510: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x132510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132514: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x132514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132518: 0xc04c790  jal         func_131E40
    ctx->pc = 0x132518u;
    SET_GPR_U32(ctx, 31, 0x132520u);
    ctx->pc = 0x13251Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132518u;
    // 0x13251c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E40u, 0x132518u, 0x132520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132520u;
label_132520:
    // 0x132520: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x132520u;
    {
        const bool branch_taken_0x132520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x132520) {
            ctx->pc = 0x1324B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1324b4;
        }
    }
    ctx->pc = 0x132528u;
    // 0x132528: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x132528u;
    {
        const bool branch_taken_0x132528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132528) {
            ctx->pc = 0x1325A8u;
            goto label_1325a8;
        }
    }
    ctx->pc = 0x132530u;
label_132530:
    // 0x132530: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x132530u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_132534:
    // 0x132534: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x132534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x132538: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x132538u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13253c: 0x2442c550  addiu       $v0, $v0, -0x3AB0
    ctx->pc = 0x13253cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952272));
    // 0x132540: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x132540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x132544: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x132544u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x132548: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x132548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13254c: 0x90500009  lbu         $s0, 0x9($v0)
    ctx->pc = 0x13254cu;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x132550: 0x56300010  bnel        $s1, $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x132550u;
    {
        const bool branch_taken_0x132550 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        if (branch_taken_0x132550) {
            ctx->pc = 0x132554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132550u;
            // 0x132554: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132594u;
            goto label_132594;
        }
    }
    ctx->pc = 0x132558u;
    // 0x132558: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x132558u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x13255c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x13255cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x132560: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x132560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x132564: 0x2463c559  addiu       $v1, $v1, -0x3AA7
    ctx->pc = 0x132564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952281));
    // 0x132568: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x132568u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x13256c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x13256cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x132570: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x132570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x132574: 0x2442c557  addiu       $v0, $v0, -0x3AA9
    ctx->pc = 0x132574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952279));
    // 0x132578: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x132578u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13257c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x13257cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x132580: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x132580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x132584: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x132584u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x132588: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x132588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13258c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13258Cu;
    {
        const bool branch_taken_0x13258c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13258Cu;
        // 0x132590: 0x90500000  lbu         $s0, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13258c) {
            ctx->pc = 0x1325A8u;
            goto label_1325a8;
        }
    }
    ctx->pc = 0x132594u;
label_132594:
    // 0x132594: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x132594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132598: 0xc04c790  jal         func_131E40
    ctx->pc = 0x132598u;
    SET_GPR_U32(ctx, 31, 0x1325A0u);
    ctx->pc = 0x13259Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132598u;
    // 0x13259c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E40u, 0x132598u, 0x1325A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1325A0u;
label_1325a0:
    // 0x1325a0: 0x5440ffe4  bnel        $v0, $zero, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1325A0u;
    {
        const bool branch_taken_0x1325a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1325a0) {
            ctx->pc = 0x1325A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1325A0u;
            // 0x1325a4: 0x3204ffff  andi        $a0, $s0, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x132534u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_132534;
        }
    }
    ctx->pc = 0x1325A8u;
label_1325a8:
    // 0x1325a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1325a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1325ac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1325acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1325b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1325b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1325b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1325b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1325b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1325b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1325bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1325BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1325C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1325BCu;
        // 0x1325c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1325BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1325C4u;
    // 0x1325c4: 0x0  nop
    ctx->pc = 0x1325c4u;
    // NOP
    // 0x1325c8: 0x0  nop
    ctx->pc = 0x1325c8u;
    // NOP
    // 0x1325cc: 0x0  nop
    ctx->pc = 0x1325ccu;
    // NOP
    // 0x1325d0: 0x27bdfcc0  addiu       $sp, $sp, -0x340
    ctx->pc = 0x1325d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966464));
    // 0x1325d4: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x1325d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x1325d8: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x1325d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x1325dc: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x1325dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1325e0: 0x7fbe00d0  sq          $fp, 0xD0($sp)
    ctx->pc = 0x1325e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 30));
    // 0x1325e4: 0x24c6db50  addiu       $a2, $a2, -0x24B0
    ctx->pc = 0x1325e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957904));
    // 0x1325e8: 0x7fb700c0  sq          $s7, 0xC0($sp)
    ctx->pc = 0x1325e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 23));
    // 0x1325ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1325ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1325f0: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x1325f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
    // 0x1325f4: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x1325f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x1325f8: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x1325f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x1325fc: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1325fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x132600: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x132600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x132604: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x132604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x132608: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x132608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x13260c: 0xafa3033c  sw          $v1, 0x33C($sp)
    ctx->pc = 0x13260cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 828), GPR_U32(ctx, 3));
    // 0x132610: 0xafa00338  sw          $zero, 0x338($sp)
    ctx->pc = 0x132610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 824), GPR_U32(ctx, 0));
    // 0x132614: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x132614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x132618: 0x8c950010  lw          $s5, 0x10($a0)
    ctx->pc = 0x132618u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x13261c: 0x2463db5a  addiu       $v1, $v1, -0x24A6
    ctx->pc = 0x13261cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957914));
    // 0x132620: 0x8eb40000  lw          $s4, 0x0($s5)
    ctx->pc = 0x132620u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x132624: 0x1420c0  sll         $a0, $s4, 3
    ctx->pc = 0x132624u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x132628: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x132628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x13262c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x13262cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x132630: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x132630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x132634: 0x4f0c0  sll         $fp, $a0, 3
    ctx->pc = 0x132634u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x132638: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x132638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x13263c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x13263cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x132640: 0x14650365  bne         $v1, $a1, . + 4 + (0x365 << 2)
    ctx->pc = 0x132640u;
    {
        const bool branch_taken_0x132640 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x132644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132640u;
        // 0x132644: 0xde8021  addu        $s0, $a2, $fp (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132640) {
            ctx->pc = 0x1333D8u;
            goto label_1333d8;
        }
    }
    ctx->pc = 0x132648u;
    // 0x132648: 0x92080050  lbu         $t0, 0x50($s0)
    ctx->pc = 0x132648u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x13264c: 0x31030001  andi        $v1, $t0, 0x1
    ctx->pc = 0x13264cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x132650: 0x506000a6  beql        $v1, $zero, . + 4 + (0xA6 << 2)
    ctx->pc = 0x132650u;
    {
        const bool branch_taken_0x132650 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x132650) {
            ctx->pc = 0x132654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132650u;
            // 0x132654: 0x92040005  lbu         $a0, 0x5($s0) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1328ECu;
            goto label_1328ec;
        }
    }
    ctx->pc = 0x132658u;
    // 0x132658: 0x31030008  andi        $v1, $t0, 0x8
    ctx->pc = 0x132658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)8);
    // 0x13265c: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x13265Cu;
    {
        const bool branch_taken_0x13265c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13265c) {
            ctx->pc = 0x1326DCu;
            goto label_1326dc;
        }
    }
    ctx->pc = 0x132664u;
    // 0x132664: 0x2851804  sllv        $v1, $a1, $s4
    ctx->pc = 0x132664u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 20) & 0x1F));
    // 0x132668: 0x35040001  ori         $a0, $t0, 0x1
    ctx->pc = 0x132668u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1);
    // 0x13266c: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x13266cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x132670: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x132670u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x132674: 0x24a559a0  addiu       $a1, $a1, 0x59A0
    ctx->pc = 0x132674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22944));
    // 0x132678: 0x92080150  lbu         $t0, 0x150($s0)
    ctx->pc = 0x132678u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x13267c: 0xb43821  addu        $a3, $a1, $s4
    ctx->pc = 0x13267cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x132680: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x132680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x132684: 0x90655bf8  lbu         $a1, 0x5BF8($v1)
    ctx->pc = 0x132684u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 23544)));
    // 0x132688: 0xa2040050  sb          $a0, 0x50($s0)
    ctx->pc = 0x132688u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 80), (uint8_t)GPR_U32(ctx, 4));
    // 0x13268c: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x13268cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x132690: 0xa0e80000  sb          $t0, 0x0($a3)
    ctx->pc = 0x132690u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x132694: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x132694u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x132698: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x132698u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x13269c: 0x2484dca0  addiu       $a0, $a0, -0x2360
    ctx->pc = 0x13269cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958240));
    // 0x1326a0: 0xa0655bf8  sb          $a1, 0x5BF8($v1)
    ctx->pc = 0x1326a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 23544), (uint8_t)GPR_U32(ctx, 5));
    // 0x1326a4: 0x9e3821  addu        $a3, $a0, $fp
    ctx->pc = 0x1326a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x1326a8: 0x141840  sll         $v1, $s4, 1
    ctx->pc = 0x1326a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x1326ac: 0x742021  addu        $a0, $v1, $s4
    ctx->pc = 0x1326acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x1326b0: 0x90e50000  lbu         $a1, 0x0($a3)
    ctx->pc = 0x1326b0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1326b4: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1326b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1326b8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x1326b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1326bc: 0x24635980  addiu       $v1, $v1, 0x5980
    ctx->pc = 0x1326bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22912));
    // 0x1326c0: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x1326c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1326c4: 0x90e40020  lbu         $a0, 0x20($a3)
    ctx->pc = 0x1326c4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1326c8: 0x90e30040  lbu         $v1, 0x40($a3)
    ctx->pc = 0x1326c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x1326cc: 0xa4c50000  sh          $a1, 0x0($a2)
    ctx->pc = 0x1326ccu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x1326d0: 0xa4c40002  sh          $a0, 0x2($a2)
    ctx->pc = 0x1326d0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x1326d4: 0x1000035c  b           . + 4 + (0x35C << 2)
    ctx->pc = 0x1326D4u;
    {
        const bool branch_taken_0x1326d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1326D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1326D4u;
        // 0x1326d8: 0xa4c30004  sh          $v1, 0x4($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1326d4) {
            ctx->pc = 0x133448u;
            goto label_133448;
        }
    }
    ctx->pc = 0x1326DCu;
label_1326dc:
    // 0x1326dc: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1326dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1326e0: 0x32830001  andi        $v1, $s4, 0x1
    ctx->pc = 0x1326e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x1326e4: 0x244259b0  addiu       $v0, $v0, 0x59B0
    ctx->pc = 0x1326e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22960));
    // 0x1326e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1326e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1326ec: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1326ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1326f0: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1326f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1326f4: 0x50400047  beql        $v0, $zero, . + 4 + (0x47 << 2)
    ctx->pc = 0x1326F4u;
    {
        const bool branch_taken_0x1326f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1326f4) {
            ctx->pc = 0x1326F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1326F4u;
            // 0x1326f8: 0x141040  sll         $v0, $s4, 1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132814u;
            goto label_132814;
        }
    }
    ctx->pc = 0x1326FCu;
    // 0x1326fc: 0xc067c48  jal         func_19F120
    ctx->pc = 0x1326FCu;
    SET_GPR_U32(ctx, 31, 0x132704u);
    ctx->pc = 0x19F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F120u, 0x1326FCu, 0x132704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132704u;
label_132704:
    // 0x132704: 0x3c034130  lui         $v1, 0x4130
    ctx->pc = 0x132704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16688 << 16));
    // 0x132708: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x132708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x13270c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x13270cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x132710: 0x24425998  addiu       $v0, $v0, 0x5998
    ctx->pc = 0x132710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22936));
    // 0x132714: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x132714u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x132718: 0x54b821  addu        $s7, $v0, $s4
    ctx->pc = 0x132718u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x13271c: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x13271cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x132720: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x132720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x132724: 0x542021  addu        $a0, $v0, $s4
    ctx->pc = 0x132724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x132728: 0x24635980  addiu       $v1, $v1, 0x5980
    ctx->pc = 0x132728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22912));
    // 0x13272c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x13272cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x132730: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x132730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x132734: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x132734u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x132738: 0x2442c4a0  addiu       $v0, $v0, -0x3B60
    ctx->pc = 0x132738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952096));
    // 0x13273c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13273cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x132740: 0xa2e00000  sb          $zero, 0x0($s7)
    ctx->pc = 0x132740u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x132744: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x132744u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132748: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x132748u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13274c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x13274cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x132750: 0x0  nop
    ctx->pc = 0x132750u;
    // NOP
    // 0x132754: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x132754u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x132758: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x132758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13275c: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x13275cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_132760:
    // 0x132760: 0x9263014c  lbu         $v1, 0x14C($s3)
    ctx->pc = 0x132760u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 332)));
    // 0x132764: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x132764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x132768: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x132768u;
    {
        const bool branch_taken_0x132768 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x132768) {
            ctx->pc = 0x1327C8u;
            goto label_1327c8;
        }
    }
    ctx->pc = 0x132770u;
    // 0x132770: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x132770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132774: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x132774u;
    {
        const bool branch_taken_0x132774 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x132774) {
            ctx->pc = 0x1327A0u;
            goto label_1327a0;
        }
    }
    ctx->pc = 0x13277Cu;
    // 0x13277c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13277Cu;
    {
        const bool branch_taken_0x13277c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13277c) {
            ctx->pc = 0x132790u;
            goto label_132790;
        }
    }
    ctx->pc = 0x132784u;
    // 0x132784: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x132784u;
    {
        const bool branch_taken_0x132784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132784) {
            ctx->pc = 0x1327E0u;
            goto label_1327e0;
        }
    }
    ctx->pc = 0x13278Cu;
    // 0x13278c: 0x0  nop
    ctx->pc = 0x13278cu;
    // NOP
label_132790:
    // 0x132790: 0x92620150  lbu         $v0, 0x150($s3)
    ctx->pc = 0x132790u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 336)));
    // 0x132794: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x132794u;
    {
        const bool branch_taken_0x132794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132794u;
        // 0x132798: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132794) {
            ctx->pc = 0x1327E0u;
            goto label_1327e0;
        }
    }
    ctx->pc = 0x13279Cu;
    // 0x13279c: 0x0  nop
    ctx->pc = 0x13279cu;
    // NOP
label_1327a0:
    // 0x1327a0: 0xa2e20000  sb          $v0, 0x0($s7)
    ctx->pc = 0x1327a0u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1327a4: 0x96a50004  lhu         $a1, 0x4($s5)
    ctx->pc = 0x1327a4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1327a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1327a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1327ac: 0xc04c8a4  jal         func_132290
    ctx->pc = 0x1327ACu;
    SET_GPR_U32(ctx, 31, 0x1327B4u);
    ctx->pc = 0x1327B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1327ACu;
    // 0x1327b0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132290u;
    goto label_132290;
    ctx->pc = 0x1327B4u;
label_1327b4:
    // 0x1327b4: 0xa6a20004  sh          $v0, 0x4($s5)
    ctx->pc = 0x1327b4u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x1327b8: 0x96a20004  lhu         $v0, 0x4($s5)
    ctx->pc = 0x1327b8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1327bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1327BCu;
    {
        const bool branch_taken_0x1327bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1327C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1327BCu;
        // 0x1327c0: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1327bc) {
            ctx->pc = 0x1327E0u;
            goto label_1327e0;
        }
    }
    ctx->pc = 0x1327C4u;
    // 0x1327c4: 0x0  nop
    ctx->pc = 0x1327c4u;
    // NOP
label_1327c8:
    // 0x1327c8: 0xa2e20000  sb          $v0, 0x0($s7)
    ctx->pc = 0x1327c8u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1327cc: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x1327ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1327d0: 0xa6a20004  sh          $v0, 0x4($s5)
    ctx->pc = 0x1327d0u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x1327d4: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x1327d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1327d8: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x1327d8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1327dc: 0x0  nop
    ctx->pc = 0x1327dcu;
    // NOP
label_1327e0:
    // 0x1327e0: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1327e0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1327e4: 0x2ac20003  slti        $v0, $s6, 0x3
    ctx->pc = 0x1327e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1327e8: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x1327e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x1327ec: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x1327ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x1327f0: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1327F0u;
    {
        const bool branch_taken_0x1327f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1327F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1327F0u;
        // 0x1327f4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1327f0) {
            ctx->pc = 0x132760u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_132760;
        }
    }
    ctx->pc = 0x1327F8u;
    // 0x1327f8: 0x92e20000  lbu         $v0, 0x0($s7)
    ctx->pc = 0x1327f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1327fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1327FCu;
    {
        const bool branch_taken_0x1327fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1327fc) {
            ctx->pc = 0x132810u;
            goto label_132810;
        }
    }
    ctx->pc = 0x132804u;
    // 0x132804: 0x92020050  lbu         $v0, 0x50($s0)
    ctx->pc = 0x132804u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x132808: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x132808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
    // 0x13280c: 0xa2020050  sb          $v0, 0x50($s0)
    ctx->pc = 0x13280cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 80), (uint8_t)GPR_U32(ctx, 2));
label_132810:
    // 0x132810: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x132810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
label_132814:
    // 0x132814: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x132814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x132818: 0x542021  addu        $a0, $v0, $s4
    ctx->pc = 0x132818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x13281c: 0x24635980  addiu       $v1, $v1, 0x5980
    ctx->pc = 0x13281cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22912));
    // 0x132820: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x132820u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x132824: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x132824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x132828: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x132828u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13282c: 0x244259a0  addiu       $v0, $v0, 0x59A0
    ctx->pc = 0x13282cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22944));
    // 0x132830: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x132830u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x132834: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x132834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x132838: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x132838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13283c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x13283cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x132840: 0xc05c6f8  jal         func_171BE0
    ctx->pc = 0x132840u;
    SET_GPR_U32(ctx, 31, 0x132848u);
    ctx->pc = 0x132844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132840u;
    // 0x132844: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171BE0u, 0x132840u, 0x132848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132848u;
label_132848:
    // 0x132848: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x132848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x13284c: 0x94635960  lhu         $v1, 0x5960($v1)
    ctx->pc = 0x13284cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 22880)));
    // 0x132850: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x132850u;
    {
        const bool branch_taken_0x132850 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x132854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132850u;
        // 0x132854: 0x3046ffff  andi        $a2, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x132850) {
            ctx->pc = 0x13285Cu;
            goto label_13285c;
        }
    }
    ctx->pc = 0x132858u;
    // 0x132858: 0x64060100  daddiu      $a2, $zero, 0x100
    ctx->pc = 0x132858u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)256);
label_13285c:
    // 0x13285c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13285cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132860: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x132860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x132864: 0x2842804  sllv        $a1, $a0, $s4
    ctx->pc = 0x132864u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 20) & 0x1F));
    // 0x132868: 0x90645bf8  lbu         $a0, 0x5BF8($v1)
    ctx->pc = 0x132868u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 23544)));
    // 0x13286c: 0xa01827  not         $v1, $a1
    ctx->pc = 0x13286cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 5) | GPR_U64(ctx, 0)));
    // 0x132870: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x132870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x132874: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x132874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x132878: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x132878u;
    {
        const bool branch_taken_0x132878 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x132878) {
            ctx->pc = 0x13287Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132878u;
            // 0x13287c: 0x30c3ffff  andi        $v1, $a2, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x132888u;
            goto label_132888;
        }
    }
    ctx->pc = 0x132880u;
    // 0x132880: 0x64060100  daddiu      $a2, $zero, 0x100
    ctx->pc = 0x132880u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)256);
    // 0x132884: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x132884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_132888:
    // 0x132888: 0x30630f00  andi        $v1, $v1, 0xF00
    ctx->pc = 0x132888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3840);
    // 0x13288c: 0x506002ef  beql        $v1, $zero, . + 4 + (0x2EF << 2)
    ctx->pc = 0x13288Cu;
    {
        const bool branch_taken_0x13288c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13288c) {
            ctx->pc = 0x132890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13288Cu;
            // 0x132890: 0x96a30008  lhu         $v1, 0x8($s5) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13344Cu;
            goto label_13344c;
        }
    }
    ctx->pc = 0x132894u;
    // 0x132894: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x132894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x132898: 0x30a700ff  andi        $a3, $a1, 0xFF
    ctx->pc = 0x132898u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x13289c: 0x90465bf8  lbu         $a2, 0x5BF8($v0)
    ctx->pc = 0x13289cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 23544)));
    // 0x1328a0: 0x24040138  addiu       $a0, $zero, 0x138
    ctx->pc = 0x1328a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 312));
    // 0x1328a4: 0x92030050  lbu         $v1, 0x50($s0)
    ctx->pc = 0x1328a4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1328a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1328a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1328ac: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1328acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1328b0: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1328b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1328b4: 0xa0465bf8  sb          $a2, 0x5BF8($v0)
    ctx->pc = 0x1328b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 23544), (uint8_t)GPR_U32(ctx, 6));
    // 0x1328b8: 0x34620009  ori         $v0, $v1, 0x9
    ctx->pc = 0x1328b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9);
    // 0x1328bc: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x1328BCu;
    SET_GPR_U32(ctx, 31, 0x1328C4u);
    ctx->pc = 0x1328C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1328BCu;
    // 0x1328c0: 0xa2020050  sb          $v0, 0x50($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 80), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x1328BCu, 0x1328C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1328C4u;
label_1328c4:
    // 0x1328c4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1328c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1328c8: 0x2463dca0  addiu       $v1, $v1, -0x2360
    ctx->pc = 0x1328c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958240));
    // 0x1328cc: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x1328ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x1328d0: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x1328d0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1328d4: 0x90640020  lbu         $a0, 0x20($v1)
    ctx->pc = 0x1328d4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1328d8: 0xa6250000  sh          $a1, 0x0($s1)
    ctx->pc = 0x1328d8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x1328dc: 0x90630040  lbu         $v1, 0x40($v1)
    ctx->pc = 0x1328dcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x1328e0: 0xa6240002  sh          $a0, 0x2($s1)
    ctx->pc = 0x1328e0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x1328e4: 0x100002d8  b           . + 4 + (0x2D8 << 2)
    ctx->pc = 0x1328E4u;
    {
        const bool branch_taken_0x1328e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1328E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1328E4u;
        // 0x1328e8: 0xa6230004  sh          $v1, 0x4($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1328e4) {
            ctx->pc = 0x133448u;
            goto label_133448;
        }
    }
    ctx->pc = 0x1328ECu;
label_1328ec:
    // 0x1328ec: 0x96a30006  lhu         $v1, 0x6($s5)
    ctx->pc = 0x1328ecu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x1328f0: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x1328f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1328f4: 0x5460002a  bnel        $v1, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x1328F4u;
    {
        const bool branch_taken_0x1328f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1328f4) {
            ctx->pc = 0x1328F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1328F4u;
            // 0x1328f8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1329A0u;
            goto label_1329a0;
        }
    }
    ctx->pc = 0x1328FCu;
    // 0x1328fc: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x1328fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x132900: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x132900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x132904: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x132904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x132908: 0x246359a0  addiu       $v1, $v1, 0x59A0
    ctx->pc = 0x132908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22944));
    // 0x13290c: 0x90870130  lbu         $a3, 0x130($a0)
    ctx->pc = 0x13290cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x132910: 0x743021  addu        $a2, $v1, $s4
    ctx->pc = 0x132910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x132914: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x132914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x132918: 0x90649780  lbu         $a0, -0x6880($v1)
    ctx->pc = 0x132918u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x13291c: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x13291cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x132920: 0x14830015  bne         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x132920u;
    {
        const bool branch_taken_0x132920 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x132924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132920u;
        // 0x132924: 0xa0c70000  sb          $a3, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132920) {
            ctx->pc = 0x132978u;
            goto label_132978;
        }
    }
    ctx->pc = 0x132928u;
    // 0x132928: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x132928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x13292c: 0x2858804  sllv        $s1, $a1, $s4
    ctx->pc = 0x13292cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 20) & 0x1F));
    // 0x132930: 0x90635bf8  lbu         $v1, 0x5BF8($v1)
    ctx->pc = 0x132930u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 23544)));
    // 0x132934: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x132934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x132938: 0x146002c3  bnez        $v1, . + 4 + (0x2C3 << 2)
    ctx->pc = 0x132938u;
    {
        const bool branch_taken_0x132938 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x132938) {
            ctx->pc = 0x133448u;
            goto label_133448;
        }
    }
    ctx->pc = 0x132940u;
    // 0x132940: 0xc0d4384  jal         func_350E10
    ctx->pc = 0x132940u;
    SET_GPR_U32(ctx, 31, 0x132948u);
    ctx->pc = 0x350E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350E10u, 0x132940u, 0x132948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132948u;
label_132948:
    // 0x132948: 0x104002bf  beqz        $v0, . + 4 + (0x2BF << 2)
    ctx->pc = 0x132948u;
    {
        const bool branch_taken_0x132948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132948) {
            ctx->pc = 0x133448u;
            goto label_133448;
        }
    }
    ctx->pc = 0x132950u;
    // 0x132950: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x132950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x132954: 0x322600ff  andi        $a2, $s1, 0xFF
    ctx->pc = 0x132954u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x132958: 0x90655bf8  lbu         $a1, 0x5BF8($v1)
    ctx->pc = 0x132958u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 23544)));
    // 0x13295c: 0x92040050  lbu         $a0, 0x50($s0)
    ctx->pc = 0x13295cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x132960: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x132960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x132964: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x132964u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x132968: 0xa0655bf8  sb          $a1, 0x5BF8($v1)
    ctx->pc = 0x132968u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 23544), (uint8_t)GPR_U32(ctx, 5));
    // 0x13296c: 0x34830009  ori         $v1, $a0, 0x9
    ctx->pc = 0x13296cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9);
    // 0x132970: 0x100002b5  b           . + 4 + (0x2B5 << 2)
    ctx->pc = 0x132970u;
    {
        const bool branch_taken_0x132970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132970u;
        // 0x132974: 0xa2030050  sb          $v1, 0x50($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 80), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132970) {
            ctx->pc = 0x133448u;
            goto label_133448;
        }
    }
    ctx->pc = 0x132978u;
label_132978:
    // 0x132978: 0x2852004  sllv        $a0, $a1, $s4
    ctx->pc = 0x132978u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 20) & 0x1F));
    // 0x13297c: 0x35030009  ori         $v1, $t0, 0x9
    ctx->pc = 0x13297cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)9);
    // 0x132980: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x132980u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x132984: 0xa2030050  sb          $v1, 0x50($s0)
    ctx->pc = 0x132984u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 80), (uint8_t)GPR_U32(ctx, 3));
    // 0x132988: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x132988u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x13298c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x13298cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x132990: 0x90845bf8  lbu         $a0, 0x5BF8($a0)
    ctx->pc = 0x132990u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 23544)));
    // 0x132994: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x132994u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x132998: 0x100002ab  b           . + 4 + (0x2AB << 2)
    ctx->pc = 0x132998u;
    {
        const bool branch_taken_0x132998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13299Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132998u;
        // 0x13299c: 0xa0645bf8  sb          $a0, 0x5BF8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 23544), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132998) {
            ctx->pc = 0x133448u;
            goto label_133448;
        }
    }
    ctx->pc = 0x1329A0u;
label_1329a0:
    // 0x1329a0: 0xc05c6f8  jal         func_171BE0
    ctx->pc = 0x1329A0u;
    SET_GPR_U32(ctx, 31, 0x1329A8u);
    ctx->pc = 0x171BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171BE0u, 0x1329A0u, 0x1329A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1329A8u;
label_1329a8:
    // 0x1329a8: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x1329a8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1329ac: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1329acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1329b0: 0x90459780  lbu         $a1, -0x6880($v0)
    ctx->pc = 0x1329b0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x1329b4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1329b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1329b8: 0x54a20009  bnel        $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1329B8u;
    {
        const bool branch_taken_0x1329b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1329b8) {
            ctx->pc = 0x1329BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1329B8u;
            // 0x1329bc: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1329E0u;
            goto label_1329e0;
        }
    }
    ctx->pc = 0x1329C0u;
    // 0x1329c0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x1329c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x1329c4: 0x3c0300b0  lui         $v1, 0xB0
    ctx->pc = 0x1329c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)176 << 16));
    // 0x1329c8: 0x8c44bee4  lw          $a0, -0x411C($v0)
    ctx->pc = 0x1329c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950628)));
    // 0x1329cc: 0x34621e00  ori         $v0, $v1, 0x1E00
    ctx->pc = 0x1329ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)7680);
    // 0x1329d0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1329d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1329d4: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1329D4u;
    {
        const bool branch_taken_0x1329d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1329d4) {
            ctx->pc = 0x132AC0u;
            goto label_132ac0;
        }
    }
    ctx->pc = 0x1329DCu;
    // 0x1329dc: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1329dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1329e0:
    // 0x1329e0: 0x54a20006  bnel        $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1329E0u;
    {
        const bool branch_taken_0x1329e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1329e0) {
            ctx->pc = 0x1329E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1329E0u;
            // 0x1329e4: 0x3222ffff  andi        $v0, $s1, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1329FCu;
            goto label_1329fc;
        }
    }
    ctx->pc = 0x1329E8u;
    // 0x1329e8: 0xc0d0ba4  jal         func_342E90
    ctx->pc = 0x1329E8u;
    SET_GPR_U32(ctx, 31, 0x1329F0u);
    ctx->pc = 0x342E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342E90u, 0x1329E8u, 0x1329F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1329F0u;
label_1329f0:
    // 0x1329f0: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1329F0u;
    {
        const bool branch_taken_0x1329f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1329f0) {
            ctx->pc = 0x132AC0u;
            goto label_132ac0;
        }
    }
    ctx->pc = 0x1329F8u;
    // 0x1329f8: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1329f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_1329fc:
    // 0x1329fc: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x1329fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x132a00: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x132A00u;
    {
        const bool branch_taken_0x132a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132a00) {
            ctx->pc = 0x132AC0u;
            goto label_132ac0;
        }
    }
    ctx->pc = 0x132A08u;
    // 0x132a08: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x132a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132a0c: 0xc05c6f8  jal         func_171BE0
    ctx->pc = 0x132A0Cu;
    SET_GPR_U32(ctx, 31, 0x132A14u);
    ctx->pc = 0x132A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132A0Cu;
    // 0x132a10: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171BE0u, 0x132A0Cu, 0x132A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132A14u;
label_132a14:
    // 0x132a14: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x132a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x132a18: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x132a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x132a1c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x132A1Cu;
    {
        const bool branch_taken_0x132a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132a1c) {
            ctx->pc = 0x132A20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132A1Cu;
            // 0x132a20: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x132A40u;
            goto label_132a40;
        }
    }
    ctx->pc = 0x132A24u;
    // 0x132a24: 0x92a2000c  lbu         $v0, 0xC($s5)
    ctx->pc = 0x132a24u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x132a28: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x132A28u;
    {
        const bool branch_taken_0x132a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132a28) {
            ctx->pc = 0x132A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132A28u;
            // 0x132a2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132A38u;
            goto label_132a38;
        }
    }
    ctx->pc = 0x132A30u;
    // 0x132a30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x132A30u;
    {
        const bool branch_taken_0x132a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132A30u;
        // 0x132a34: 0xa2a0000c  sb          $zero, 0xC($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 12), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132a30) {
            ctx->pc = 0x132A3Cu;
            goto label_132a3c;
        }
    }
    ctx->pc = 0x132A38u;
label_132a38:
    // 0x132a38: 0xa2a2000c  sb          $v0, 0xC($s5)
    ctx->pc = 0x132a38u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 12), (uint8_t)GPR_U32(ctx, 2));
label_132a3c:
    // 0x132a3c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x132a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_132a40:
    // 0x132a40: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x132A40u;
    {
        const bool branch_taken_0x132a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132a40) {
            ctx->pc = 0x132A44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132A40u;
            // 0x132a44: 0x3062000c  andi        $v0, $v1, 0xC (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
            ctx->in_delay_slot = false;
            ctx->pc = 0x132A64u;
            goto label_132a64;
        }
    }
    ctx->pc = 0x132A48u;
    // 0x132a48: 0x92a2000c  lbu         $v0, 0xC($s5)
    ctx->pc = 0x132a48u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x132a4c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x132A4Cu;
    {
        const bool branch_taken_0x132a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132a4c) {
            ctx->pc = 0x132A50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132A4Cu;
            // 0x132a50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132A5Cu;
            goto label_132a5c;
        }
    }
    ctx->pc = 0x132A54u;
    // 0x132a54: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x132A54u;
    {
        const bool branch_taken_0x132a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132A54u;
        // 0x132a58: 0xa2a0000c  sb          $zero, 0xC($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 12), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132a54) {
            ctx->pc = 0x132A60u;
            goto label_132a60;
        }
    }
    ctx->pc = 0x132A5Cu;
label_132a5c:
    // 0x132a5c: 0xa2a2000c  sb          $v0, 0xC($s5)
    ctx->pc = 0x132a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 12), (uint8_t)GPR_U32(ctx, 2));
label_132a60:
    // 0x132a60: 0x3062000c  andi        $v0, $v1, 0xC
    ctx->pc = 0x132a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
label_132a64:
    // 0x132a64: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x132A64u;
    {
        const bool branch_taken_0x132a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132a64) {
            ctx->pc = 0x132AC0u;
            goto label_132ac0;
        }
    }
    ctx->pc = 0x132A6Cu;
    // 0x132a6c: 0x92a2000c  lbu         $v0, 0xC($s5)
    ctx->pc = 0x132a6cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x132a70: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x132A70u;
    {
        const bool branch_taken_0x132a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132a70) {
            ctx->pc = 0x132A74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132A70u;
            // 0x132a74: 0x96a20006  lhu         $v0, 0x6($s5) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132A80u;
            goto label_132a80;
        }
    }
    ctx->pc = 0x132A78u;
    // 0x132a78: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x132A78u;
    {
        const bool branch_taken_0x132a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132A78u;
        // 0x132a7c: 0xa2a0000c  sb          $zero, 0xC($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 12), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132a78) {
            ctx->pc = 0x132AC0u;
            goto label_132ac0;
        }
    }
    ctx->pc = 0x132A80u;
label_132a80:
    // 0x132a80: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x132A80u;
    {
        const bool branch_taken_0x132a80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x132a80) {
            ctx->pc = 0x132A84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132A80u;
            // 0x132a84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132ABCu;
            goto label_132abc;
        }
    }
    ctx->pc = 0x132A88u;
    // 0x132a88: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x132a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x132a8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x132a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132a90: 0x9044f35a  lbu         $a0, -0xCA6($v0)
    ctx->pc = 0x132a90u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964058)));
    // 0x132a94: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x132A94u;
    {
        const bool branch_taken_0x132a94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x132a94) {
            ctx->pc = 0x132A98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132A94u;
            // 0x132a98: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132AA4u;
            goto label_132aa4;
        }
    }
    ctx->pc = 0x132A9Cu;
    // 0x132a9c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x132A9Cu;
    {
        const bool branch_taken_0x132a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132A9Cu;
        // 0x132aa0: 0xa2a3000c  sb          $v1, 0xC($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 12), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132a9c) {
            ctx->pc = 0x132AC0u;
            goto label_132ac0;
        }
    }
    ctx->pc = 0x132AA4u;
label_132aa4:
    // 0x132aa4: 0x54820003  bnel        $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x132AA4u;
    {
        const bool branch_taken_0x132aa4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x132aa4) {
            ctx->pc = 0x132AA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132AA4u;
            // 0x132aa8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132AB4u;
            goto label_132ab4;
        }
    }
    ctx->pc = 0x132AACu;
    // 0x132aac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x132AACu;
    {
        const bool branch_taken_0x132aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132AACu;
        // 0x132ab0: 0xa2a3000c  sb          $v1, 0xC($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 12), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132aac) {
            ctx->pc = 0x132AC0u;
            goto label_132ac0;
        }
    }
    ctx->pc = 0x132AB4u;
label_132ab4:
    // 0x132ab4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x132AB4u;
    {
        const bool branch_taken_0x132ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132AB4u;
        // 0x132ab8: 0xa2a2000c  sb          $v0, 0xC($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132ab4) {
            ctx->pc = 0x132AC0u;
            goto label_132ac0;
        }
    }
    ctx->pc = 0x132ABCu;
label_132abc:
    // 0x132abc: 0xa2a2000c  sb          $v0, 0xC($s5)
    ctx->pc = 0x132abcu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 12), (uint8_t)GPR_U32(ctx, 2));
label_132ac0:
    // 0x132ac0: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x132ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x132ac4: 0x32830001  andi        $v1, $s4, 0x1
    ctx->pc = 0x132ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x132ac8: 0x244259b0  addiu       $v0, $v0, 0x59B0
    ctx->pc = 0x132ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22960));
    // 0x132acc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x132accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x132ad0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x132ad0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x132ad4: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x132ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x132ad8: 0x504000ba  beql        $v0, $zero, . + 4 + (0xBA << 2)
    ctx->pc = 0x132AD8u;
    {
        const bool branch_taken_0x132ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132ad8) {
            ctx->pc = 0x132ADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132AD8u;
            // 0x132adc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132DC4u;
            goto label_132dc4;
        }
    }
    ctx->pc = 0x132AE0u;
    // 0x132ae0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x132ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132ae4: 0xc05c6f8  jal         func_171BE0
    ctx->pc = 0x132AE4u;
    SET_GPR_U32(ctx, 31, 0x132AECu);
    ctx->pc = 0x132AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132AE4u;
    // 0x132ae8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171BE0u, 0x132AE4u, 0x132AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132AECu;
label_132aec:
    // 0x132aec: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x132aecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x132af0: 0x96a3000a  lhu         $v1, 0xA($s5)
    ctx->pc = 0x132af0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 10)));
    // 0x132af4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x132af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x132af8: 0x94425960  lhu         $v0, 0x5960($v0)
    ctx->pc = 0x132af8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 22880)));
    // 0x132afc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x132afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x132b00: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x132B00u;
    {
        const bool branch_taken_0x132b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x132B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132B00u;
        // 0x132b04: 0x3066ffff  andi        $a2, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x132b00) {
            ctx->pc = 0x132B0Cu;
            goto label_132b0c;
        }
    }
    ctx->pc = 0x132B08u;
    // 0x132b08: 0x64060100  daddiu      $a2, $zero, 0x100
    ctx->pc = 0x132b08u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)256);
label_132b0c:
    // 0x132b0c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x132b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x132b10: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x132b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x132b14: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x132b14u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x132b18: 0x5443001b  bnel        $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x132B18u;
    {
        const bool branch_taken_0x132b18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x132b18) {
            ctx->pc = 0x132B1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132B18u;
            // 0x132b1c: 0x92a3000c  lbu         $v1, 0xC($s5) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132B88u;
            goto label_132b88;
        }
    }
    ctx->pc = 0x132B20u;
    // 0x132b20: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x132b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x132b24: 0x90459720  lbu         $a1, -0x68E0($v0)
    ctx->pc = 0x132b24u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x132b28: 0x1685000a  bne         $s4, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x132B28u;
    {
        const bool branch_taken_0x132b28 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 5));
        if (branch_taken_0x132b28) {
            ctx->pc = 0x132B54u;
            goto label_132b54;
        }
    }
    ctx->pc = 0x132B30u;
    // 0x132b30: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x132b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x132b34: 0x3c030090  lui         $v1, 0x90
    ctx->pc = 0x132b34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)144 << 16));
    // 0x132b38: 0x8c44bee4  lw          $a0, -0x411C($v0)
    ctx->pc = 0x132b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950628)));
    // 0x132b3c: 0x34621e00  ori         $v0, $v1, 0x1E00
    ctx->pc = 0x132b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)7680);
    // 0x132b40: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x132b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x132b44: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x132B44u;
    {
        const bool branch_taken_0x132b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132b44) {
            ctx->pc = 0x132B54u;
            goto label_132b54;
        }
    }
    ctx->pc = 0x132B4Cu;
    // 0x132b4c: 0x30c2ff00  andi        $v0, $a2, 0xFF00
    ctx->pc = 0x132b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x132b50: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x132b50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_132b54:
    // 0x132b54: 0x1685000b  bne         $s4, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x132B54u;
    {
        const bool branch_taken_0x132b54 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 5));
        if (branch_taken_0x132b54) {
            ctx->pc = 0x132B84u;
            goto label_132b84;
        }
    }
    ctx->pc = 0x132B5Cu;
    // 0x132b5c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x132b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x132b60: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x132b60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x132b64: 0x8c42bee4  lw          $v0, -0x411C($v0)
    ctx->pc = 0x132b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950628)));
    // 0x132b68: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x132b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x132b6c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x132B6Cu;
    {
        const bool branch_taken_0x132b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132b6c) {
            ctx->pc = 0x132B84u;
            goto label_132b84;
        }
    }
    ctx->pc = 0x132B74u;
    // 0x132b74: 0x30c3ff00  andi        $v1, $a2, 0xFF00
    ctx->pc = 0x132b74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x132b78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x132b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132b7c: 0xa2a2000c  sb          $v0, 0xC($s5)
    ctx->pc = 0x132b7cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x132b80: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x132b80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_132b84:
    // 0x132b84: 0x92a3000c  lbu         $v1, 0xC($s5)
    ctx->pc = 0x132b84u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 12)));
label_132b88:
    // 0x132b88: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x132b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x132b8c: 0x50620056  beql        $v1, $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x132B8Cu;
    {
        const bool branch_taken_0x132b8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x132b8c) {
            ctx->pc = 0x132B90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132B8Cu;
            // 0x132b90: 0x30c3ffff  andi        $v1, $a2, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x132CE8u;
            goto label_132ce8;
        }
    }
    ctx->pc = 0x132B94u;
    // 0x132b94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x132b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132b98: 0x50620034  beql        $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x132B98u;
    {
        const bool branch_taken_0x132b98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x132b98) {
            ctx->pc = 0x132B9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132B98u;
            // 0x132b9c: 0x30c3ffff  andi        $v1, $a2, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x132C6Cu;
            goto label_132c6c;
        }
    }
    ctx->pc = 0x132BA0u;
    // 0x132ba0: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x132BA0u;
    {
        const bool branch_taken_0x132ba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x132ba0) {
            ctx->pc = 0x132BA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132BA0u;
            // 0x132ba4: 0x30d1ffff  andi        $s1, $a2, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x132BB0u;
            goto label_132bb0;
        }
    }
    ctx->pc = 0x132BA8u;
    // 0x132ba8: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x132BA8u;
    {
        const bool branch_taken_0x132ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132BA8u;
        // 0x132bac: 0xa6a0000a  sh          $zero, 0xA($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 10), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132ba8) {
            ctx->pc = 0x132DBCu;
            goto label_132dbc;
        }
    }
    ctx->pc = 0x132BB0u;
label_132bb0:
    // 0x132bb0: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x132bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x132bb4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x132BB4u;
    {
        const bool branch_taken_0x132bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132bb4) {
            ctx->pc = 0x132BB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132BB4u;
            // 0x132bb8: 0x32220002  andi        $v0, $s1, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x132BD4u;
            goto label_132bd4;
        }
    }
    ctx->pc = 0x132BBCu;
    // 0x132bbc: 0x96a50004  lhu         $a1, 0x4($s5)
    ctx->pc = 0x132bbcu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x132bc0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x132bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132bc4: 0xc04c8a4  jal         func_132290
    ctx->pc = 0x132BC4u;
    SET_GPR_U32(ctx, 31, 0x132BCCu);
    ctx->pc = 0x132BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132BC4u;
    // 0x132bc8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132290u;
    goto label_132290;
    ctx->pc = 0x132BCCu;
label_132bcc:
    // 0x132bcc: 0xa6a20004  sh          $v0, 0x4($s5)
    ctx->pc = 0x132bccu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x132bd0: 0x32220002  andi        $v0, $s1, 0x2
    ctx->pc = 0x132bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
label_132bd4:
    // 0x132bd4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x132BD4u;
    {
        const bool branch_taken_0x132bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132bd4) {
            ctx->pc = 0x132BD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132BD4u;
            // 0x132bd8: 0x32220004  andi        $v0, $s1, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x132BF4u;
            goto label_132bf4;
        }
    }
    ctx->pc = 0x132BDCu;
    // 0x132bdc: 0x96a50004  lhu         $a1, 0x4($s5)
    ctx->pc = 0x132bdcu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x132be0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x132be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132be4: 0xc04c8a4  jal         func_132290
    ctx->pc = 0x132BE4u;
    SET_GPR_U32(ctx, 31, 0x132BECu);
    ctx->pc = 0x132BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132BE4u;
    // 0x132be8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132290u;
    goto label_132290;
    ctx->pc = 0x132BECu;
label_132bec:
    // 0x132bec: 0xa6a20004  sh          $v0, 0x4($s5)
    ctx->pc = 0x132becu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x132bf0: 0x32220004  andi        $v0, $s1, 0x4
    ctx->pc = 0x132bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
label_132bf4:
    // 0x132bf4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x132BF4u;
    {
        const bool branch_taken_0x132bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132bf4) {
            ctx->pc = 0x132BF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132BF4u;
            // 0x132bf8: 0x32220008  andi        $v0, $s1, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x132C14u;
            goto label_132c14;
        }
    }
    ctx->pc = 0x132BFCu;
    // 0x132bfc: 0x96a50004  lhu         $a1, 0x4($s5)
    ctx->pc = 0x132bfcu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x132c00: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x132c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132c04: 0xc04c8a4  jal         func_132290
    ctx->pc = 0x132C04u;
    SET_GPR_U32(ctx, 31, 0x132C0Cu);
    ctx->pc = 0x132C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132C04u;
    // 0x132c08: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132290u;
    goto label_132290;
    ctx->pc = 0x132C0Cu;
label_132c0c:
    // 0x132c0c: 0xa6a20004  sh          $v0, 0x4($s5)
    ctx->pc = 0x132c0cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x132c10: 0x32220008  andi        $v0, $s1, 0x8
    ctx->pc = 0x132c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
label_132c14:
    // 0x132c14: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x132C14u;
    {
        const bool branch_taken_0x132c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132c14) {
            ctx->pc = 0x132C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132C14u;
            // 0x132c18: 0x322200ff  andi        $v0, $s1, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x132C34u;
            goto label_132c34;
        }
    }
    ctx->pc = 0x132C1Cu;
    // 0x132c1c: 0x96a50004  lhu         $a1, 0x4($s5)
    ctx->pc = 0x132c1cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x132c20: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x132c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132c24: 0xc04c8a4  jal         func_132290
    ctx->pc = 0x132C24u;
    SET_GPR_U32(ctx, 31, 0x132C2Cu);
    ctx->pc = 0x132C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132C24u;
    // 0x132c28: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132290u;
    goto label_132290;
    ctx->pc = 0x132C2Cu;
label_132c2c:
    // 0x132c2c: 0xa6a20004  sh          $v0, 0x4($s5)
    ctx->pc = 0x132c2cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x132c30: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x132c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_132c34:
    // 0x132c34: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x132C34u;
    {
        const bool branch_taken_0x132c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132c34) {
            ctx->pc = 0x132C38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132C34u;
            // 0x132c38: 0x96a20004  lhu         $v0, 0x4($s5) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132C60u;
            goto label_132c60;
        }
    }
    ctx->pc = 0x132C3Cu;
    // 0x132c3c: 0x96a20008  lhu         $v0, 0x8($s5)
    ctx->pc = 0x132c3cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x132c40: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x132C40u;
    {
        const bool branch_taken_0x132c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x132c40) {
            ctx->pc = 0x132C5Cu;
            goto label_132c5c;
        }
    }
    ctx->pc = 0x132C48u;
    // 0x132c48: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x132c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x132c4c: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x132C4Cu;
    SET_GPR_U32(ctx, 31, 0x132C54u);
    ctx->pc = 0x132C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132C4Cu;
    // 0x132c50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x132C4Cu, 0x132C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132C54u;
label_132c54:
    // 0x132c54: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x132c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x132c58: 0xa6a20008  sh          $v0, 0x8($s5)
    ctx->pc = 0x132c58u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 8), (uint16_t)GPR_U32(ctx, 2));
label_132c5c:
    // 0x132c5c: 0x96a20004  lhu         $v0, 0x4($s5)
    ctx->pc = 0x132c5cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
label_132c60:
    // 0x132c60: 0xa2a2000d  sb          $v0, 0xD($s5)
    ctx->pc = 0x132c60u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 13), (uint8_t)GPR_U32(ctx, 2));
    // 0x132c64: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x132C64u;
    {
        const bool branch_taken_0x132c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132C64u;
        // 0x132c68: 0xa2a00010  sb          $zero, 0x10($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 16), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132c64) {
            ctx->pc = 0x132DB8u;
            goto label_132db8;
        }
    }
    ctx->pc = 0x132C6Cu;
label_132c6c:
    // 0x132c6c: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x132c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x132c70: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x132C70u;
    {
        const bool branch_taken_0x132c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x132c70) {
            ctx->pc = 0x132C74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132C70u;
            // 0x132c74: 0x24040125  addiu       $a0, $zero, 0x125 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132CB8u;
            goto label_132cb8;
        }
    }
    ctx->pc = 0x132C78u;
    // 0x132c78: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x132c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x132c7c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x132C7Cu;
    {
        const bool branch_taken_0x132c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132c7c) {
            ctx->pc = 0x132CB4u;
            goto label_132cb4;
        }
    }
    ctx->pc = 0x132C84u;
    // 0x132c84: 0xa2a0000c  sb          $zero, 0xC($s5)
    ctx->pc = 0x132c84u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x132c88: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x132c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x132c8c: 0x90439780  lbu         $v1, -0x6880($v0)
    ctx->pc = 0x132c8cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x132c90: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x132c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x132c94: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x132C94u;
    {
        const bool branch_taken_0x132c94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x132c94) {
            ctx->pc = 0x132CB4u;
            goto label_132cb4;
        }
    }
    ctx->pc = 0x132C9Cu;
    // 0x132c9c: 0xc0d0ba4  jal         func_342E90
    ctx->pc = 0x132C9Cu;
    SET_GPR_U32(ctx, 31, 0x132CA4u);
    ctx->pc = 0x342E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342E90u, 0x132C9Cu, 0x132CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132CA4u;
label_132ca4:
    // 0x132ca4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x132CA4u;
    {
        const bool branch_taken_0x132ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132ca4) {
            ctx->pc = 0x132CB4u;
            goto label_132cb4;
        }
    }
    ctx->pc = 0x132CACu;
    // 0x132cac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x132cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132cb0: 0xa2a2000c  sb          $v0, 0xC($s5)
    ctx->pc = 0x132cb0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 12), (uint8_t)GPR_U32(ctx, 2));
label_132cb4:
    // 0x132cb4: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x132cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
label_132cb8:
    // 0x132cb8: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x132CB8u;
    SET_GPR_U32(ctx, 31, 0x132CC0u);
    ctx->pc = 0x132CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132CB8u;
    // 0x132cbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x132CB8u, 0x132CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132CC0u;
label_132cc0:
    // 0x132cc0: 0x96a50004  lhu         $a1, 0x4($s5)
    ctx->pc = 0x132cc0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x132cc4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x132cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132cc8: 0xc04c8a4  jal         func_132290
    ctx->pc = 0x132CC8u;
    SET_GPR_U32(ctx, 31, 0x132CD0u);
    ctx->pc = 0x132CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132CC8u;
    // 0x132ccc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132290u;
    goto label_132290;
    ctx->pc = 0x132CD0u;
label_132cd0:
    // 0x132cd0: 0xa6a20004  sh          $v0, 0x4($s5)
    ctx->pc = 0x132cd0u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x132cd4: 0x96a30004  lhu         $v1, 0x4($s5)
    ctx->pc = 0x132cd4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x132cd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x132cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132cdc: 0xa2a3000d  sb          $v1, 0xD($s5)
    ctx->pc = 0x132cdcu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 13), (uint8_t)GPR_U32(ctx, 3));
    // 0x132ce0: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x132CE0u;
    {
        const bool branch_taken_0x132ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132CE0u;
        // 0x132ce4: 0xa2a20010  sb          $v0, 0x10($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 16), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132ce0) {
            ctx->pc = 0x132DB8u;
            goto label_132db8;
        }
    }
    ctx->pc = 0x132CE8u;
label_132ce8:
    // 0x132ce8: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x132ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x132cec: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x132CECu;
    {
        const bool branch_taken_0x132cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x132cec) {
            ctx->pc = 0x132CF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132CECu;
            // 0x132cf0: 0x24040125  addiu       $a0, $zero, 0x125 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132D34u;
            goto label_132d34;
        }
    }
    ctx->pc = 0x132CF4u;
    // 0x132cf4: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x132cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x132cf8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x132CF8u;
    {
        const bool branch_taken_0x132cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132cf8) {
            ctx->pc = 0x132D30u;
            goto label_132d30;
        }
    }
    ctx->pc = 0x132D00u;
    // 0x132d00: 0xa2a0000c  sb          $zero, 0xC($s5)
    ctx->pc = 0x132d00u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x132d04: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x132d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x132d08: 0x90439780  lbu         $v1, -0x6880($v0)
    ctx->pc = 0x132d08u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x132d0c: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x132d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x132d10: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x132D10u;
    {
        const bool branch_taken_0x132d10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x132d10) {
            ctx->pc = 0x132D30u;
            goto label_132d30;
        }
    }
    ctx->pc = 0x132D18u;
    // 0x132d18: 0xc0d0ba4  jal         func_342E90
    ctx->pc = 0x132D18u;
    SET_GPR_U32(ctx, 31, 0x132D20u);
    ctx->pc = 0x342E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342E90u, 0x132D18u, 0x132D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132D20u;
label_132d20:
    // 0x132d20: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x132D20u;
    {
        const bool branch_taken_0x132d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132d20) {
            ctx->pc = 0x132D30u;
            goto label_132d30;
        }
    }
    ctx->pc = 0x132D28u;
    // 0x132d28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x132d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132d2c: 0xa2a2000c  sb          $v0, 0xC($s5)
    ctx->pc = 0x132d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 12), (uint8_t)GPR_U32(ctx, 2));
label_132d30:
    // 0x132d30: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x132d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
label_132d34:
    // 0x132d34: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x132D34u;
    SET_GPR_U32(ctx, 31, 0x132D3Cu);
    ctx->pc = 0x132D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132D34u;
    // 0x132d38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x132D34u, 0x132D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132D3Cu;
label_132d3c:
    // 0x132d3c: 0xc067c48  jal         func_19F120
    ctx->pc = 0x132D3Cu;
    SET_GPR_U32(ctx, 31, 0x132D44u);
    ctx->pc = 0x19F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F120u, 0x132D3Cu, 0x132D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132D44u;
label_132d44:
    // 0x132d44: 0x3c024130  lui         $v0, 0x4130
    ctx->pc = 0x132d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16688 << 16));
    // 0x132d48: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x132d48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x132d4c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x132d4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x132d50: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x132d50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x132d54: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x132d54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x132d58: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x132d58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x132d5c: 0x24a5c4a0  addiu       $a1, $a1, -0x3B60
    ctx->pc = 0x132d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952096));
    // 0x132d60: 0x2484c4a1  addiu       $a0, $a0, -0x3B5F
    ctx->pc = 0x132d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952097));
    // 0x132d64: 0x2463c4a2  addiu       $v1, $v1, -0x3B5E
    ctx->pc = 0x132d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952098));
    // 0x132d68: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x132d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x132d6c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x132d6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x132d70: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x132d70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x132d74: 0x0  nop
    ctx->pc = 0x132d74u;
    // NOP
    // 0x132d78: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x132d78u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x132d7c: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x132d7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x132d80: 0xa73021  addu        $a2, $a1, $a3
    ctx->pc = 0x132d80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x132d84: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x132d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x132d88: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x132d88u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x132d8c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x132d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x132d90: 0xa6a50004  sh          $a1, 0x4($s5)
    ctx->pc = 0x132d90u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 4), (uint16_t)GPR_U32(ctx, 5));
    // 0x132d94: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x132d94u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x132d98: 0xa2a5000d  sb          $a1, 0xD($s5)
    ctx->pc = 0x132d98u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 13), (uint8_t)GPR_U32(ctx, 5));
    // 0x132d9c: 0x80840000  lb          $a0, 0x0($a0)
    ctx->pc = 0x132d9cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x132da0: 0xa2a4000e  sb          $a0, 0xE($s5)
    ctx->pc = 0x132da0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 14), (uint8_t)GPR_U32(ctx, 4));
    // 0x132da4: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x132da4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x132da8: 0xa2a3000f  sb          $v1, 0xF($s5)
    ctx->pc = 0x132da8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 15), (uint8_t)GPR_U32(ctx, 3));
    // 0x132dac: 0xa2a20010  sb          $v0, 0x10($s5)
    ctx->pc = 0x132dacu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x132db0: 0xa2a20011  sb          $v0, 0x11($s5)
    ctx->pc = 0x132db0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 17), (uint8_t)GPR_U32(ctx, 2));
    // 0x132db4: 0xa2a20012  sb          $v0, 0x12($s5)
    ctx->pc = 0x132db4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 18), (uint8_t)GPR_U32(ctx, 2));
label_132db8:
    // 0x132db8: 0xa6a0000a  sh          $zero, 0xA($s5)
    ctx->pc = 0x132db8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 10), (uint16_t)GPR_U32(ctx, 0));
label_132dbc:
    // 0x132dbc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x132DBCu;
    {
        const bool branch_taken_0x132dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132DBCu;
        // 0x132dc0: 0x92a3000c  lbu         $v1, 0xC($s5) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132dbc) {
            ctx->pc = 0x132DE0u;
            goto label_132de0;
        }
    }
    ctx->pc = 0x132DC4u;
label_132dc4:
    // 0x132dc4: 0xc05c6f8  jal         func_171BE0
    ctx->pc = 0x132DC4u;
    SET_GPR_U32(ctx, 31, 0x132DCCu);
    ctx->pc = 0x132DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132DC4u;
    // 0x132dc8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171BE0u, 0x132DC4u, 0x132DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132DCCu;
label_132dcc:
    // 0x132dcc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x132dccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x132dd0: 0x96a2000a  lhu         $v0, 0xA($s5)
    ctx->pc = 0x132dd0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 10)));
    // 0x132dd4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x132dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x132dd8: 0xa6a2000a  sh          $v0, 0xA($s5)
    ctx->pc = 0x132dd8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x132ddc: 0x92a3000c  lbu         $v1, 0xC($s5)
    ctx->pc = 0x132ddcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 12)));
label_132de0:
    // 0x132de0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x132de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x132de4: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x132DE4u;
    {
        const bool branch_taken_0x132de4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x132de4) {
            ctx->pc = 0x132DE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132DE4u;
            // 0x132de8: 0x24130003  addiu       $s3, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132E0Cu;
            goto label_132e0c;
        }
    }
    ctx->pc = 0x132DECu;
    // 0x132dec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x132decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132df0: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x132DF0u;
    {
        const bool branch_taken_0x132df0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x132df0) {
            ctx->pc = 0x132DF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132DF0u;
            // 0x132df4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132E0Cu;
            goto label_132e0c;
        }
    }
    ctx->pc = 0x132DF8u;
    // 0x132df8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x132DF8u;
    {
        const bool branch_taken_0x132df8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x132df8) {
            ctx->pc = 0x132E08u;
            goto label_132e08;
        }
    }
    ctx->pc = 0x132E00u;
    // 0x132e00: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x132E00u;
    {
        const bool branch_taken_0x132e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132e00) {
            ctx->pc = 0x132E0Cu;
            goto label_132e0c;
        }
    }
    ctx->pc = 0x132E08u;
label_132e08:
    // 0x132e08: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x132e08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_132e0c:
    // 0x132e0c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x132e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132e10: 0xc05c6f8  jal         func_171BE0
    ctx->pc = 0x132E10u;
    SET_GPR_U32(ctx, 31, 0x132E18u);
    ctx->pc = 0x132E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132E10u;
    // 0x132e14: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171BE0u, 0x132E10u, 0x132E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132E18u;
label_132e18:
    // 0x132e18: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x132e18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x132e1c: 0x94635960  lhu         $v1, 0x5960($v1)
    ctx->pc = 0x132e1cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 22880)));
    // 0x132e20: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x132E20u;
    {
        const bool branch_taken_0x132e20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x132E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132E20u;
        // 0x132e24: 0x3051ffff  andi        $s1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x132e20) {
            ctx->pc = 0x132E2Cu;
            goto label_132e2c;
        }
    }
    ctx->pc = 0x132E28u;
    // 0x132e28: 0x64110100  daddiu      $s1, $zero, 0x100
    ctx->pc = 0x132e28u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)256);
label_132e2c:
    // 0x132e2c: 0x1a600056  blez        $s3, . + 4 + (0x56 << 2)
    ctx->pc = 0x132E2Cu;
    {
        const bool branch_taken_0x132e2c = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x132E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132E2Cu;
        // 0x132e30: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132e2c) {
            ctx->pc = 0x132F88u;
            goto label_132f88;
        }
    }
    ctx->pc = 0x132E34u;
    // 0x132e34: 0x142040  sll         $a0, $s4, 1
    ctx->pc = 0x132e34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x132e38: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x132e38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x132e3c: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x132e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x132e40: 0x24635980  addiu       $v1, $v1, 0x5980
    ctx->pc = 0x132e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22912));
    // 0x132e44: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x132e44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x132e48: 0x64b821  addu        $s7, $v1, $a0
    ctx->pc = 0x132e48u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x132e4c: 0x2b2b021  addu        $s6, $s5, $s2
    ctx->pc = 0x132e4cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
label_132e50:
    // 0x132e50: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x132e50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x132e54: 0x92c4000d  lbu         $a0, 0xD($s6)
    ctx->pc = 0x132e54u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 13)));
    // 0x132e58: 0x3063cf00  andi        $v1, $v1, 0xCF00
    ctx->pc = 0x132e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)52992);
    // 0x132e5c: 0x10600046  beqz        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x132E5Cu;
    {
        const bool branch_taken_0x132e5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x132E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132E5Cu;
        // 0x132e60: 0xa6a40004  sh          $a0, 0x4($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 4), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132e5c) {
            ctx->pc = 0x132F78u;
            goto label_132f78;
        }
    }
    ctx->pc = 0x132E64u;
    // 0x132e64: 0x96a50004  lhu         $a1, 0x4($s5)
    ctx->pc = 0x132e64u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x132e68: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x132e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132e6c: 0xc04c790  jal         func_131E40
    ctx->pc = 0x132E6Cu;
    SET_GPR_U32(ctx, 31, 0x132E74u);
    ctx->pc = 0x132E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132E6Cu;
    // 0x132e70: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E40u, 0x132E6Cu, 0x132E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132E74u;
label_132e74:
    // 0x132e74: 0x14400040  bnez        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x132E74u;
    {
        const bool branch_taken_0x132e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x132e74) {
            ctx->pc = 0x132F78u;
            goto label_132f78;
        }
    }
    ctx->pc = 0x132E7Cu;
    // 0x132e7c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x132e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132e80: 0xc05c6f8  jal         func_171BE0
    ctx->pc = 0x132E80u;
    SET_GPR_U32(ctx, 31, 0x132E88u);
    ctx->pc = 0x132E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132E80u;
    // 0x132e84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171BE0u, 0x132E80u, 0x132E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132E88u;
label_132e88:
    // 0x132e88: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x132e88u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x132e8c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x132e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x132e90: 0x94425960  lhu         $v0, 0x5960($v0)
    ctx->pc = 0x132e90u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 22880)));
    // 0x132e94: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x132E94u;
    {
        const bool branch_taken_0x132e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132e94) {
            ctx->pc = 0x132EA0u;
            goto label_132ea0;
        }
    }
    ctx->pc = 0x132E9Cu;
    // 0x132e9c: 0x64110100  daddiu      $s1, $zero, 0x100
    ctx->pc = 0x132e9cu;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)256);
label_132ea0:
    // 0x132ea0: 0x3222dfff  andi        $v0, $s1, 0xDFFF
    ctx->pc = 0x132ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)57343);
    // 0x132ea4: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x132ea4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x132ea8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x132ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x132eac: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x132eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x132eb0: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x132eb0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x132eb4: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x132EB4u;
    {
        const bool branch_taken_0x132eb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x132EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132EB4u;
        // 0x132eb8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132eb4) {
            ctx->pc = 0x132EC8u;
            goto label_132ec8;
        }
    }
    ctx->pc = 0x132EBCu;
    // 0x132ebc: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x132ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x132ec0: 0x90449748  lbu         $a0, -0x68B8($v0)
    ctx->pc = 0x132ec0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940488)));
    // 0x132ec4: 0x0  nop
    ctx->pc = 0x132ec4u;
    // NOP
label_132ec8:
    // 0x132ec8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x132ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132ecc: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x132ECCu;
    SET_GPR_U32(ctx, 31, 0x132ED4u);
    ctx->pc = 0x132ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132ECCu;
    // 0x132ed0: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x132ECCu, 0x132ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132ED4u;
label_132ed4:
    // 0x132ed4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x132ED4u;
    {
        const bool branch_taken_0x132ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132ed4) {
            ctx->pc = 0x132EE8u;
            goto label_132ee8;
        }
    }
    ctx->pc = 0x132EDCu;
    // 0x132edc: 0x36222000  ori         $v0, $s1, 0x2000
    ctx->pc = 0x132edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)8192);
    // 0x132ee0: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x132ee0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x132ee4: 0x0  nop
    ctx->pc = 0x132ee4u;
    // NOP
label_132ee8:
    // 0x132ee8: 0xc04ec54  jal         func_13B150
    ctx->pc = 0x132EE8u;
    SET_GPR_U32(ctx, 31, 0x132EF0u);
    ctx->pc = 0x132EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132EE8u;
    // 0x132eec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B150u, 0x132EE8u, 0x132EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132EF0u;
label_132ef0:
    // 0x132ef0: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x132ef0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x132ef4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x132ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x132ef8: 0x96a20006  lhu         $v0, 0x6($s5)
    ctx->pc = 0x132ef8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x132efc: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x132efcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x132f00: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x132f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x132f04: 0xa0430151  sb          $v1, 0x151($v0)
    ctx->pc = 0x132f04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 337), (uint8_t)GPR_U32(ctx, 3));
    // 0x132f08: 0xc04ec04  jal         func_13B010
    ctx->pc = 0x132F08u;
    SET_GPR_U32(ctx, 31, 0x132F10u);
    ctx->pc = 0x132F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132F08u;
    // 0x132f0c: 0x92a40004  lbu         $a0, 0x4($s5) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B010u, 0x132F08u, 0x132F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132F10u;
label_132f10:
    // 0x132f10: 0x96a30006  lhu         $v1, 0x6($s5)
    ctx->pc = 0x132f10u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x132f14: 0x96a40004  lhu         $a0, 0x4($s5)
    ctx->pc = 0x132f14u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x132f18: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x132f18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x132f1c: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x132f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x132f20: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x132f20u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x132f24: 0x96a30006  lhu         $v1, 0x6($s5)
    ctx->pc = 0x132f24u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x132f28: 0x96a40004  lhu         $a0, 0x4($s5)
    ctx->pc = 0x132f28u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x132f2c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x132f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x132f30: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x132f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x132f34: 0xa0640150  sb          $a0, 0x150($v1)
    ctx->pc = 0x132f34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 336), (uint8_t)GPR_U32(ctx, 4));
    // 0x132f38: 0x96a30006  lhu         $v1, 0x6($s5)
    ctx->pc = 0x132f38u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x132f3c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x132f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x132f40: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x132f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x132f44: 0xa0620151  sb          $v0, 0x151($v1)
    ctx->pc = 0x132f44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 337), (uint8_t)GPR_U32(ctx, 2));
    // 0x132f48: 0x96a30006  lhu         $v1, 0x6($s5)
    ctx->pc = 0x132f48u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x132f4c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x132f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x132f50: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x132f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x132f54: 0xa0620152  sb          $v0, 0x152($v1)
    ctx->pc = 0x132f54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 338), (uint8_t)GPR_U32(ctx, 2));
    // 0x132f58: 0x96a30006  lhu         $v1, 0x6($s5)
    ctx->pc = 0x132f58u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x132f5c: 0x92c40010  lbu         $a0, 0x10($s6)
    ctx->pc = 0x132f5cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x132f60: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x132f60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x132f64: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x132f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x132f68: 0xa064014c  sb          $a0, 0x14C($v1)
    ctx->pc = 0x132f68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 332), (uint8_t)GPR_U32(ctx, 4));
    // 0x132f6c: 0x96a30006  lhu         $v1, 0x6($s5)
    ctx->pc = 0x132f6cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x132f70: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x132f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x132f74: 0xa6a30006  sh          $v1, 0x6($s5)
    ctx->pc = 0x132f74u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 6), (uint16_t)GPR_U32(ctx, 3));
label_132f78:
    // 0x132f78: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x132f78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x132f7c: 0x253182a  slt         $v1, $s2, $s3
    ctx->pc = 0x132f7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x132f80: 0x5460ffb3  bnel        $v1, $zero, . + 4 + (-0x4D << 2)
    ctx->pc = 0x132F80u;
    {
        const bool branch_taken_0x132f80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x132f80) {
            ctx->pc = 0x132F84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132F80u;
            // 0x132f84: 0x2b2b021  addu        $s6, $s5, $s2 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132E50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_132e50;
        }
    }
    ctx->pc = 0x132F88u;
label_132f88:
    // 0x132f88: 0x1a6000db  blez        $s3, . + 4 + (0xDB << 2)
    ctx->pc = 0x132F88u;
    {
        const bool branch_taken_0x132f88 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x132F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132F88u;
        // 0x132f8c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132f88) {
            ctx->pc = 0x1332F8u;
            goto label_1332f8;
        }
    }
    ctx->pc = 0x132F90u;
    // 0x132f90: 0x2b01021  addu        $v0, $s5, $s0
    ctx->pc = 0x132f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_132f94:
    // 0x132f94: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x132f94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x132f98: 0x9044000d  lbu         $a0, 0xD($v0)
    ctx->pc = 0x132f98u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13)));
    // 0x132f9c: 0x2463c550  addiu       $v1, $v1, -0x3AB0
    ctx->pc = 0x132f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952272));
    // 0x132fa0: 0xa6a40004  sh          $a0, 0x4($s5)
    ctx->pc = 0x132fa0u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x132fa4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x132fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x132fa8: 0x96a40004  lhu         $a0, 0x4($s5)
    ctx->pc = 0x132fa8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x132fac: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x132facu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x132fb0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x132fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x132fb4: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x132fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x132fb8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x132fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x132fbc: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x132fbcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x132fc0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x132FC0u;
    {
        const bool branch_taken_0x132fc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x132fc0) {
            ctx->pc = 0x132FD8u;
            goto label_132fd8;
        }
    }
    ctx->pc = 0x132FC8u;
    // 0x132fc8: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x132fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x132fcc: 0x2442c7f0  addiu       $v0, $v0, -0x3810
    ctx->pc = 0x132fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952944));
    // 0x132fd0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x132FD0u;
    {
        const bool branch_taken_0x132fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132FD0u;
        // 0x132fd4: 0x459021  addu        $s2, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132fd0) {
            ctx->pc = 0x132FE4u;
            goto label_132fe4;
        }
    }
    ctx->pc = 0x132FD8u;
label_132fd8:
    // 0x132fd8: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x132fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x132fdc: 0x2442c730  addiu       $v0, $v0, -0x38D0
    ctx->pc = 0x132fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952752));
    // 0x132fe0: 0x459021  addu        $s2, $v0, $a1
    ctx->pc = 0x132fe0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_132fe4:
    // 0x132fe4: 0x84840002  lh          $a0, 0x2($a0)
    ctx->pc = 0x132fe4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x132fe8: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x132fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x132fec: 0x2463c550  addiu       $v1, $v1, -0x3AB0
    ctx->pc = 0x132fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952272));
    // 0x132ff0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x132ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132ff4: 0xa6a40014  sh          $a0, 0x14($s5)
    ctx->pc = 0x132ff4u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 20), (uint16_t)GPR_U32(ctx, 4));
    // 0x132ff8: 0x96a50004  lhu         $a1, 0x4($s5)
    ctx->pc = 0x132ff8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x132ffc: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x132ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x133000: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x133000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x133004: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x133004u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x133008: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x133008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13300c: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x13300cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x133010: 0x12820059  beq         $s4, $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x133010u;
    {
        const bool branch_taken_0x133010 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x133014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133010u;
        // 0x133014: 0xa6a30016  sh          $v1, 0x16($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 22), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133010) {
            ctx->pc = 0x133178u;
            goto label_133178;
        }
    }
    ctx->pc = 0x133018u;
    // 0x133018: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x133018u;
    {
        const bool branch_taken_0x133018 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x133018) {
            ctx->pc = 0x133028u;
            goto label_133028;
        }
    }
    ctx->pc = 0x133020u;
    // 0x133020: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x133020u;
    {
        const bool branch_taken_0x133020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133020) {
            ctx->pc = 0x1332B8u;
            goto label_1332b8;
        }
    }
    ctx->pc = 0x133028u;
label_133028:
    // 0x133028: 0x92a20013  lbu         $v0, 0x13($s5)
    ctx->pc = 0x133028u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 19)));
    // 0x13302c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x13302cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x133030: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x133030u;
    {
        const bool branch_taken_0x133030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x133030) {
            ctx->pc = 0x1330A0u;
            goto label_1330a0;
        }
    }
    ctx->pc = 0x133038u;
    // 0x133038: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x133038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x13303c: 0x240a0040  addiu       $t2, $zero, 0x40
    ctx->pc = 0x13303cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x133040: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x133040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x133044: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x133044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x133048: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x133048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x13304c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x13304cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x133050: 0xffaa0018  sd          $t2, 0x18($sp)
    ctx->pc = 0x133050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 10));
    // 0x133054: 0x2406fff5  addiu       $a2, $zero, -0xB
    ctx->pc = 0x133054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
    // 0x133058: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x133058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13305c: 0xffaa0020  sd          $t2, 0x20($sp)
    ctx->pc = 0x13305cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 10));
    // 0x133060: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x133060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x133064: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x133064u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x133068: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x133068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x13306c: 0x27a40338  addiu       $a0, $sp, 0x338
    ctx->pc = 0x13306cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 824));
    // 0x133070: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x133070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x133074: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x133074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x133078: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x133078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
    // 0x13307c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x13307cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133080: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x133080u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133084: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x133084u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133088: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x133088u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13308c: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x13308Cu;
    SET_GPR_U32(ctx, 31, 0x133094u);
    ctx->pc = 0x133090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13308Cu;
    // 0x133090: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ADF0u, 0x13308Cu, 0x133094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133094u;
label_133094:
    // 0x133094: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x133094u;
    {
        const bool branch_taken_0x133094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133094) {
            ctx->pc = 0x133100u;
            goto label_133100;
        }
    }
    ctx->pc = 0x13309Cu;
    // 0x13309c: 0x0  nop
    ctx->pc = 0x13309cu;
    // NOP
label_1330a0:
    // 0x1330a0: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1330a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1330a4: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x1330a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x1330a8: 0x240a0040  addiu       $t2, $zero, 0x40
    ctx->pc = 0x1330a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1330ac: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1330acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x1330b0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1330b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1330b4: 0xffaa0018  sd          $t2, 0x18($sp)
    ctx->pc = 0x1330b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 10));
    // 0x1330b8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1330b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1330bc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1330bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1330c0: 0xffaa0020  sd          $t2, 0x20($sp)
    ctx->pc = 0x1330c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 10));
    // 0x1330c4: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x1330c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x1330c8: 0x2406fff5  addiu       $a2, $zero, -0xB
    ctx->pc = 0x1330c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
    // 0x1330cc: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x1330ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x1330d0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1330d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1330d4: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x1330d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x1330d8: 0x27a40338  addiu       $a0, $sp, 0x338
    ctx->pc = 0x1330d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 824));
    // 0x1330dc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1330dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1330e0: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x1330e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
    // 0x1330e4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1330e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1330e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1330e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1330ec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1330ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1330f0: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x1330f0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1330f4: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x1330F4u;
    SET_GPR_U32(ctx, 31, 0x1330FCu);
    ctx->pc = 0x1330F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1330F4u;
    // 0x1330f8: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ADF0u, 0x1330F4u, 0x1330FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1330FCu;
label_1330fc:
    // 0x1330fc: 0x0  nop
    ctx->pc = 0x1330fcu;
    // NOP
label_133100:
    // 0x133100: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x133100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x133104: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x133104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x133108: 0x2406fff9  addiu       $a2, $zero, -0x7
    ctx->pc = 0x133108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x13310c: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x13310cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x133110: 0x3c023cf5  lui         $v0, 0x3CF5
    ctx->pc = 0x133110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15605 << 16));
    // 0x133114: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x133114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x133118: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x133118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x13311c: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x13311cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x133120: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x133120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x133124: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x133124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x133128: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x133128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13312c: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x13312cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x133130: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x133130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x133134: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x133134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x133138: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x133138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x13313c: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x13313cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x133140: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x133140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x133144: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x133144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
    // 0x133148: 0x240a0038  addiu       $t2, $zero, 0x38
    ctx->pc = 0x133148u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x13314c: 0x96480000  lhu         $t0, 0x0($s2)
    ctx->pc = 0x13314cu;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x133150: 0x27a40338  addiu       $a0, $sp, 0x338
    ctx->pc = 0x133150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 824));
    // 0x133154: 0x96490002  lhu         $t1, 0x2($s2)
    ctx->pc = 0x133154u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x133158: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x133158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13315c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x13315cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133160: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x133160u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133164: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x133164u;
    SET_GPR_U32(ctx, 31, 0x13316Cu);
    ctx->pc = 0x133168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133164u;
    // 0x133168: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ADF0u, 0x133164u, 0x13316Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13316Cu;
label_13316c:
    // 0x13316c: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x13316Cu;
    {
        const bool branch_taken_0x13316c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13316c) {
            ctx->pc = 0x1332B8u;
            goto label_1332b8;
        }
    }
    ctx->pc = 0x133174u;
    // 0x133174: 0x0  nop
    ctx->pc = 0x133174u;
    // NOP
label_133178:
    // 0x133178: 0x92a20013  lbu         $v0, 0x13($s5)
    ctx->pc = 0x133178u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 19)));
    // 0x13317c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x13317cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x133180: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x133180u;
    {
        const bool branch_taken_0x133180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x133180) {
            ctx->pc = 0x1331F0u;
            goto label_1331f0;
        }
    }
    ctx->pc = 0x133188u;
    // 0x133188: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x133188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x13318c: 0x240a0040  addiu       $t2, $zero, 0x40
    ctx->pc = 0x13318cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x133190: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x133190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x133194: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x133194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x133198: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x133198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x13319c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x13319cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1331a0: 0xffaa0018  sd          $t2, 0x18($sp)
    ctx->pc = 0x1331a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 10));
    // 0x1331a4: 0x2406fff5  addiu       $a2, $zero, -0xB
    ctx->pc = 0x1331a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
    // 0x1331a8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1331a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1331ac: 0xffaa0020  sd          $t2, 0x20($sp)
    ctx->pc = 0x1331acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 10));
    // 0x1331b0: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x1331b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x1331b4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1331b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1331b8: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x1331b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x1331bc: 0x27a40338  addiu       $a0, $sp, 0x338
    ctx->pc = 0x1331bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 824));
    // 0x1331c0: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x1331c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x1331c4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1331c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1331c8: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x1331c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
    // 0x1331cc: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1331ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1331d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1331d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1331d4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1331d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1331d8: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x1331d8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1331dc: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x1331DCu;
    SET_GPR_U32(ctx, 31, 0x1331E4u);
    ctx->pc = 0x1331E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1331DCu;
    // 0x1331e0: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ADF0u, 0x1331DCu, 0x1331E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1331E4u;
label_1331e4:
    // 0x1331e4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1331E4u;
    {
        const bool branch_taken_0x1331e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1331e4) {
            ctx->pc = 0x133250u;
            goto label_133250;
        }
    }
    ctx->pc = 0x1331ECu;
    // 0x1331ec: 0x0  nop
    ctx->pc = 0x1331ecu;
    // NOP
label_1331f0:
    // 0x1331f0: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1331f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1331f4: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x1331f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x1331f8: 0x240a0040  addiu       $t2, $zero, 0x40
    ctx->pc = 0x1331f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1331fc: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1331fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x133200: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x133200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x133204: 0xffaa0018  sd          $t2, 0x18($sp)
    ctx->pc = 0x133204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 10));
    // 0x133208: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x133208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x13320c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x13320cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x133210: 0xffaa0020  sd          $t2, 0x20($sp)
    ctx->pc = 0x133210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 10));
    // 0x133214: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x133214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x133218: 0x2406fff5  addiu       $a2, $zero, -0xB
    ctx->pc = 0x133218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
    // 0x13321c: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x13321cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x133220: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x133220u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x133224: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x133224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x133228: 0x27a40338  addiu       $a0, $sp, 0x338
    ctx->pc = 0x133228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 824));
    // 0x13322c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x13322cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x133230: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x133230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
    // 0x133234: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x133234u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133238: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x133238u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13323c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x13323cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133240: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x133240u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133244: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x133244u;
    SET_GPR_U32(ctx, 31, 0x13324Cu);
    ctx->pc = 0x133248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133244u;
    // 0x133248: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ADF0u, 0x133244u, 0x13324Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13324Cu;
label_13324c:
    // 0x13324c: 0x0  nop
    ctx->pc = 0x13324cu;
    // NOP
label_133250:
    // 0x133250: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x133250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x133254: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x133254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x133258: 0x3c023cf5  lui         $v0, 0x3CF5
    ctx->pc = 0x133258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15605 << 16));
    // 0x13325c: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x13325cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x133260: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x133260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x133264: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x133264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x133268: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x133268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x13326c: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x13326cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x133270: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x133270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x133274: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x133274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x133278: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x133278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13327c: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x13327cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x133280: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x133280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x133284: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x133284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x133288: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x133288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x13328c: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x13328cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
    // 0x133290: 0x2406fff9  addiu       $a2, $zero, -0x7
    ctx->pc = 0x133290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x133294: 0x96480000  lhu         $t0, 0x0($s2)
    ctx->pc = 0x133294u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x133298: 0x240a0038  addiu       $t2, $zero, 0x38
    ctx->pc = 0x133298u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x13329c: 0x96490002  lhu         $t1, 0x2($s2)
    ctx->pc = 0x13329cu;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x1332a0: 0x27a40338  addiu       $a0, $sp, 0x338
    ctx->pc = 0x1332a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 824));
    // 0x1332a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1332a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1332a8: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1332a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1332ac: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x1332acu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1332b0: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x1332B0u;
    SET_GPR_U32(ctx, 31, 0x1332B8u);
    ctx->pc = 0x1332B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1332B0u;
    // 0x1332b4: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ADF0u, 0x1332B0u, 0x1332B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1332B8u;
label_1332b8:
    // 0x1332b8: 0x86a30014  lh          $v1, 0x14($s5)
    ctx->pc = 0x1332b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x1332bc: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1332bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1332c0: 0x86a20016  lh          $v0, 0x16($s5)
    ctx->pc = 0x1332c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 22)));
    // 0x1332c4: 0x8fa60338  lw          $a2, 0x338($sp)
    ctx->pc = 0x1332c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 824)));
    // 0x1332c8: 0xc6ae0018  lwc1        $f14, 0x18($s5)
    ctx->pc = 0x1332c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1332cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1332ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1332d0: 0x2484d840  addiu       $a0, $a0, -0x27C0
    ctx->pc = 0x1332d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957120));
    // 0x1332d4: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1332d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1332d8: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x1332d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1332dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1332dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1332e0: 0xc0c5368  jal         func_314DA0
    ctx->pc = 0x1332E0u;
    SET_GPR_U32(ctx, 31, 0x1332E8u);
    ctx->pc = 0x1332E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1332E0u;
    // 0x1332e4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x314DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314DA0u, 0x1332E0u, 0x1332E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1332E8u;
label_1332e8:
    // 0x1332e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1332e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1332ec: 0x213182a  slt         $v1, $s0, $s3
    ctx->pc = 0x1332ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1332f0: 0x5460ff28  bnel        $v1, $zero, . + 4 + (-0xD8 << 2)
    ctx->pc = 0x1332F0u;
    {
        const bool branch_taken_0x1332f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1332f0) {
            ctx->pc = 0x1332F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1332F0u;
            // 0x1332f4: 0x2b01021  addu        $v0, $s5, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132F94u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_132f94;
        }
    }
    ctx->pc = 0x1332F8u;
label_1332f8:
    // 0x1332f8: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x1332f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x1332fc: 0x3064cf00  andi        $a0, $v1, 0xCF00
    ctx->pc = 0x1332fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)52992);
    // 0x133300: 0x92a6000d  lbu         $a2, 0xD($s5)
    ctx->pc = 0x133300u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 13)));
    // 0x133304: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x133304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x133308: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x133308u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x13330c: 0x24635998  addiu       $v1, $v1, 0x5998
    ctx->pc = 0x13330cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22936));
    // 0x133310: 0x24a559a0  addiu       $a1, $a1, 0x59A0
    ctx->pc = 0x133310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22944));
    // 0x133314: 0x743821  addu        $a3, $v1, $s4
    ctx->pc = 0x133314u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x133318: 0xa6a60004  sh          $a2, 0x4($s5)
    ctx->pc = 0x133318u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 4), (uint16_t)GPR_U32(ctx, 6));
    // 0x13331c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13331cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x133320: 0xb44021  addu        $t0, $a1, $s4
    ctx->pc = 0x133320u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x133324: 0x2831804  sllv        $v1, $v1, $s4
    ctx->pc = 0x133324u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 20) & 0x1F));
    // 0x133328: 0x96a90004  lhu         $t1, 0x4($s5)
    ctx->pc = 0x133328u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x13332c: 0x602827  not         $a1, $v1
    ctx->pc = 0x13332cu;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x133330: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x133330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x133334: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x133334u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x133338: 0x90655bf8  lbu         $a1, 0x5BF8($v1)
    ctx->pc = 0x133338u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 23544)));
    // 0x13333c: 0xa1090000  sb          $t1, 0x0($t0)
    ctx->pc = 0x13333cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x133340: 0x92a8000c  lbu         $t0, 0xC($s5)
    ctx->pc = 0x133340u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x133344: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x133344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x133348: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x133348u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x13334c: 0xa0655bf8  sb          $a1, 0x5BF8($v1)
    ctx->pc = 0x13334cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 23544), (uint8_t)GPR_U32(ctx, 5));
    // 0x133350: 0x31030003  andi        $v1, $t0, 0x3
    ctx->pc = 0x133350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x133354: 0x1080003c  beqz        $a0, . + 4 + (0x3C << 2)
    ctx->pc = 0x133354u;
    {
        const bool branch_taken_0x133354 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x133358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133354u;
        // 0x133358: 0xa0e30000  sb          $v1, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133354) {
            ctx->pc = 0x133448u;
            goto label_133448;
        }
    }
    ctx->pc = 0x13335Cu;
    // 0x13335c: 0x96a50004  lhu         $a1, 0x4($s5)
    ctx->pc = 0x13335cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x133360: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x133360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x133364: 0x2463c550  addiu       $v1, $v1, -0x3AB0
    ctx->pc = 0x133364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952272));
    // 0x133368: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x133368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13336c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x13336cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x133370: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x133370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x133374: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x133374u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x133378: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x133378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13337c: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x13337cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x133380: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x133380u;
    {
        const bool branch_taken_0x133380 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x133380) {
            ctx->pc = 0x13339Cu;
            goto label_13339c;
        }
    }
    ctx->pc = 0x133388u;
    // 0x133388: 0x24040138  addiu       $a0, $zero, 0x138
    ctx->pc = 0x133388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 312));
    // 0x13338c: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x13338Cu;
    SET_GPR_U32(ctx, 31, 0x133394u);
    ctx->pc = 0x133390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13338Cu;
    // 0x133390: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x13338Cu, 0x133394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133394u;
label_133394:
    // 0x133394: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x133394u;
    {
        const bool branch_taken_0x133394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133394u;
        // 0x133398: 0x96a50004  lhu         $a1, 0x4($s5) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133394) {
            ctx->pc = 0x1333BCu;
            goto label_1333bc;
        }
    }
    ctx->pc = 0x13339Cu;
label_13339c:
    // 0x13339c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x13339cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1333a0: 0x94425960  lhu         $v0, 0x5960($v0)
    ctx->pc = 0x1333a0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 22880)));
    // 0x1333a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1333A4u;
    {
        const bool branch_taken_0x1333a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1333a4) {
            ctx->pc = 0x1333B8u;
            goto label_1333b8;
        }
    }
    ctx->pc = 0x1333ACu;
    // 0x1333ac: 0x24040127  addiu       $a0, $zero, 0x127
    ctx->pc = 0x1333acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 295));
    // 0x1333b0: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x1333B0u;
    SET_GPR_U32(ctx, 31, 0x1333B8u);
    ctx->pc = 0x1333B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1333B0u;
    // 0x1333b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x1333B0u, 0x1333B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1333B8u;
label_1333b8:
    // 0x1333b8: 0x96a50004  lhu         $a1, 0x4($s5)
    ctx->pc = 0x1333b8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
label_1333bc:
    // 0x1333bc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1333bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1333c0: 0xc04c8a4  jal         func_132290
    ctx->pc = 0x1333C0u;
    SET_GPR_U32(ctx, 31, 0x1333C8u);
    ctx->pc = 0x1333C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1333C0u;
    // 0x1333c4: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132290u;
    goto label_132290;
    ctx->pc = 0x1333C8u;
label_1333c8:
    // 0x1333c8: 0xa6a20004  sh          $v0, 0x4($s5)
    ctx->pc = 0x1333c8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x1333cc: 0x96a30004  lhu         $v1, 0x4($s5)
    ctx->pc = 0x1333ccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1333d0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1333D0u;
    {
        const bool branch_taken_0x1333d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1333D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1333D0u;
        // 0x1333d4: 0xa2a3000d  sb          $v1, 0xD($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 13), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1333d0) {
            ctx->pc = 0x133448u;
            goto label_133448;
        }
    }
    ctx->pc = 0x1333D8u;
label_1333d8:
    // 0x1333d8: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x1333d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x1333dc: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x1333dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1333e0: 0x90639780  lbu         $v1, -0x6880($v1)
    ctx->pc = 0x1333e0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x1333e4: 0x54640012  bnel        $v1, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1333E4u;
    {
        const bool branch_taken_0x1333e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1333e4) {
            ctx->pc = 0x1333E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1333E4u;
            // 0x1333e8: 0x2852004  sllv        $a0, $a1, $s4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 20) & 0x1F));
            ctx->in_delay_slot = false;
            ctx->pc = 0x133430u;
            goto label_133430;
        }
    }
    ctx->pc = 0x1333ECu;
    // 0x1333ec: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1333ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1333f0: 0x2858004  sllv        $s0, $a1, $s4
    ctx->pc = 0x1333f0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 20) & 0x1F));
    // 0x1333f4: 0x90635bf8  lbu         $v1, 0x5BF8($v1)
    ctx->pc = 0x1333f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 23544)));
    // 0x1333f8: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x1333f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x1333fc: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1333FCu;
    {
        const bool branch_taken_0x1333fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1333fc) {
            ctx->pc = 0x133448u;
            goto label_133448;
        }
    }
    ctx->pc = 0x133404u;
    // 0x133404: 0xc0d43fc  jal         func_350FF0
    ctx->pc = 0x133404u;
    SET_GPR_U32(ctx, 31, 0x13340Cu);
    ctx->pc = 0x350FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350FF0u, 0x133404u, 0x13340Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13340Cu;
label_13340c:
    // 0x13340c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x13340Cu;
    {
        const bool branch_taken_0x13340c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13340c) {
            ctx->pc = 0x133448u;
            goto label_133448;
        }
    }
    ctx->pc = 0x133414u;
    // 0x133414: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x133414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x133418: 0x320500ff  andi        $a1, $s0, 0xFF
    ctx->pc = 0x133418u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x13341c: 0x90645bf8  lbu         $a0, 0x5BF8($v1)
    ctx->pc = 0x13341cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 23544)));
    // 0x133420: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x133420u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x133424: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x133424u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x133428: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x133428u;
    {
        const bool branch_taken_0x133428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13342Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133428u;
        // 0x13342c: 0xa0645bf8  sb          $a0, 0x5BF8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 23544), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133428) {
            ctx->pc = 0x133448u;
            goto label_133448;
        }
    }
    ctx->pc = 0x133430u;
label_133430:
    // 0x133430: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x133430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x133434: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x133434u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x133438: 0x90645bf8  lbu         $a0, 0x5BF8($v1)
    ctx->pc = 0x133438u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 23544)));
    // 0x13343c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x13343cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x133440: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x133440u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x133444: 0xa0645bf8  sb          $a0, 0x5BF8($v1)
    ctx->pc = 0x133444u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 23544), (uint8_t)GPR_U32(ctx, 4));
label_133448:
    // 0x133448: 0x96a30008  lhu         $v1, 0x8($s5)
    ctx->pc = 0x133448u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 8)));
label_13344c:
    // 0x13344c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x13344Cu;
    {
        const bool branch_taken_0x13344c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13344c) {
            ctx->pc = 0x133450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13344Cu;
            // 0x133450: 0x92a30013  lbu         $v1, 0x13($s5) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 19)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x133460u;
            goto label_133460;
        }
    }
    ctx->pc = 0x133454u;
    // 0x133454: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x133454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x133458: 0xa6a30008  sh          $v1, 0x8($s5)
    ctx->pc = 0x133458u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x13345c: 0x92a30013  lbu         $v1, 0x13($s5)
    ctx->pc = 0x13345cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 19)));
label_133460:
    // 0x133460: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x133460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x133464: 0xa2a30013  sb          $v1, 0x13($s5)
    ctx->pc = 0x133464u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 19), (uint8_t)GPR_U32(ctx, 3));
    // 0x133468: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x133468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x13346c: 0x7bbe00d0  lq          $fp, 0xD0($sp)
    ctx->pc = 0x13346cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x133470: 0x7bb700c0  lq          $s7, 0xC0($sp)
    ctx->pc = 0x133470u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x133474: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x133474u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x133478: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x133478u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x13347c: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x13347cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x133480: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x133480u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x133484: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x133484u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x133488: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x133488u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13348c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x13348cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x133490: 0x3e00008  jr          $ra
    ctx->pc = 0x133490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133490u;
        // 0x133494: 0x27bd0340  addiu       $sp, $sp, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133498u;
    // 0x133498: 0x0  nop
    ctx->pc = 0x133498u;
    // NOP
    // 0x13349c: 0x0  nop
    ctx->pc = 0x13349cu;
    // NOP
    // 0x1334a0: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x1334a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x1334a4: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1334a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1334a8: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1334a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x1334ac: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x1334acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1334b0: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x1334b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x1334b4: 0x24050168  addiu       $a1, $zero, 0x168
    ctx->pc = 0x1334b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x1334b8: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x1334b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x1334bc: 0x246359a0  addiu       $v1, $v1, 0x59A0
    ctx->pc = 0x1334bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22944));
    // 0x1334c0: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1334c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1334c4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1334c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1334c8: 0xafa2019c  sw          $v0, 0x19C($sp)
    ctx->pc = 0x1334c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 2));
    // 0x1334cc: 0xafa00198  sw          $zero, 0x198($sp)
    ctx->pc = 0x1334ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 0));
    // 0x1334d0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1334d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1334d4: 0x8c920010  lw          $s2, 0x10($a0)
    ctx->pc = 0x1334d4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1334d8: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1334d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1334dc: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x1334dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1334e0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1334e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1334e4: 0x85001a  div         $zero, $a0, $a1
    ctx->pc = 0x1334e4u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1334e8: 0xae440004  sw          $a0, 0x4($s2)
    ctx->pc = 0x1334e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 4));
    // 0x1334ec: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1334ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1334f0: 0x2010  mfhi        $a0
    ctx->pc = 0x1334f0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1334f4: 0xae440004  sw          $a0, 0x4($s2)
    ctx->pc = 0x1334f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 4));
    // 0x1334f8: 0x90700000  lbu         $s0, 0x0($v1)
    ctx->pc = 0x1334f8u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1334fc: 0x52020019  beql        $s0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1334FCu;
    {
        const bool branch_taken_0x1334fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1334fc) {
            ctx->pc = 0x133500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1334FCu;
            // 0x133500: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x133564u;
            goto label_133564;
        }
    }
    ctx->pc = 0x133504u;
    // 0x133504: 0x3202003f  andi        $v0, $s0, 0x3F
    ctx->pc = 0x133504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)63);
    // 0x133508: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x133508u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x13350c: 0x2484d840  addiu       $a0, $a0, -0x27C0
    ctx->pc = 0x13350cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957120));
    // 0x133510: 0xc067cd0  jal         func_19F340
    ctx->pc = 0x133510u;
    SET_GPR_U32(ctx, 31, 0x133518u);
    ctx->pc = 0x133514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133510u;
    // 0x133514: 0x24530007  addiu       $s3, $v0, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F340u, 0x133510u, 0x133518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133518u;
label_133518:
    // 0x133518: 0x2a020029  slti        $v0, $s0, 0x29
    ctx->pc = 0x133518u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x13351c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13351Cu;
    {
        const bool branch_taken_0x13351c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13351c) {
            ctx->pc = 0x133548u;
            goto label_133548;
        }
    }
    ctx->pc = 0x133524u;
    // 0x133524: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x133524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x133528: 0x2664ffff  addiu       $a0, $s3, -0x1
    ctx->pc = 0x133528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x13352c: 0x21a40  sll         $v1, $v0, 9
    ctx->pc = 0x13352cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 9));
    // 0x133530: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x133530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x133534: 0x8c425608  lw          $v0, 0x5608($v0)
    ctx->pc = 0x133534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22024)));
    // 0x133538: 0xc0c4a84  jal         func_312A10
    ctx->pc = 0x133538u;
    SET_GPR_U32(ctx, 31, 0x133540u);
    ctx->pc = 0x13353Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133538u;
    // 0x13353c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312A10u, 0x133538u, 0x133540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133540u;
label_133540:
    // 0x133540: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x133540u;
    {
        const bool branch_taken_0x133540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133540) {
            ctx->pc = 0x133560u;
            goto label_133560;
        }
    }
    ctx->pc = 0x133548u;
label_133548:
    // 0x133548: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x133548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x13354c: 0x101a40  sll         $v1, $s0, 9
    ctx->pc = 0x13354cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 9));
    // 0x133550: 0x8c425608  lw          $v0, 0x5608($v0)
    ctx->pc = 0x133550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22024)));
    // 0x133554: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x133554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133558: 0xc0c4a84  jal         func_312A10
    ctx->pc = 0x133558u;
    SET_GPR_U32(ctx, 31, 0x133560u);
    ctx->pc = 0x13355Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133558u;
    // 0x13355c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312A10u, 0x133558u, 0x133560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133560u;
label_133560:
    // 0x133560: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x133560u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_133564:
    // 0x133564: 0x5229005f  beql        $s1, $t1, . + 4 + (0x5F << 2)
    ctx->pc = 0x133564u;
    {
        const bool branch_taken_0x133564 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 9));
        if (branch_taken_0x133564) {
            ctx->pc = 0x133568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133564u;
            // 0x133568: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1336E4u;
            goto label_1336e4;
        }
    }
    ctx->pc = 0x13356Cu;
    // 0x13356c: 0x52200003  beql        $s1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13356Cu;
    {
        const bool branch_taken_0x13356c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x13356c) {
            ctx->pc = 0x133570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13356Cu;
            // 0x133570: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13357Cu;
            goto label_13357c;
        }
    }
    ctx->pc = 0x133574u;
    // 0x133574: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x133574u;
    {
        const bool branch_taken_0x133574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133574u;
        // 0x133578: 0x86430008  lh          $v1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133574) {
            ctx->pc = 0x133850u;
            goto label_133850;
        }
    }
    ctx->pc = 0x13357Cu;
label_13357c:
    // 0x13357c: 0x240a016e  addiu       $t2, $zero, 0x16E
    ctx->pc = 0x13357cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 366));
    // 0x133580: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x133580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x133584: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x133584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x133588: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x133588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x13358c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x13358cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x133590: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x133590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x133594: 0x240700b7  addiu       $a3, $zero, 0xB7
    ctx->pc = 0x133594u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 183));
    // 0x133598: 0xffa20020  sd          $v0, 0x20($sp)
    ctx->pc = 0x133598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 2));
    // 0x13359c: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x13359cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x1335a0: 0xffa50028  sd          $a1, 0x28($sp)
    ctx->pc = 0x1335a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 5));
    // 0x1335a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1335a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1335a8: 0xffa50030  sd          $a1, 0x30($sp)
    ctx->pc = 0x1335a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 5));
    // 0x1335ac: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1335acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1335b0: 0xffa50038  sd          $a1, 0x38($sp)
    ctx->pc = 0x1335b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 5));
    // 0x1335b4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1335b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1335b8: 0xffa50040  sd          $a1, 0x40($sp)
    ctx->pc = 0x1335b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 5));
    // 0x1335bc: 0x27a40198  addiu       $a0, $sp, 0x198
    ctx->pc = 0x1335bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
    // 0x1335c0: 0xffa70048  sd          $a3, 0x48($sp)
    ctx->pc = 0x1335c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 7));
    // 0x1335c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1335c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1335c8: 0xffa70050  sd          $a3, 0x50($sp)
    ctx->pc = 0x1335c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 7));
    // 0x1335cc: 0x2406ffb5  addiu       $a2, $zero, -0x4B
    ctx->pc = 0x1335ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967221));
    // 0x1335d0: 0xffa00058  sd          $zero, 0x58($sp)
    ctx->pc = 0x1335d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 0));
    // 0x1335d4: 0x2407fff1  addiu       $a3, $zero, -0xF
    ctx->pc = 0x1335d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x1335d8: 0xffa00060  sd          $zero, 0x60($sp)
    ctx->pc = 0x1335d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 0));
    // 0x1335dc: 0x24080009  addiu       $t0, $zero, 0x9
    ctx->pc = 0x1335dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1335e0: 0xffa00068  sd          $zero, 0x68($sp)
    ctx->pc = 0x1335e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 0));
    // 0x1335e4: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x1335e4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1335e8: 0x86420004  lh          $v0, 0x4($s2)
    ctx->pc = 0x1335e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1335ec: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x1335ecu;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x1335f0: 0xffa20070  sd          $v0, 0x70($sp)
    ctx->pc = 0x1335f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 2));
    // 0x1335f4: 0xc04ebb0  jal         func_13AEC0
    ctx->pc = 0x1335F4u;
    SET_GPR_U32(ctx, 31, 0x1335FCu);
    ctx->pc = 0x1335F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1335F4u;
    // 0x1335f8: 0xffa30078  sd          $v1, 0x78($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AEC0u, 0x1335F4u, 0x1335FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1335FCu;
label_1335fc:
    // 0x1335fc: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1335fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x133600: 0x12020092  beq         $s0, $v0, . + 4 + (0x92 << 2)
    ctx->pc = 0x133600u;
    {
        const bool branch_taken_0x133600 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x133600) {
            ctx->pc = 0x13384Cu;
            goto label_13384c;
        }
    }
    ctx->pc = 0x133608u;
    // 0x133608: 0x2a020029  slti        $v0, $s0, 0x29
    ctx->pc = 0x133608u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x13360c: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x13360Cu;
    {
        const bool branch_taken_0x13360c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13360c) {
            ctx->pc = 0x133610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13360Cu;
            // 0x133610: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x133680u;
            goto label_133680;
        }
    }
    ctx->pc = 0x133614u;
    // 0x133614: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x133614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x133618: 0x240a0100  addiu       $t2, $zero, 0x100
    ctx->pc = 0x133618u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x13361c: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x13361cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x133620: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x133620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x133624: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x133624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x133628: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x133628u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13362c: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x13362cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x133630: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x133630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x133634: 0xffaa0018  sd          $t2, 0x18($sp)
    ctx->pc = 0x133634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 10));
    // 0x133638: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x133638u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x13363c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x13363cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x133640: 0xffaa0020  sd          $t2, 0x20($sp)
    ctx->pc = 0x133640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 10));
    // 0x133644: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x133644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x133648: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x133648u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13364c: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x13364cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x133650: 0x27a40198  addiu       $a0, $sp, 0x198
    ctx->pc = 0x133650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
    // 0x133654: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x133654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x133658: 0x2406ffed  addiu       $a2, $zero, -0x13
    ctx->pc = 0x133658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967277));
    // 0x13365c: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x13365cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
    // 0x133660: 0x24070028  addiu       $a3, $zero, 0x28
    ctx->pc = 0x133660u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x133664: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x133664u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133668: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x133668u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13366c: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x13366cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133670: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x133670u;
    SET_GPR_U32(ctx, 31, 0x133678u);
    ctx->pc = 0x133674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133670u;
    // 0x133674: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ADF0u, 0x133670u, 0x133678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133678u;
label_133678:
    // 0x133678: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x133678u;
    {
        const bool branch_taken_0x133678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133678) {
            ctx->pc = 0x13384Cu;
            goto label_13384c;
        }
    }
    ctx->pc = 0x133680u;
label_133680:
    // 0x133680: 0x240a0100  addiu       $t2, $zero, 0x100
    ctx->pc = 0x133680u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x133684: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x133684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x133688: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x133688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13368c: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x13368cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x133690: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x133690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x133694: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x133694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x133698: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x133698u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x13369c: 0xffaa0018  sd          $t2, 0x18($sp)
    ctx->pc = 0x13369cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 10));
    // 0x1336a0: 0x3265ffff  andi        $a1, $s3, 0xFFFF
    ctx->pc = 0x1336a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x1336a4: 0xffaa0020  sd          $t2, 0x20($sp)
    ctx->pc = 0x1336a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 10));
    // 0x1336a8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1336a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1336ac: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x1336acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x1336b0: 0x27a40198  addiu       $a0, $sp, 0x198
    ctx->pc = 0x1336b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
    // 0x1336b4: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x1336b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x1336b8: 0x2406ffed  addiu       $a2, $zero, -0x13
    ctx->pc = 0x1336b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967277));
    // 0x1336bc: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x1336bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x1336c0: 0x24070028  addiu       $a3, $zero, 0x28
    ctx->pc = 0x1336c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1336c4: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x1336c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
    // 0x1336c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1336c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1336cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1336ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1336d0: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x1336d0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1336d4: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x1336D4u;
    SET_GPR_U32(ctx, 31, 0x1336DCu);
    ctx->pc = 0x1336D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1336D4u;
    // 0x1336d8: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ADF0u, 0x1336D4u, 0x1336DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1336DCu;
label_1336dc:
    // 0x1336dc: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x1336DCu;
    {
        const bool branch_taken_0x1336dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1336dc) {
            ctx->pc = 0x13384Cu;
            goto label_13384c;
        }
    }
    ctx->pc = 0x1336E4u;
label_1336e4:
    // 0x1336e4: 0x240a016e  addiu       $t2, $zero, 0x16E
    ctx->pc = 0x1336e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 366));
    // 0x1336e8: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x1336e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x1336ec: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1336ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1336f0: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1336f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x1336f4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1336f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1336f8: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1336f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x1336fc: 0x240600b7  addiu       $a2, $zero, 0xB7
    ctx->pc = 0x1336fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 183));
    // 0x133700: 0xffa20020  sd          $v0, 0x20($sp)
    ctx->pc = 0x133700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 2));
    // 0x133704: 0x240c0168  addiu       $t4, $zero, 0x168
    ctx->pc = 0x133704u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x133708: 0xffa40028  sd          $a0, 0x28($sp)
    ctx->pc = 0x133708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 4));
    // 0x13370c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x13370cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x133710: 0xffa40030  sd          $a0, 0x30($sp)
    ctx->pc = 0x133710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 4));
    // 0x133714: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x133714u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x133718: 0xffa40038  sd          $a0, 0x38($sp)
    ctx->pc = 0x133718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 4));
    // 0x13371c: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x13371cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x133720: 0xffa40040  sd          $a0, 0x40($sp)
    ctx->pc = 0x133720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 4));
    // 0x133724: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x133724u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x133728: 0xffa60048  sd          $a2, 0x48($sp)
    ctx->pc = 0x133728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 6));
    // 0x13372c: 0x27a40198  addiu       $a0, $sp, 0x198
    ctx->pc = 0x13372cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
    // 0x133730: 0xffa60050  sd          $a2, 0x50($sp)
    ctx->pc = 0x133730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 6));
    // 0x133734: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x133734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133738: 0xffa00058  sd          $zero, 0x58($sp)
    ctx->pc = 0x133738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 0));
    // 0x13373c: 0x2406015c  addiu       $a2, $zero, 0x15C
    ctx->pc = 0x13373cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 348));
    // 0x133740: 0xffa00060  sd          $zero, 0x60($sp)
    ctx->pc = 0x133740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 0));
    // 0x133744: 0x2407fff1  addiu       $a3, $zero, -0xF
    ctx->pc = 0x133744u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x133748: 0xffa00068  sd          $zero, 0x68($sp)
    ctx->pc = 0x133748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 0));
    // 0x13374c: 0x24080181  addiu       $t0, $zero, 0x181
    ctx->pc = 0x13374cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 385));
    // 0x133750: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x133750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x133754: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x133754u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133758: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x133758u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x13375c: 0x1821023  subu        $v0, $t4, $v0
    ctx->pc = 0x13375cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x133760: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x133760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x133764: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x133764u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x133768: 0xffa20070  sd          $v0, 0x70($sp)
    ctx->pc = 0x133768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 2));
    // 0x13376c: 0xc04ebb0  jal         func_13AEC0
    ctx->pc = 0x13376Cu;
    SET_GPR_U32(ctx, 31, 0x133774u);
    ctx->pc = 0x133770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13376Cu;
    // 0x133770: 0xffa30078  sd          $v1, 0x78($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AEC0u, 0x13376Cu, 0x133774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133774u;
label_133774:
    // 0x133774: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x133774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x133778: 0x12020034  beq         $s0, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x133778u;
    {
        const bool branch_taken_0x133778 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x133778) {
            ctx->pc = 0x13384Cu;
            goto label_13384c;
        }
    }
    ctx->pc = 0x133780u;
    // 0x133780: 0x2a020029  slti        $v0, $s0, 0x29
    ctx->pc = 0x133780u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x133784: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x133784u;
    {
        const bool branch_taken_0x133784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x133784) {
            ctx->pc = 0x133788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133784u;
            // 0x133788: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1337F4u;
            goto label_1337f4;
        }
    }
    ctx->pc = 0x13378Cu;
    // 0x13378c: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x13378cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x133790: 0x240a0100  addiu       $t2, $zero, 0x100
    ctx->pc = 0x133790u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x133794: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x133794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x133798: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x133798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x13379c: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x13379cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x1337a0: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x1337a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1337a4: 0xffaa0018  sd          $t2, 0x18($sp)
    ctx->pc = 0x1337a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 10));
    // 0x1337a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1337a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1337ac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1337acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1337b0: 0xffaa0020  sd          $t2, 0x20($sp)
    ctx->pc = 0x1337b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 10));
    // 0x1337b4: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x1337b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x1337b8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1337b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1337bc: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x1337bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x1337c0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1337c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1337c4: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x1337c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x1337c8: 0x27a40198  addiu       $a0, $sp, 0x198
    ctx->pc = 0x1337c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
    // 0x1337cc: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x1337ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
    // 0x1337d0: 0x24060194  addiu       $a2, $zero, 0x194
    ctx->pc = 0x1337d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 404));
    // 0x1337d4: 0x24070028  addiu       $a3, $zero, 0x28
    ctx->pc = 0x1337d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1337d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1337d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1337dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1337dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1337e0: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x1337e0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1337e4: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x1337E4u;
    SET_GPR_U32(ctx, 31, 0x1337ECu);
    ctx->pc = 0x1337E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1337E4u;
    // 0x1337e8: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ADF0u, 0x1337E4u, 0x1337ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1337ECu;
label_1337ec:
    // 0x1337ec: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1337ECu;
    {
        const bool branch_taken_0x1337ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1337ec) {
            ctx->pc = 0x13384Cu;
            goto label_13384c;
        }
    }
    ctx->pc = 0x1337F4u;
label_1337f4:
    // 0x1337f4: 0x240a0100  addiu       $t2, $zero, 0x100
    ctx->pc = 0x1337f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1337f8: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x1337f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x1337fc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1337fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x133800: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x133800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x133804: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x133804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x133808: 0xffaa0018  sd          $t2, 0x18($sp)
    ctx->pc = 0x133808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 10));
    // 0x13380c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x13380cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x133810: 0xffaa0020  sd          $t2, 0x20($sp)
    ctx->pc = 0x133810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 10));
    // 0x133814: 0x3265ffff  andi        $a1, $s3, 0xFFFF
    ctx->pc = 0x133814u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x133818: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x133818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x13381c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x13381cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x133820: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x133820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x133824: 0x27a40198  addiu       $a0, $sp, 0x198
    ctx->pc = 0x133824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
    // 0x133828: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x133828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x13382c: 0x24060194  addiu       $a2, $zero, 0x194
    ctx->pc = 0x13382cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 404));
    // 0x133830: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x133830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
    // 0x133834: 0x24070028  addiu       $a3, $zero, 0x28
    ctx->pc = 0x133834u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x133838: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x133838u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13383c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x13383cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133840: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x133840u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133844: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x133844u;
    SET_GPR_U32(ctx, 31, 0x13384Cu);
    ctx->pc = 0x133848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133844u;
    // 0x133848: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ADF0u, 0x133844u, 0x13384Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13384Cu;
label_13384c:
    // 0x13384c: 0x86430008  lh          $v1, 0x8($s2)
    ctx->pc = 0x13384cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
label_133850:
    // 0x133850: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x133850u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x133854: 0x8642000a  lh          $v0, 0xA($s2)
    ctx->pc = 0x133854u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x133858: 0xc64e000c  lwc1        $f14, 0xC($s2)
    ctx->pc = 0x133858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x13385c: 0x8fa60198  lw          $a2, 0x198($sp)
    ctx->pc = 0x13385cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x133860: 0x2484d840  addiu       $a0, $a0, -0x27C0
    ctx->pc = 0x133860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957120));
    // 0x133864: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x133864u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x133868: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x133868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x13386c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x13386cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x133870: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x133870u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x133874: 0xc0c5368  jal         func_314DA0
    ctx->pc = 0x133874u;
    SET_GPR_U32(ctx, 31, 0x13387Cu);
    ctx->pc = 0x133878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133874u;
    // 0x133878: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x314DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314DA0u, 0x133874u, 0x13387Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13387Cu;
label_13387c:
    // 0x13387c: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x13387cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x133880: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x133880u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x133884: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x133884u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x133888: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x133888u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13388c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x13388cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x133890: 0x3e00008  jr          $ra
    ctx->pc = 0x133890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133890u;
        // 0x133894: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133898u;
    // 0x133898: 0x0  nop
    ctx->pc = 0x133898u;
    // NOP
    // 0x13389c: 0x0  nop
    ctx->pc = 0x13389cu;
    // NOP
    // 0x1338a0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1338a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1338a4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1338a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1338a8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1338a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1338ac: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x1338acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1338b0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1338b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1338b4: 0x244259a0  addiu       $v0, $v0, 0x59A0
    ctx->pc = 0x1338b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22944));
    // 0x1338b8: 0xafa300dc  sw          $v1, 0xDC($sp)
    ctx->pc = 0x1338b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 3));
    // 0x1338bc: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x1338bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
    // 0x1338c0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1338c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1338c4: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x1338c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1338c8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1338c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1338cc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1338ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1338d0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1338d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1338d4: 0x504301b9  beql        $v0, $v1, . + 4 + (0x1B9 << 2)
    ctx->pc = 0x1338D4u;
    {
        const bool branch_taken_0x1338d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1338d4) {
            ctx->pc = 0x1338D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1338D4u;
            // 0x1338d8: 0x86030004  lh          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x133FBCu;
            goto label_133fbc;
        }
    }
    ctx->pc = 0x1338DCu;
    // 0x1338dc: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1338dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1338e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1338e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1338e4: 0x24635998  addiu       $v1, $v1, 0x5998
    ctx->pc = 0x1338e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22936));
    // 0x1338e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1338e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1338ec: 0x108500dc  beq         $a0, $a1, . + 4 + (0xDC << 2)
    ctx->pc = 0x1338ECu;
    {
        const bool branch_taken_0x1338ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x1338F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1338ECu;
        // 0x1338f0: 0x90630000  lbu         $v1, 0x0($v1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1338ec) {
            ctx->pc = 0x133C60u;
            goto label_133c60;
        }
    }
    ctx->pc = 0x1338F4u;
    // 0x1338f4: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1338F4u;
    {
        const bool branch_taken_0x1338f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1338f4) {
            ctx->pc = 0x1338F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1338F4u;
            // 0x1338f8: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x133904u;
            goto label_133904;
        }
    }
    ctx->pc = 0x1338FCu;
    // 0x1338fc: 0x100001ae  b           . + 4 + (0x1AE << 2)
    ctx->pc = 0x1338FCu;
    {
        const bool branch_taken_0x1338fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1338fc) {
            ctx->pc = 0x133FB8u;
            goto label_133fb8;
        }
    }
    ctx->pc = 0x133904u;
label_133904:
    // 0x133904: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x133904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x133908: 0x506400bc  beql        $v1, $a0, . + 4 + (0xBC << 2)
    ctx->pc = 0x133908u;
    {
        const bool branch_taken_0x133908 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x133908) {
            ctx->pc = 0x13390Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133908u;
            // 0x13390c: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x133BFCu;
            goto label_133bfc;
        }
    }
    ctx->pc = 0x133910u;
    // 0x133910: 0x506500a1  beql        $v1, $a1, . + 4 + (0xA1 << 2)
    ctx->pc = 0x133910u;
    {
        const bool branch_taken_0x133910 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x133910) {
            ctx->pc = 0x133914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133910u;
            // 0x133914: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x133B98u;
            goto label_133b98;
        }
    }
    ctx->pc = 0x133918u;
    // 0x133918: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x133918u;
    {
        const bool branch_taken_0x133918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x133918) {
            ctx->pc = 0x13391Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133918u;
            // 0x13391c: 0x2403000e  addiu       $v1, $zero, 0xE (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
            ctx->in_delay_slot = false;
            ctx->pc = 0x133928u;
            goto label_133928;
        }
    }
    ctx->pc = 0x133920u;
    // 0x133920: 0x100001a5  b           . + 4 + (0x1A5 << 2)
    ctx->pc = 0x133920u;
    {
        const bool branch_taken_0x133920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133920) {
            ctx->pc = 0x133FB8u;
            goto label_133fb8;
        }
    }
    ctx->pc = 0x133928u;
label_133928:
    // 0x133928: 0x54430050  bnel        $v0, $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x133928u;
    {
        const bool branch_taken_0x133928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x133928) {
            ctx->pc = 0x13392Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133928u;
            // 0x13392c: 0x28430029  slti        $v1, $v0, 0x29 (Delay Slot)
            SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)41) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x133A6Cu;
            goto label_133a6c;
        }
    }
    ctx->pc = 0x133930u;
    // 0x133930: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x133930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x133934: 0x9063f35f  lbu         $v1, -0xCA1($v1)
    ctx->pc = 0x133934u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294964063)));
    // 0x133938: 0x50640033  beql        $v1, $a0, . + 4 + (0x33 << 2)
    ctx->pc = 0x133938u;
    {
        const bool branch_taken_0x133938 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x133938) {
            ctx->pc = 0x13393Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133938u;
            // 0x13393c: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x133A08u;
            goto label_133a08;
        }
    }
    ctx->pc = 0x133940u;
    // 0x133940: 0x10650030  beq         $v1, $a1, . + 4 + (0x30 << 2)
    ctx->pc = 0x133940u;
    {
        const bool branch_taken_0x133940 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x133940) {
            ctx->pc = 0x133A04u;
            goto label_133a04;
        }
    }
    ctx->pc = 0x133948u;
    // 0x133948: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x133948u;
    {
        const bool branch_taken_0x133948 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x133948) {
            ctx->pc = 0x13394Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133948u;
            // 0x13394c: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x133958u;
            goto label_133958;
        }
    }
    ctx->pc = 0x133950u;
    // 0x133950: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x133950u;
    {
        const bool branch_taken_0x133950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133950) {
            ctx->pc = 0x133A04u;
            goto label_133a04;
        }
    }
    ctx->pc = 0x133958u;
label_133958:
    // 0x133958: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x133958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x13395c: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x13395cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x133960: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x133960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x133964: 0x24fc2  srl         $t1, $v0, 31
    ctx->pc = 0x133964u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x133968: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x133968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x13396c: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x13396cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x133970: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x133970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x133974: 0xffa50018  sd          $a1, 0x18($sp)
    ctx->pc = 0x133974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 5));
    // 0x133978: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x133978u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13397c: 0xffa50020  sd          $a1, 0x20($sp)
    ctx->pc = 0x13397cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 5));
    // 0x133980: 0x24060036  addiu       $a2, $zero, 0x36
    ctx->pc = 0x133980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x133984: 0xffa40028  sd          $a0, 0x28($sp)
    ctx->pc = 0x133984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 4));
    // 0x133988: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x133988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13398c: 0xffa40030  sd          $a0, 0x30($sp)
    ctx->pc = 0x13398cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 4));
    // 0x133990: 0x24070148  addiu       $a3, $zero, 0x148
    ctx->pc = 0x133990u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 328));
    // 0x133994: 0xffa40038  sd          $a0, 0x38($sp)
    ctx->pc = 0x133994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 4));
    // 0x133998: 0x240a0088  addiu       $t2, $zero, 0x88
    ctx->pc = 0x133998u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x13399c: 0xffa40040  sd          $a0, 0x40($sp)
    ctx->pc = 0x13399cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 4));
    // 0x1339a0: 0x240b0018  addiu       $t3, $zero, 0x18
    ctx->pc = 0x1339a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1339a4: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x1339a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x1339a8: 0x3c039249  lui         $v1, 0x9249
    ctx->pc = 0x1339a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37449 << 16));
    // 0x1339ac: 0x34682493  ori         $t0, $v1, 0x2493
    ctx->pc = 0x1339acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9363);
    // 0x1339b0: 0x6010  mfhi        $t4
    ctx->pc = 0x1339b0u;
    SET_GPR_U64(ctx, 12, ctx->hi);
    // 0x1339b4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1339b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1339b8: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x1339b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1339bc: 0xc1900  sll         $v1, $t4, 4
    ctx->pc = 0x1339bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x1339c0: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x1339c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x1339c4: 0x1020018  mult        $zero, $t0, $v0
    ctx->pc = 0x1339c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1339c8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1339c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1339cc: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x1339ccu;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x1339d0: 0x3068ffff  andi        $t0, $v1, 0xFFFF
    ctx->pc = 0x1339d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1339d4: 0x1810  mfhi        $v1
    ctx->pc = 0x1339d4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1339d8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1339d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1339dc: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1339dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1339e0: 0x491821  addu        $v1, $v0, $t1
    ctx->pc = 0x1339e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1339e4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1339e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1339e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1339e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1339ec: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1339ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1339f0: 0x24420188  addiu       $v0, $v0, 0x188
    ctx->pc = 0x1339f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 392));
    // 0x1339f4: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x1339F4u;
    SET_GPR_U32(ctx, 31, 0x1339FCu);
    ctx->pc = 0x1339F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1339F4u;
    // 0x1339f8: 0x3049ffff  andi        $t1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ADF0u, 0x1339F4u, 0x1339FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1339FCu;
label_1339fc:
    // 0x1339fc: 0x1000016e  b           . + 4 + (0x16E << 2)
    ctx->pc = 0x1339FCu;
    {
        const bool branch_taken_0x1339fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1339fc) {
            ctx->pc = 0x133FB8u;
            goto label_133fb8;
        }
    }
    ctx->pc = 0x133A04u;
label_133a04:
    // 0x133a04: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x133a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_133a08:
    // 0x133a08: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x133a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x133a0c: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x133a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x133a10: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x133a10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x133a14: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x133a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x133a18: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x133a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x133a1c: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x133a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x133a20: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x133a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x133a24: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x133a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x133a28: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x133a28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x133a2c: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x133a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x133a30: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x133a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x133a34: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x133a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x133a38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x133a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133a3c: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x133a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x133a40: 0x24060036  addiu       $a2, $zero, 0x36
    ctx->pc = 0x133a40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x133a44: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x133a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
    // 0x133a48: 0x24070148  addiu       $a3, $zero, 0x148
    ctx->pc = 0x133a48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 328));
    // 0x133a4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x133a4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133a50: 0x24090310  addiu       $t1, $zero, 0x310
    ctx->pc = 0x133a50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 784));
    // 0x133a54: 0x240a0088  addiu       $t2, $zero, 0x88
    ctx->pc = 0x133a54u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x133a58: 0x240b0018  addiu       $t3, $zero, 0x18
    ctx->pc = 0x133a58u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x133a5c: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x133A5Cu;
    SET_GPR_U32(ctx, 31, 0x133A64u);
    ctx->pc = 0x133A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133A5Cu;
    // 0x133a60: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ADF0u, 0x133A5Cu, 0x133A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133A64u;
label_133a64:
    // 0x133a64: 0x10000154  b           . + 4 + (0x154 << 2)
    ctx->pc = 0x133A64u;
    {
        const bool branch_taken_0x133a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133a64) {
            ctx->pc = 0x133FB8u;
            goto label_133fb8;
        }
    }
    ctx->pc = 0x133A6Cu;
label_133a6c:
    // 0x133a6c: 0x5460001f  bnel        $v1, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x133A6Cu;
    {
        const bool branch_taken_0x133a6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x133a6c) {
            ctx->pc = 0x133A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133A6Cu;
            // 0x133a70: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x133AECu;
            goto label_133aec;
        }
    }
    ctx->pc = 0x133A74u;
    // 0x133a74: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x133a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x133a78: 0x2443ffd7  addiu       $v1, $v0, -0x29
    ctx->pc = 0x133a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967255));
    // 0x133a7c: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x133a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x133a80: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x133a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x133a84: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x133a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x133a88: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x133a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x133a8c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x133a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x133a90: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x133a90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x133a94: 0xffa20020  sd          $v0, 0x20($sp)
    ctx->pc = 0x133a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 2));
    // 0x133a98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x133a98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133a9c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x133a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x133aa0: 0xffa40028  sd          $a0, 0x28($sp)
    ctx->pc = 0x133aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 4));
    // 0x133aa4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x133aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x133aa8: 0xffa40030  sd          $a0, 0x30($sp)
    ctx->pc = 0x133aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 4));
    // 0x133aac: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x133aacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x133ab0: 0xffa40038  sd          $a0, 0x38($sp)
    ctx->pc = 0x133ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 4));
    // 0x133ab4: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x133ab4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x133ab8: 0xffa40040  sd          $a0, 0x40($sp)
    ctx->pc = 0x133ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 4));
    // 0x133abc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x133abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x133ac0: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x133ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x133ac4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x133ac4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x133ac8: 0x24060036  addiu       $a2, $zero, 0x36
    ctx->pc = 0x133ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x133acc: 0x24070148  addiu       $a3, $zero, 0x148
    ctx->pc = 0x133accu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 328));
    // 0x133ad0: 0x24090310  addiu       $t1, $zero, 0x310
    ctx->pc = 0x133ad0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 784));
    // 0x133ad4: 0x240a0088  addiu       $t2, $zero, 0x88
    ctx->pc = 0x133ad4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x133ad8: 0x240b0018  addiu       $t3, $zero, 0x18
    ctx->pc = 0x133ad8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x133adc: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x133ADCu;
    SET_GPR_U32(ctx, 31, 0x133AE4u);
    ctx->pc = 0x133AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133ADCu;
    // 0x133ae0: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ADF0u, 0x133ADCu, 0x133AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133AE4u;
label_133ae4:
    // 0x133ae4: 0x10000134  b           . + 4 + (0x134 << 2)
    ctx->pc = 0x133AE4u;
    {
        const bool branch_taken_0x133ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133ae4) {
            ctx->pc = 0x133FB8u;
            goto label_133fb8;
        }
    }
    ctx->pc = 0x133AECu;
label_133aec:
    // 0x133aec: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x133aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x133af0: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x133af0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x133af4: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x133af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x133af8: 0x24fc2  srl         $t1, $v0, 31
    ctx->pc = 0x133af8u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x133afc: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x133afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x133b00: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x133b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x133b04: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x133b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x133b08: 0xffa50018  sd          $a1, 0x18($sp)
    ctx->pc = 0x133b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 5));
    // 0x133b0c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x133b0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x133b10: 0xffa50020  sd          $a1, 0x20($sp)
    ctx->pc = 0x133b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 5));
    // 0x133b14: 0x24060036  addiu       $a2, $zero, 0x36
    ctx->pc = 0x133b14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x133b18: 0xffa40028  sd          $a0, 0x28($sp)
    ctx->pc = 0x133b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 4));
    // 0x133b1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x133b1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133b20: 0xffa40030  sd          $a0, 0x30($sp)
    ctx->pc = 0x133b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 4));
    // 0x133b24: 0x24070148  addiu       $a3, $zero, 0x148
    ctx->pc = 0x133b24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 328));
    // 0x133b28: 0xffa40038  sd          $a0, 0x38($sp)
    ctx->pc = 0x133b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 4));
    // 0x133b2c: 0x240a0088  addiu       $t2, $zero, 0x88
    ctx->pc = 0x133b2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x133b30: 0xffa40040  sd          $a0, 0x40($sp)
    ctx->pc = 0x133b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 4));
    // 0x133b34: 0x240b0018  addiu       $t3, $zero, 0x18
    ctx->pc = 0x133b34u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x133b38: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x133b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x133b3c: 0x3c039249  lui         $v1, 0x9249
    ctx->pc = 0x133b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37449 << 16));
    // 0x133b40: 0x34682493  ori         $t0, $v1, 0x2493
    ctx->pc = 0x133b40u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9363);
    // 0x133b44: 0x6010  mfhi        $t4
    ctx->pc = 0x133b44u;
    SET_GPR_U64(ctx, 12, ctx->hi);
    // 0x133b48: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x133b48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x133b4c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x133b4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x133b50: 0xc1900  sll         $v1, $t4, 4
    ctx->pc = 0x133b50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x133b54: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x133b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x133b58: 0x1020018  mult        $zero, $t0, $v0
    ctx->pc = 0x133b58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x133b5c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x133b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x133b60: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x133b60u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x133b64: 0x3068ffff  andi        $t0, $v1, 0xFFFF
    ctx->pc = 0x133b64u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x133b68: 0x1810  mfhi        $v1
    ctx->pc = 0x133b68u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x133b6c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x133b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x133b70: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x133b70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x133b74: 0x491821  addu        $v1, $v0, $t1
    ctx->pc = 0x133b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x133b78: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x133b78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x133b7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x133b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x133b80: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x133b80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x133b84: 0x24420188  addiu       $v0, $v0, 0x188
    ctx->pc = 0x133b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 392));
    // 0x133b88: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x133B88u;
    SET_GPR_U32(ctx, 31, 0x133B90u);
    ctx->pc = 0x133B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133B88u;
    // 0x133b8c: 0x3049ffff  andi        $t1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ADF0u, 0x133B88u, 0x133B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133B90u;
label_133b90:
    // 0x133b90: 0x10000109  b           . + 4 + (0x109 << 2)
    ctx->pc = 0x133B90u;
    {
        const bool branch_taken_0x133b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133b90) {
            ctx->pc = 0x133FB8u;
            goto label_133fb8;
        }
    }
    ctx->pc = 0x133B98u;
label_133b98:
    // 0x133b98: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x133b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x133b9c: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x133b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x133ba0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x133ba0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x133ba4: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x133ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x133ba8: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x133ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x133bac: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x133bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x133bb0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x133bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x133bb4: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x133bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x133bb8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x133bb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x133bbc: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x133bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x133bc0: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x133bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x133bc4: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x133bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x133bc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x133bc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133bcc: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x133bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x133bd0: 0x24060036  addiu       $a2, $zero, 0x36
    ctx->pc = 0x133bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x133bd4: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x133bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
    // 0x133bd8: 0x24070148  addiu       $a3, $zero, 0x148
    ctx->pc = 0x133bd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 328));
    // 0x133bdc: 0x24080330  addiu       $t0, $zero, 0x330
    ctx->pc = 0x133bdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 816));
    // 0x133be0: 0x24090200  addiu       $t1, $zero, 0x200
    ctx->pc = 0x133be0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x133be4: 0x240a0088  addiu       $t2, $zero, 0x88
    ctx->pc = 0x133be4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x133be8: 0x240b0018  addiu       $t3, $zero, 0x18
    ctx->pc = 0x133be8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x133bec: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x133BECu;
    SET_GPR_U32(ctx, 31, 0x133BF4u);
    ctx->pc = 0x133BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133BECu;
    // 0x133bf0: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ADF0u, 0x133BECu, 0x133BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133BF4u;
label_133bf4:
    // 0x133bf4: 0x100000f0  b           . + 4 + (0xF0 << 2)
    ctx->pc = 0x133BF4u;
    {
        const bool branch_taken_0x133bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133bf4) {
            ctx->pc = 0x133FB8u;
            goto label_133fb8;
        }
    }
    ctx->pc = 0x133BFCu;
label_133bfc:
    // 0x133bfc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x133bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x133c00: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x133c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x133c04: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x133c04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x133c08: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x133c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x133c0c: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x133c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x133c10: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x133c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x133c14: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x133c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x133c18: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x133c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x133c1c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x133c1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x133c20: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x133c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x133c24: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x133c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x133c28: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x133c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x133c2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x133c2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133c30: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x133c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x133c34: 0x24060036  addiu       $a2, $zero, 0x36
    ctx->pc = 0x133c34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x133c38: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x133c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
    // 0x133c3c: 0x24070148  addiu       $a3, $zero, 0x148
    ctx->pc = 0x133c3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 328));
    // 0x133c40: 0x240802a8  addiu       $t0, $zero, 0x2A8
    ctx->pc = 0x133c40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 680));
    // 0x133c44: 0x24090200  addiu       $t1, $zero, 0x200
    ctx->pc = 0x133c44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x133c48: 0x240a0088  addiu       $t2, $zero, 0x88
    ctx->pc = 0x133c48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x133c4c: 0x240b0018  addiu       $t3, $zero, 0x18
    ctx->pc = 0x133c4cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x133c50: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x133C50u;
    SET_GPR_U32(ctx, 31, 0x133C58u);
    ctx->pc = 0x133C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133C50u;
    // 0x133c54: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ADF0u, 0x133C50u, 0x133C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133C58u;
label_133c58:
    // 0x133c58: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x133C58u;
    {
        const bool branch_taken_0x133c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133c58) {
            ctx->pc = 0x133FB8u;
            goto label_133fb8;
        }
    }
    ctx->pc = 0x133C60u;
label_133c60:
    // 0x133c60: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x133c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x133c64: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x133c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x133c68: 0x506400bc  beql        $v1, $a0, . + 4 + (0xBC << 2)
    ctx->pc = 0x133C68u;
    {
        const bool branch_taken_0x133c68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x133c68) {
            ctx->pc = 0x133C6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133C68u;
            // 0x133c6c: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x133F5Cu;
            goto label_133f5c;
        }
    }
    ctx->pc = 0x133C70u;
    // 0x133c70: 0x506500a1  beql        $v1, $a1, . + 4 + (0xA1 << 2)
    ctx->pc = 0x133C70u;
    {
        const bool branch_taken_0x133c70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x133c70) {
            ctx->pc = 0x133C74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133C70u;
            // 0x133c74: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x133EF8u;
            goto label_133ef8;
        }
    }
    ctx->pc = 0x133C78u;
    // 0x133c78: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x133C78u;
    {
        const bool branch_taken_0x133c78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x133c78) {
            ctx->pc = 0x133C7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133C78u;
            // 0x133c7c: 0x2403000e  addiu       $v1, $zero, 0xE (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
            ctx->in_delay_slot = false;
            ctx->pc = 0x133C88u;
            goto label_133c88;
        }
    }
    ctx->pc = 0x133C80u;
    // 0x133c80: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x133C80u;
    {
        const bool branch_taken_0x133c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133c80) {
            ctx->pc = 0x133FB8u;
            goto label_133fb8;
        }
    }
    ctx->pc = 0x133C88u;
label_133c88:
    // 0x133c88: 0x54430050  bnel        $v0, $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x133C88u;
    {
        const bool branch_taken_0x133c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x133c88) {
            ctx->pc = 0x133C8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133C88u;
            // 0x133c8c: 0x28430029  slti        $v1, $v0, 0x29 (Delay Slot)
            SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)41) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x133DCCu;
            goto label_133dcc;
        }
    }
    ctx->pc = 0x133C90u;
    // 0x133c90: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x133c90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x133c94: 0x9063f35f  lbu         $v1, -0xCA1($v1)
    ctx->pc = 0x133c94u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294964063)));
    // 0x133c98: 0x50640033  beql        $v1, $a0, . + 4 + (0x33 << 2)
    ctx->pc = 0x133C98u;
    {
        const bool branch_taken_0x133c98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x133c98) {
            ctx->pc = 0x133C9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133C98u;
            // 0x133c9c: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x133D68u;
            goto label_133d68;
        }
    }
    ctx->pc = 0x133CA0u;
    // 0x133ca0: 0x10650030  beq         $v1, $a1, . + 4 + (0x30 << 2)
    ctx->pc = 0x133CA0u;
    {
        const bool branch_taken_0x133ca0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x133ca0) {
            ctx->pc = 0x133D64u;
            goto label_133d64;
        }
    }
    ctx->pc = 0x133CA8u;
    // 0x133ca8: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x133CA8u;
    {
        const bool branch_taken_0x133ca8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x133ca8) {
            ctx->pc = 0x133CACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133CA8u;
            // 0x133cac: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x133CB8u;
            goto label_133cb8;
        }
    }
    ctx->pc = 0x133CB0u;
    // 0x133cb0: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x133CB0u;
    {
        const bool branch_taken_0x133cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133cb0) {
            ctx->pc = 0x133D64u;
            goto label_133d64;
        }
    }
    ctx->pc = 0x133CB8u;
label_133cb8:
    // 0x133cb8: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x133cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x133cbc: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x133cbcu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x133cc0: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x133cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x133cc4: 0x24fc2  srl         $t1, $v0, 31
    ctx->pc = 0x133cc4u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x133cc8: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x133cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x133ccc: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x133cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x133cd0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x133cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x133cd4: 0xffa50018  sd          $a1, 0x18($sp)
    ctx->pc = 0x133cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 5));
    // 0x133cd8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x133cd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x133cdc: 0xffa50020  sd          $a1, 0x20($sp)
    ctx->pc = 0x133cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 5));
    // 0x133ce0: 0x240601e4  addiu       $a2, $zero, 0x1E4
    ctx->pc = 0x133ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 484));
    // 0x133ce4: 0xffa40028  sd          $a0, 0x28($sp)
    ctx->pc = 0x133ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 4));
    // 0x133ce8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x133ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133cec: 0xffa40030  sd          $a0, 0x30($sp)
    ctx->pc = 0x133cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 4));
    // 0x133cf0: 0x24070148  addiu       $a3, $zero, 0x148
    ctx->pc = 0x133cf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 328));
    // 0x133cf4: 0xffa40038  sd          $a0, 0x38($sp)
    ctx->pc = 0x133cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 4));
    // 0x133cf8: 0x240a0088  addiu       $t2, $zero, 0x88
    ctx->pc = 0x133cf8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x133cfc: 0xffa40040  sd          $a0, 0x40($sp)
    ctx->pc = 0x133cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 4));
    // 0x133d00: 0x240b0018  addiu       $t3, $zero, 0x18
    ctx->pc = 0x133d00u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x133d04: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x133d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x133d08: 0x3c039249  lui         $v1, 0x9249
    ctx->pc = 0x133d08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37449 << 16));
    // 0x133d0c: 0x34682493  ori         $t0, $v1, 0x2493
    ctx->pc = 0x133d0cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9363);
    // 0x133d10: 0x6010  mfhi        $t4
    ctx->pc = 0x133d10u;
    SET_GPR_U64(ctx, 12, ctx->hi);
    // 0x133d14: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x133d14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x133d18: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x133d18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x133d1c: 0xc1900  sll         $v1, $t4, 4
    ctx->pc = 0x133d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x133d20: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x133d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x133d24: 0x1020018  mult        $zero, $t0, $v0
    ctx->pc = 0x133d24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x133d28: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x133d28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x133d2c: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x133d2cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x133d30: 0x3068ffff  andi        $t0, $v1, 0xFFFF
    ctx->pc = 0x133d30u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x133d34: 0x1810  mfhi        $v1
    ctx->pc = 0x133d34u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x133d38: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x133d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x133d3c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x133d3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x133d40: 0x491821  addu        $v1, $v0, $t1
    ctx->pc = 0x133d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x133d44: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x133d44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x133d48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x133d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x133d4c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x133d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x133d50: 0x24420188  addiu       $v0, $v0, 0x188
    ctx->pc = 0x133d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 392));
    // 0x133d54: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x133D54u;
    SET_GPR_U32(ctx, 31, 0x133D5Cu);
    ctx->pc = 0x133D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133D54u;
    // 0x133d58: 0x3049ffff  andi        $t1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ADF0u, 0x133D54u, 0x133D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133D5Cu;
label_133d5c:
    // 0x133d5c: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x133D5Cu;
    {
        const bool branch_taken_0x133d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133d5c) {
            ctx->pc = 0x133FB8u;
            goto label_133fb8;
        }
    }
    ctx->pc = 0x133D64u;
label_133d64:
    // 0x133d64: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x133d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_133d68:
    // 0x133d68: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x133d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x133d6c: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x133d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x133d70: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x133d70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x133d74: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x133d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x133d78: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x133d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x133d7c: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x133d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x133d80: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x133d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x133d84: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x133d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x133d88: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x133d88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x133d8c: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x133d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x133d90: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x133d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x133d94: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x133d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x133d98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x133d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133d9c: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x133d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x133da0: 0x240601e4  addiu       $a2, $zero, 0x1E4
    ctx->pc = 0x133da0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 484));
    // 0x133da4: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x133da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
    // 0x133da8: 0x24070148  addiu       $a3, $zero, 0x148
    ctx->pc = 0x133da8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 328));
    // 0x133dac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x133dacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133db0: 0x24090310  addiu       $t1, $zero, 0x310
    ctx->pc = 0x133db0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 784));
    // 0x133db4: 0x240a0088  addiu       $t2, $zero, 0x88
    ctx->pc = 0x133db4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x133db8: 0x240b0018  addiu       $t3, $zero, 0x18
    ctx->pc = 0x133db8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x133dbc: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x133DBCu;
    SET_GPR_U32(ctx, 31, 0x133DC4u);
    ctx->pc = 0x133DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133DBCu;
    // 0x133dc0: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ADF0u, 0x133DBCu, 0x133DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133DC4u;
label_133dc4:
    // 0x133dc4: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x133DC4u;
    {
        const bool branch_taken_0x133dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133dc4) {
            ctx->pc = 0x133FB8u;
            goto label_133fb8;
        }
    }
    ctx->pc = 0x133DCCu;
label_133dcc:
    // 0x133dcc: 0x5460001f  bnel        $v1, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x133DCCu;
    {
        const bool branch_taken_0x133dcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x133dcc) {
            ctx->pc = 0x133DD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133DCCu;
            // 0x133dd0: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x133E4Cu;
            goto label_133e4c;
        }
    }
    ctx->pc = 0x133DD4u;
    // 0x133dd4: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x133dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x133dd8: 0x2443ffd7  addiu       $v1, $v0, -0x29
    ctx->pc = 0x133dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967255));
    // 0x133ddc: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x133ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x133de0: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x133de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x133de4: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x133de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x133de8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x133de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x133dec: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x133decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x133df0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x133df0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x133df4: 0xffa20020  sd          $v0, 0x20($sp)
    ctx->pc = 0x133df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 2));
    // 0x133df8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x133df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133dfc: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x133dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x133e00: 0xffa40028  sd          $a0, 0x28($sp)
    ctx->pc = 0x133e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 4));
    // 0x133e04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x133e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x133e08: 0xffa40030  sd          $a0, 0x30($sp)
    ctx->pc = 0x133e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 4));
    // 0x133e0c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x133e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x133e10: 0xffa40038  sd          $a0, 0x38($sp)
    ctx->pc = 0x133e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 4));
    // 0x133e14: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x133e14u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x133e18: 0xffa40040  sd          $a0, 0x40($sp)
    ctx->pc = 0x133e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 4));
    // 0x133e1c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x133e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x133e20: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x133e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x133e24: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x133e24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x133e28: 0x240601e4  addiu       $a2, $zero, 0x1E4
    ctx->pc = 0x133e28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 484));
    // 0x133e2c: 0x24070148  addiu       $a3, $zero, 0x148
    ctx->pc = 0x133e2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 328));
    // 0x133e30: 0x24090310  addiu       $t1, $zero, 0x310
    ctx->pc = 0x133e30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 784));
    // 0x133e34: 0x240a0088  addiu       $t2, $zero, 0x88
    ctx->pc = 0x133e34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x133e38: 0x240b0018  addiu       $t3, $zero, 0x18
    ctx->pc = 0x133e38u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x133e3c: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x133E3Cu;
    SET_GPR_U32(ctx, 31, 0x133E44u);
    ctx->pc = 0x133E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133E3Cu;
    // 0x133e40: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ADF0u, 0x133E3Cu, 0x133E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133E44u;
label_133e44:
    // 0x133e44: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x133E44u;
    {
        const bool branch_taken_0x133e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133e44) {
            ctx->pc = 0x133FB8u;
            goto label_133fb8;
        }
    }
    ctx->pc = 0x133E4Cu;
label_133e4c:
    // 0x133e4c: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x133e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x133e50: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x133e50u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x133e54: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x133e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x133e58: 0x24fc2  srl         $t1, $v0, 31
    ctx->pc = 0x133e58u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x133e5c: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x133e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x133e60: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x133e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x133e64: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x133e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x133e68: 0xffa50018  sd          $a1, 0x18($sp)
    ctx->pc = 0x133e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 5));
    // 0x133e6c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x133e6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x133e70: 0xffa50020  sd          $a1, 0x20($sp)
    ctx->pc = 0x133e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 5));
    // 0x133e74: 0x240601e4  addiu       $a2, $zero, 0x1E4
    ctx->pc = 0x133e74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 484));
    // 0x133e78: 0xffa40028  sd          $a0, 0x28($sp)
    ctx->pc = 0x133e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 4));
    // 0x133e7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x133e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133e80: 0xffa40030  sd          $a0, 0x30($sp)
    ctx->pc = 0x133e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 4));
    // 0x133e84: 0x24070148  addiu       $a3, $zero, 0x148
    ctx->pc = 0x133e84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 328));
    // 0x133e88: 0xffa40038  sd          $a0, 0x38($sp)
    ctx->pc = 0x133e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 4));
    // 0x133e8c: 0x240a0088  addiu       $t2, $zero, 0x88
    ctx->pc = 0x133e8cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x133e90: 0xffa40040  sd          $a0, 0x40($sp)
    ctx->pc = 0x133e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 4));
    // 0x133e94: 0x240b0018  addiu       $t3, $zero, 0x18
    ctx->pc = 0x133e94u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x133e98: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x133e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x133e9c: 0x3c039249  lui         $v1, 0x9249
    ctx->pc = 0x133e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37449 << 16));
    // 0x133ea0: 0x34682493  ori         $t0, $v1, 0x2493
    ctx->pc = 0x133ea0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9363);
    // 0x133ea4: 0x6010  mfhi        $t4
    ctx->pc = 0x133ea4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
    // 0x133ea8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x133ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x133eac: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x133eacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x133eb0: 0xc1900  sll         $v1, $t4, 4
    ctx->pc = 0x133eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x133eb4: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x133eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x133eb8: 0x1020018  mult        $zero, $t0, $v0
    ctx->pc = 0x133eb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x133ebc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x133ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x133ec0: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x133ec0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x133ec4: 0x3068ffff  andi        $t0, $v1, 0xFFFF
    ctx->pc = 0x133ec4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x133ec8: 0x1810  mfhi        $v1
    ctx->pc = 0x133ec8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x133ecc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x133eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x133ed0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x133ed0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x133ed4: 0x491821  addu        $v1, $v0, $t1
    ctx->pc = 0x133ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x133ed8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x133ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x133edc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x133edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x133ee0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x133ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x133ee4: 0x24420188  addiu       $v0, $v0, 0x188
    ctx->pc = 0x133ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 392));
    // 0x133ee8: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x133EE8u;
    SET_GPR_U32(ctx, 31, 0x133EF0u);
    ctx->pc = 0x133EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133EE8u;
    // 0x133eec: 0x3049ffff  andi        $t1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ADF0u, 0x133EE8u, 0x133EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133EF0u;
label_133ef0:
    // 0x133ef0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x133EF0u;
    {
        const bool branch_taken_0x133ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133ef0) {
            ctx->pc = 0x133FB8u;
            goto label_133fb8;
        }
    }
    ctx->pc = 0x133EF8u;
label_133ef8:
    // 0x133ef8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x133ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x133efc: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x133efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x133f00: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x133f00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x133f04: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x133f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x133f08: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x133f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x133f0c: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x133f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x133f10: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x133f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x133f14: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x133f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x133f18: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x133f18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x133f1c: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x133f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x133f20: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x133f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x133f24: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x133f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x133f28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x133f28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133f2c: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x133f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x133f30: 0x240601e4  addiu       $a2, $zero, 0x1E4
    ctx->pc = 0x133f30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 484));
    // 0x133f34: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x133f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
    // 0x133f38: 0x24070148  addiu       $a3, $zero, 0x148
    ctx->pc = 0x133f38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 328));
    // 0x133f3c: 0x24080330  addiu       $t0, $zero, 0x330
    ctx->pc = 0x133f3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 816));
    // 0x133f40: 0x24090200  addiu       $t1, $zero, 0x200
    ctx->pc = 0x133f40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x133f44: 0x240a0088  addiu       $t2, $zero, 0x88
    ctx->pc = 0x133f44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x133f48: 0x240b0018  addiu       $t3, $zero, 0x18
    ctx->pc = 0x133f48u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x133f4c: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x133F4Cu;
    SET_GPR_U32(ctx, 31, 0x133F54u);
    ctx->pc = 0x133F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133F4Cu;
    // 0x133f50: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ADF0u, 0x133F4Cu, 0x133F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133F54u;
label_133f54:
    // 0x133f54: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x133F54u;
    {
        const bool branch_taken_0x133f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133f54) {
            ctx->pc = 0x133FB8u;
            goto label_133fb8;
        }
    }
    ctx->pc = 0x133F5Cu;
label_133f5c:
    // 0x133f5c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x133f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x133f60: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x133f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x133f64: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x133f64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x133f68: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x133f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x133f6c: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x133f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x133f70: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x133f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x133f74: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x133f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x133f78: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x133f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x133f7c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x133f7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x133f80: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x133f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x133f84: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x133f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x133f88: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x133f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x133f8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x133f8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133f90: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x133f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x133f94: 0x240601e4  addiu       $a2, $zero, 0x1E4
    ctx->pc = 0x133f94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 484));
    // 0x133f98: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x133f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
    // 0x133f9c: 0x24070148  addiu       $a3, $zero, 0x148
    ctx->pc = 0x133f9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 328));
    // 0x133fa0: 0x240802a8  addiu       $t0, $zero, 0x2A8
    ctx->pc = 0x133fa0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 680));
    // 0x133fa4: 0x24090200  addiu       $t1, $zero, 0x200
    ctx->pc = 0x133fa4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x133fa8: 0x240a0088  addiu       $t2, $zero, 0x88
    ctx->pc = 0x133fa8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x133fac: 0x240b0018  addiu       $t3, $zero, 0x18
    ctx->pc = 0x133facu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x133fb0: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x133FB0u;
    SET_GPR_U32(ctx, 31, 0x133FB8u);
    ctx->pc = 0x133FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133FB0u;
    // 0x133fb4: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ADF0u, 0x133FB0u, 0x133FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133FB8u;
label_133fb8:
    // 0x133fb8: 0x86030004  lh          $v1, 0x4($s0)
    ctx->pc = 0x133fb8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_133fbc:
    // 0x133fbc: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x133fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x133fc0: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x133fc0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x133fc4: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x133fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x133fc8: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x133fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x133fcc: 0x2484d840  addiu       $a0, $a0, -0x27C0
    ctx->pc = 0x133fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957120));
    // 0x133fd0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x133fd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x133fd4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x133fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x133fd8: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x133fd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x133fdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x133fdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x133fe0: 0xc0c5368  jal         func_314DA0
    ctx->pc = 0x133FE0u;
    SET_GPR_U32(ctx, 31, 0x133FE8u);
    ctx->pc = 0x133FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133FE0u;
    // 0x133fe4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x314DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314DA0u, 0x133FE0u, 0x133FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133FE8u;
label_133fe8:
    // 0x133fe8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x133fe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x133fec: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x133fecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x133ff0: 0x3e00008  jr          $ra
    ctx->pc = 0x133FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133FF0u;
        // 0x133ff4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133FF8u;
    // 0x133ff8: 0x0  nop
    ctx->pc = 0x133ff8u;
    // NOP
    // 0x133ffc: 0x0  nop
    ctx->pc = 0x133ffcu;
    // NOP
    // 0x134000: 0x27bdfd30  addiu       $sp, $sp, -0x2D0
    ctx->pc = 0x134000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966576));
    // 0x134004: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x134004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x134008: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x134008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x13400c: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x13400cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x134010: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x134010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x134014: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x134014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x134018: 0x8c910010  lw          $s1, 0x10($a0)
    ctx->pc = 0x134018u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x13401c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x13401cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x134020: 0xafa302cc  sw          $v1, 0x2CC($sp)
    ctx->pc = 0x134020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 716), GPR_U32(ctx, 3));
    // 0x134024: 0x108200c3  beq         $a0, $v0, . + 4 + (0xC3 << 2)
    ctx->pc = 0x134024u;
    {
        const bool branch_taken_0x134024 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x134028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134024u;
        // 0x134028: 0xafa002c8  sw          $zero, 0x2C8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 712), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134024) {
            ctx->pc = 0x134334u;
            goto label_134334;
        }
    }
    ctx->pc = 0x13402Cu;
    // 0x13402c: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13402Cu;
    {
        const bool branch_taken_0x13402c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13402c) {
            ctx->pc = 0x134030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13402Cu;
            // 0x134030: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13403Cu;
            goto label_13403c;
        }
    }
    ctx->pc = 0x134034u;
    // 0x134034: 0x1000017a  b           . + 4 + (0x17A << 2)
    ctx->pc = 0x134034u;
    {
        const bool branch_taken_0x134034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134034u;
        // 0x134038: 0x86230004  lh          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134034) {
            ctx->pc = 0x134620u;
            goto label_134620;
        }
    }
    ctx->pc = 0x13403Cu;
label_13403c:
    // 0x13403c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x13403cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x134040: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x134040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x134044: 0x24635980  addiu       $v1, $v1, 0x5980
    ctx->pc = 0x134044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22912));
    // 0x134048: 0x48040  sll         $s0, $a0, 1
    ctx->pc = 0x134048u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x13404c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x13404cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x134050: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x134050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x134054: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x134054u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x134058: 0x10820034  beq         $a0, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x134058u;
    {
        const bool branch_taken_0x134058 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x134058) {
            ctx->pc = 0x13412Cu;
            goto label_13412c;
        }
    }
    ctx->pc = 0x134060u;
    // 0x134060: 0x28810029  slti        $at, $a0, 0x29
    ctx->pc = 0x134060u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x134064: 0x50200002  beql        $at, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x134064u;
    {
        const bool branch_taken_0x134064 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x134064) {
            ctx->pc = 0x134068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134064u;
            // 0x134068: 0x248cffff  addiu       $t4, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134070u;
            goto label_134070;
        }
    }
    ctx->pc = 0x13406Cu;
    // 0x13406c: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x13406cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_134070:
    // 0x134070: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x134070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x134074: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x134074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x134078: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x134078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x13407c: 0x28810029  slti        $at, $a0, 0x29
    ctx->pc = 0x13407cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x134080: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x134080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x134084: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x134084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x134088: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x134088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x13408c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x13408cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x134090: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x134090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    // 0x134094: 0xffa30020  sd          $v1, 0x20($sp)
    ctx->pc = 0x134094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 3));
    // 0x134098: 0xffa20028  sd          $v0, 0x28($sp)
    ctx->pc = 0x134098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
    // 0x13409c: 0xffa20030  sd          $v0, 0x30($sp)
    ctx->pc = 0x13409cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 2));
    // 0x1340a0: 0xffa20038  sd          $v0, 0x38($sp)
    ctx->pc = 0x1340a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 2));
    // 0x1340a4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1340A4u;
    {
        const bool branch_taken_0x1340a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1340A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1340A4u;
        // 0x1340a8: 0xffa20040  sd          $v0, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1340a4) {
            ctx->pc = 0x1340B4u;
            goto label_1340b4;
        }
    }
    ctx->pc = 0x1340ACu;
    // 0x1340ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1340ACu;
    {
        const bool branch_taken_0x1340ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1340B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1340ACu;
        // 0x1340b0: 0x24030012  addiu       $v1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1340ac) {
            ctx->pc = 0x1340BCu;
            goto label_1340bc;
        }
    }
    ctx->pc = 0x1340B4u;
label_1340b4:
    // 0x1340b4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1340b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1340b8: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x1340b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1340bc:
    // 0x1340bc: 0x3c0238e3  lui         $v0, 0x38E3
    ctx->pc = 0x1340bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14563 << 16));
    // 0x1340c0: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x1340c0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1340c4: 0x34488e39  ori         $t0, $v0, 0x8E39
    ctx->pc = 0x1340c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36409);
    // 0x1340c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1340c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1340cc: 0x240a0038  addiu       $t2, $zero, 0x38
    ctx->pc = 0x1340ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1340d0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1340d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1340d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1340d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1340d8: 0x24060104  addiu       $a2, $zero, 0x104
    ctx->pc = 0x1340d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
    // 0x1340dc: 0x2407005b  addiu       $a3, $zero, 0x5B
    ctx->pc = 0x1340dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x1340e0: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x1340e0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1340e4: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x1340e4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x1340e8: 0x4810  mfhi        $t1
    ctx->pc = 0x1340e8u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x1340ec: 0xc1fc2  srl         $v1, $t4, 31
    ctx->pc = 0x1340ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 12), 31));
    // 0x1340f0: 0x10c0018  mult        $zero, $t0, $t4
    ctx->pc = 0x1340f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1340f4: 0x910c0  sll         $v0, $t1, 3
    ctx->pc = 0x1340f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x1340f8: 0x491023  subu        $v0, $v0, $t1
    ctx->pc = 0x1340f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1340fc: 0x27a402c8  addiu       $a0, $sp, 0x2C8
    ctx->pc = 0x1340fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 712));
    // 0x134100: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x134100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x134104: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x134104u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x134108: 0x1010  mfhi        $v0
    ctx->pc = 0x134108u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x13410c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x13410cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x134110: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x134110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x134114: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x134114u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x134118: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x134118u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13411c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x13411cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x134120: 0x24420268  addiu       $v0, $v0, 0x268
    ctx->pc = 0x134120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 616));
    // 0x134124: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x134124u;
    SET_GPR_U32(ctx, 31, 0x13412Cu);
    ctx->pc = 0x134128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134124u;
    // 0x134128: 0x3049ffff  andi        $t1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ADF0u, 0x134124u, 0x13412Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13412Cu;
label_13412c:
    // 0x13412c: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x13412cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x134130: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x134130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x134134: 0x9044f35a  lbu         $a0, -0xCA6($v0)
    ctx->pc = 0x134134u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964058)));
    // 0x134138: 0x10830138  beq         $a0, $v1, . + 4 + (0x138 << 2)
    ctx->pc = 0x134138u;
    {
        const bool branch_taken_0x134138 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x134138) {
            ctx->pc = 0x13461Cu;
            goto label_13461c;
        }
    }
    ctx->pc = 0x134140u;
    // 0x134140: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x134140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x134144: 0x10820135  beq         $a0, $v0, . + 4 + (0x135 << 2)
    ctx->pc = 0x134144u;
    {
        const bool branch_taken_0x134144 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x134144) {
            ctx->pc = 0x13461Cu;
            goto label_13461c;
        }
    }
    ctx->pc = 0x13414Cu;
    // 0x13414c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x13414cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x134150: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x134150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x134154: 0x24635982  addiu       $v1, $v1, 0x5982
    ctx->pc = 0x134154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22914));
    // 0x134158: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x134158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x13415c: 0x94650000  lhu         $a1, 0x0($v1)
    ctx->pc = 0x13415cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x134160: 0x10a20036  beq         $a1, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x134160u;
    {
        const bool branch_taken_0x134160 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x134160) {
            ctx->pc = 0x13423Cu;
            goto label_13423c;
        }
    }
    ctx->pc = 0x134168u;
    // 0x134168: 0x28a10029  slti        $at, $a1, 0x29
    ctx->pc = 0x134168u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x13416c: 0x50200002  beql        $at, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x13416Cu;
    {
        const bool branch_taken_0x13416c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13416c) {
            ctx->pc = 0x134170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13416Cu;
            // 0x134170: 0x24acffff  addiu       $t4, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134178u;
            goto label_134178;
        }
    }
    ctx->pc = 0x134174u;
    // 0x134174: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x134174u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_134178:
    // 0x134178: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x134178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13417c: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x13417cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x134180: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x134180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x134184: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x134184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x134188: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x134188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x13418c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x13418cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x134190: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x134190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x134194: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x134194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x134198: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x134198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x13419c: 0x28a10029  slti        $at, $a1, 0x29
    ctx->pc = 0x13419cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x1341a0: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x1341a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x1341a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1341a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1341a8: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x1341a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x1341ac: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x1341acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x1341b0: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x1341b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x1341b4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1341B4u;
    {
        const bool branch_taken_0x1341b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1341B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1341B4u;
        // 0x1341b8: 0xffa30040  sd          $v1, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1341b4) {
            ctx->pc = 0x1341C4u;
            goto label_1341c4;
        }
    }
    ctx->pc = 0x1341BCu;
    // 0x1341bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1341BCu;
    {
        const bool branch_taken_0x1341bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1341C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1341BCu;
        // 0x1341c0: 0x24030012  addiu       $v1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1341bc) {
            ctx->pc = 0x1341CCu;
            goto label_1341cc;
        }
    }
    ctx->pc = 0x1341C4u;
label_1341c4:
    // 0x1341c4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1341c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1341c8: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x1341c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1341cc:
    // 0x1341cc: 0x3c0238e3  lui         $v0, 0x38E3
    ctx->pc = 0x1341ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14563 << 16));
    // 0x1341d0: 0xa3001a  div         $zero, $a1, $v1
    ctx->pc = 0x1341d0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1341d4: 0x34488e39  ori         $t0, $v0, 0x8E39
    ctx->pc = 0x1341d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36409);
    // 0x1341d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1341d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1341dc: 0x240a0038  addiu       $t2, $zero, 0x38
    ctx->pc = 0x1341dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1341e0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1341e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1341e4: 0x27a402c8  addiu       $a0, $sp, 0x2C8
    ctx->pc = 0x1341e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 712));
    // 0x1341e8: 0x24060104  addiu       $a2, $zero, 0x104
    ctx->pc = 0x1341e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
    // 0x1341ec: 0x24070094  addiu       $a3, $zero, 0x94
    ctx->pc = 0x1341ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    // 0x1341f0: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x1341f0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1341f4: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x1341f4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x1341f8: 0x4810  mfhi        $t1
    ctx->pc = 0x1341f8u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x1341fc: 0xc1fc2  srl         $v1, $t4, 31
    ctx->pc = 0x1341fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 12), 31));
    // 0x134200: 0x10c0018  mult        $zero, $t0, $t4
    ctx->pc = 0x134200u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x134204: 0x910c0  sll         $v0, $t1, 3
    ctx->pc = 0x134204u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x134208: 0x491023  subu        $v0, $v0, $t1
    ctx->pc = 0x134208u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x13420c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13420cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134210: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x134210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x134214: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x134214u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x134218: 0x1010  mfhi        $v0
    ctx->pc = 0x134218u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x13421c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x13421cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x134220: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x134220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x134224: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x134224u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x134228: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x134228u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13422c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x13422cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x134230: 0x24420268  addiu       $v0, $v0, 0x268
    ctx->pc = 0x134230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 616));
    // 0x134234: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x134234u;
    SET_GPR_U32(ctx, 31, 0x13423Cu);
    ctx->pc = 0x134238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134234u;
    // 0x134238: 0x3049ffff  andi        $t1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ADF0u, 0x134234u, 0x13423Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13423Cu;
label_13423c:
    // 0x13423c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x13423cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x134240: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x134240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x134244: 0x24635984  addiu       $v1, $v1, 0x5984
    ctx->pc = 0x134244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22916));
    // 0x134248: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x134248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x13424c: 0x94650000  lhu         $a1, 0x0($v1)
    ctx->pc = 0x13424cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x134250: 0x10a200f2  beq         $a1, $v0, . + 4 + (0xF2 << 2)
    ctx->pc = 0x134250u;
    {
        const bool branch_taken_0x134250 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x134250) {
            ctx->pc = 0x13461Cu;
            goto label_13461c;
        }
    }
    ctx->pc = 0x134258u;
    // 0x134258: 0x28a10029  slti        $at, $a1, 0x29
    ctx->pc = 0x134258u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x13425c: 0x50200002  beql        $at, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x13425Cu;
    {
        const bool branch_taken_0x13425c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13425c) {
            ctx->pc = 0x134260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13425Cu;
            // 0x134260: 0x24acffff  addiu       $t4, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134268u;
            goto label_134268;
        }
    }
    ctx->pc = 0x134264u;
    // 0x134264: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x134264u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_134268:
    // 0x134268: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x134268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13426c: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x13426cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x134270: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x134270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x134274: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x134274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x134278: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x134278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x13427c: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x13427cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x134280: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x134280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x134284: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x134284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x134288: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x134288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x13428c: 0x28a10029  slti        $at, $a1, 0x29
    ctx->pc = 0x13428cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x134290: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x134290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x134294: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x134294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x134298: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x134298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x13429c: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x13429cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x1342a0: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x1342a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x1342a4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1342A4u;
    {
        const bool branch_taken_0x1342a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1342A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1342A4u;
        // 0x1342a8: 0xffa30040  sd          $v1, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1342a4) {
            ctx->pc = 0x1342B4u;
            goto label_1342b4;
        }
    }
    ctx->pc = 0x1342ACu;
    // 0x1342ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1342ACu;
    {
        const bool branch_taken_0x1342ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1342B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1342ACu;
        // 0x1342b0: 0x24030012  addiu       $v1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1342ac) {
            ctx->pc = 0x1342BCu;
            goto label_1342bc;
        }
    }
    ctx->pc = 0x1342B4u;
label_1342b4:
    // 0x1342b4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1342b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1342b8: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x1342b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1342bc:
    // 0x1342bc: 0x3c0238e3  lui         $v0, 0x38E3
    ctx->pc = 0x1342bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14563 << 16));
    // 0x1342c0: 0xa3001a  div         $zero, $a1, $v1
    ctx->pc = 0x1342c0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1342c4: 0x34488e39  ori         $t0, $v0, 0x8E39
    ctx->pc = 0x1342c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36409);
    // 0x1342c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1342c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1342cc: 0x240a0038  addiu       $t2, $zero, 0x38
    ctx->pc = 0x1342ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1342d0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1342d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1342d4: 0x27a402c8  addiu       $a0, $sp, 0x2C8
    ctx->pc = 0x1342d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 712));
    // 0x1342d8: 0x24060104  addiu       $a2, $zero, 0x104
    ctx->pc = 0x1342d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
    // 0x1342dc: 0x240700cc  addiu       $a3, $zero, 0xCC
    ctx->pc = 0x1342dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
    // 0x1342e0: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x1342e0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1342e4: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x1342e4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x1342e8: 0x4810  mfhi        $t1
    ctx->pc = 0x1342e8u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x1342ec: 0xc1fc2  srl         $v1, $t4, 31
    ctx->pc = 0x1342ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 12), 31));
    // 0x1342f0: 0x10c0018  mult        $zero, $t0, $t4
    ctx->pc = 0x1342f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1342f4: 0x910c0  sll         $v0, $t1, 3
    ctx->pc = 0x1342f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x1342f8: 0x491023  subu        $v0, $v0, $t1
    ctx->pc = 0x1342f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1342fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1342fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134300: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x134300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x134304: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x134304u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x134308: 0x1010  mfhi        $v0
    ctx->pc = 0x134308u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x13430c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x13430cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x134310: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x134310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x134314: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x134314u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x134318: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x134318u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13431c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x13431cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x134320: 0x24420268  addiu       $v0, $v0, 0x268
    ctx->pc = 0x134320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 616));
    // 0x134324: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x134324u;
    SET_GPR_U32(ctx, 31, 0x13432Cu);
    ctx->pc = 0x134328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134324u;
    // 0x134328: 0x3049ffff  andi        $t1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ADF0u, 0x134324u, 0x13432Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13432Cu;
label_13432c:
    // 0x13432c: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x13432Cu;
    {
        const bool branch_taken_0x13432c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13432c) {
            ctx->pc = 0x13461Cu;
            goto label_13461c;
        }
    }
    ctx->pc = 0x134334u;
label_134334:
    // 0x134334: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x134334u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x134338: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x134338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x13433c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x13433cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x134340: 0x24635980  addiu       $v1, $v1, 0x5980
    ctx->pc = 0x134340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22912));
    // 0x134344: 0x48040  sll         $s0, $a0, 1
    ctx->pc = 0x134344u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x134348: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x134348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x13434c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x13434cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x134350: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x134350u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x134354: 0x10820033  beq         $a0, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x134354u;
    {
        const bool branch_taken_0x134354 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x134354) {
            ctx->pc = 0x134424u;
            goto label_134424;
        }
    }
    ctx->pc = 0x13435Cu;
    // 0x13435c: 0x28810029  slti        $at, $a0, 0x29
    ctx->pc = 0x13435cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x134360: 0x50200002  beql        $at, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x134360u;
    {
        const bool branch_taken_0x134360 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x134360) {
            ctx->pc = 0x134364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134360u;
            // 0x134364: 0x248cffff  addiu       $t4, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13436Cu;
            goto label_13436c;
        }
    }
    ctx->pc = 0x134368u;
    // 0x134368: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x134368u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13436c:
    // 0x13436c: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x13436cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x134370: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x134370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x134374: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x134374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x134378: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x134378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13437c: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x13437cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x134380: 0x28810029  slti        $at, $a0, 0x29
    ctx->pc = 0x134380u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x134384: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x134384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    // 0x134388: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x134388u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13438c: 0xffa30020  sd          $v1, 0x20($sp)
    ctx->pc = 0x13438cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 3));
    // 0x134390: 0xffa20028  sd          $v0, 0x28($sp)
    ctx->pc = 0x134390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
    // 0x134394: 0xffa20030  sd          $v0, 0x30($sp)
    ctx->pc = 0x134394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 2));
    // 0x134398: 0xffa20038  sd          $v0, 0x38($sp)
    ctx->pc = 0x134398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 2));
    // 0x13439c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x13439Cu;
    {
        const bool branch_taken_0x13439c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1343A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13439Cu;
        // 0x1343a0: 0xffa20040  sd          $v0, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13439c) {
            ctx->pc = 0x1343ACu;
            goto label_1343ac;
        }
    }
    ctx->pc = 0x1343A4u;
    // 0x1343a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1343A4u;
    {
        const bool branch_taken_0x1343a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1343A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1343A4u;
        // 0x1343a8: 0x24030012  addiu       $v1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1343a4) {
            ctx->pc = 0x1343B4u;
            goto label_1343b4;
        }
    }
    ctx->pc = 0x1343ACu;
label_1343ac:
    // 0x1343ac: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1343acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1343b0: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x1343b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1343b4:
    // 0x1343b4: 0x3c0238e3  lui         $v0, 0x38E3
    ctx->pc = 0x1343b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14563 << 16));
    // 0x1343b8: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x1343b8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1343bc: 0x34488e39  ori         $t0, $v0, 0x8E39
    ctx->pc = 0x1343bcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36409);
    // 0x1343c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1343c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1343c4: 0x240a0038  addiu       $t2, $zero, 0x38
    ctx->pc = 0x1343c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1343c8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1343c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1343cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1343ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1343d0: 0x24060145  addiu       $a2, $zero, 0x145
    ctx->pc = 0x1343d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 325));
    // 0x1343d4: 0x2407005b  addiu       $a3, $zero, 0x5B
    ctx->pc = 0x1343d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x1343d8: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x1343d8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1343dc: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x1343dcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x1343e0: 0x4810  mfhi        $t1
    ctx->pc = 0x1343e0u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x1343e4: 0xc1fc2  srl         $v1, $t4, 31
    ctx->pc = 0x1343e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 12), 31));
    // 0x1343e8: 0x10c0018  mult        $zero, $t0, $t4
    ctx->pc = 0x1343e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1343ec: 0x910c0  sll         $v0, $t1, 3
    ctx->pc = 0x1343ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x1343f0: 0x491023  subu        $v0, $v0, $t1
    ctx->pc = 0x1343f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1343f4: 0x27a402c8  addiu       $a0, $sp, 0x2C8
    ctx->pc = 0x1343f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 712));
    // 0x1343f8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1343f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1343fc: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x1343fcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x134400: 0x1010  mfhi        $v0
    ctx->pc = 0x134400u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x134404: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x134404u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x134408: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x134408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13440c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x13440cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x134410: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x134410u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x134414: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x134414u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x134418: 0x24420268  addiu       $v0, $v0, 0x268
    ctx->pc = 0x134418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 616));
    // 0x13441c: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x13441Cu;
    SET_GPR_U32(ctx, 31, 0x134424u);
    ctx->pc = 0x134420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13441Cu;
    // 0x134420: 0x3049ffff  andi        $t1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ADF0u, 0x13441Cu, 0x134424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134424u;
label_134424:
    // 0x134424: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x134424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x134428: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x134428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13442c: 0x9044f35a  lbu         $a0, -0xCA6($v0)
    ctx->pc = 0x13442cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964058)));
    // 0x134430: 0x1083007a  beq         $a0, $v1, . + 4 + (0x7A << 2)
    ctx->pc = 0x134430u;
    {
        const bool branch_taken_0x134430 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x134430) {
            ctx->pc = 0x13461Cu;
            goto label_13461c;
        }
    }
    ctx->pc = 0x134438u;
    // 0x134438: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x134438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13443c: 0x10820077  beq         $a0, $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x13443Cu;
    {
        const bool branch_taken_0x13443c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x13443c) {
            ctx->pc = 0x13461Cu;
            goto label_13461c;
        }
    }
    ctx->pc = 0x134444u;
    // 0x134444: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x134444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x134448: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x134448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x13444c: 0x24635982  addiu       $v1, $v1, 0x5982
    ctx->pc = 0x13444cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22914));
    // 0x134450: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x134450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x134454: 0x94650000  lhu         $a1, 0x0($v1)
    ctx->pc = 0x134454u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x134458: 0x10a20035  beq         $a1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x134458u;
    {
        const bool branch_taken_0x134458 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x134458) {
            ctx->pc = 0x134530u;
            goto label_134530;
        }
    }
    ctx->pc = 0x134460u;
    // 0x134460: 0x28a10029  slti        $at, $a1, 0x29
    ctx->pc = 0x134460u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x134464: 0x50200002  beql        $at, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x134464u;
    {
        const bool branch_taken_0x134464 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x134464) {
            ctx->pc = 0x134468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134464u;
            // 0x134468: 0x24acffff  addiu       $t4, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134470u;
            goto label_134470;
        }
    }
    ctx->pc = 0x13446Cu;
    // 0x13446c: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x13446cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_134470:
    // 0x134470: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x134470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x134474: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x134474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x134478: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x134478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x13447c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x13447cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x134480: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x134480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x134484: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x134484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x134488: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x134488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x13448c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x13448cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x134490: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x134490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x134494: 0x28a10029  slti        $at, $a1, 0x29
    ctx->pc = 0x134494u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x134498: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x134498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x13449c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x13449cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1344a0: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x1344a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x1344a4: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x1344a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x1344a8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1344A8u;
    {
        const bool branch_taken_0x1344a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1344ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1344A8u;
        // 0x1344ac: 0xffa30040  sd          $v1, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1344a8) {
            ctx->pc = 0x1344B8u;
            goto label_1344b8;
        }
    }
    ctx->pc = 0x1344B0u;
    // 0x1344b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1344B0u;
    {
        const bool branch_taken_0x1344b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1344B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1344B0u;
        // 0x1344b4: 0x24030012  addiu       $v1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1344b0) {
            ctx->pc = 0x1344C0u;
            goto label_1344c0;
        }
    }
    ctx->pc = 0x1344B8u;
label_1344b8:
    // 0x1344b8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1344b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1344bc: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x1344bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1344c0:
    // 0x1344c0: 0x3c0238e3  lui         $v0, 0x38E3
    ctx->pc = 0x1344c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14563 << 16));
    // 0x1344c4: 0xa3001a  div         $zero, $a1, $v1
    ctx->pc = 0x1344c4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1344c8: 0x34488e39  ori         $t0, $v0, 0x8E39
    ctx->pc = 0x1344c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36409);
    // 0x1344cc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1344ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1344d0: 0x240a0038  addiu       $t2, $zero, 0x38
    ctx->pc = 0x1344d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1344d4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1344d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1344d8: 0x27a402c8  addiu       $a0, $sp, 0x2C8
    ctx->pc = 0x1344d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 712));
    // 0x1344dc: 0x24060145  addiu       $a2, $zero, 0x145
    ctx->pc = 0x1344dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 325));
    // 0x1344e0: 0x24070094  addiu       $a3, $zero, 0x94
    ctx->pc = 0x1344e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    // 0x1344e4: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x1344e4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1344e8: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x1344e8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x1344ec: 0x4810  mfhi        $t1
    ctx->pc = 0x1344ecu;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x1344f0: 0xc1fc2  srl         $v1, $t4, 31
    ctx->pc = 0x1344f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 12), 31));
    // 0x1344f4: 0x10c0018  mult        $zero, $t0, $t4
    ctx->pc = 0x1344f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1344f8: 0x910c0  sll         $v0, $t1, 3
    ctx->pc = 0x1344f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x1344fc: 0x491023  subu        $v0, $v0, $t1
    ctx->pc = 0x1344fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x134500: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x134500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134504: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x134504u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x134508: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x134508u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13450c: 0x1010  mfhi        $v0
    ctx->pc = 0x13450cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x134510: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x134510u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x134514: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x134514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x134518: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x134518u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x13451c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x13451cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x134520: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x134520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x134524: 0x24420268  addiu       $v0, $v0, 0x268
    ctx->pc = 0x134524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 616));
    // 0x134528: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x134528u;
    SET_GPR_U32(ctx, 31, 0x134530u);
    ctx->pc = 0x13452Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134528u;
    // 0x13452c: 0x3049ffff  andi        $t1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ADF0u, 0x134528u, 0x134530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134530u;
label_134530:
    // 0x134530: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x134530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x134534: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x134534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x134538: 0x24635984  addiu       $v1, $v1, 0x5984
    ctx->pc = 0x134538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22916));
    // 0x13453c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x13453cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x134540: 0x94650000  lhu         $a1, 0x0($v1)
    ctx->pc = 0x134540u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x134544: 0x10a20035  beq         $a1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x134544u;
    {
        const bool branch_taken_0x134544 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x134544) {
            ctx->pc = 0x13461Cu;
            goto label_13461c;
        }
    }
    ctx->pc = 0x13454Cu;
    // 0x13454c: 0x28a10029  slti        $at, $a1, 0x29
    ctx->pc = 0x13454cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x134550: 0x50200002  beql        $at, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x134550u;
    {
        const bool branch_taken_0x134550 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x134550) {
            ctx->pc = 0x134554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134550u;
            // 0x134554: 0x24acffff  addiu       $t4, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13455Cu;
            goto label_13455c;
        }
    }
    ctx->pc = 0x134558u;
    // 0x134558: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x134558u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13455c:
    // 0x13455c: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x13455cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x134560: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x134560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x134564: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x134564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x134568: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x134568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x13456c: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x13456cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x134570: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x134570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x134574: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x134574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x134578: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x134578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13457c: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x13457cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x134580: 0x28a10029  slti        $at, $a1, 0x29
    ctx->pc = 0x134580u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x134584: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x134584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x134588: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x134588u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13458c: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x13458cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x134590: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x134590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x134594: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x134594u;
    {
        const bool branch_taken_0x134594 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x134598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134594u;
        // 0x134598: 0xffa30040  sd          $v1, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134594) {
            ctx->pc = 0x1345A4u;
            goto label_1345a4;
        }
    }
    ctx->pc = 0x13459Cu;
    // 0x13459c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13459Cu;
    {
        const bool branch_taken_0x13459c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1345A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13459Cu;
        // 0x1345a0: 0x24030012  addiu       $v1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13459c) {
            ctx->pc = 0x1345ACu;
            goto label_1345ac;
        }
    }
    ctx->pc = 0x1345A4u;
label_1345a4:
    // 0x1345a4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1345a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1345a8: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x1345a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1345ac:
    // 0x1345ac: 0x3c0238e3  lui         $v0, 0x38E3
    ctx->pc = 0x1345acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14563 << 16));
    // 0x1345b0: 0xa3001a  div         $zero, $a1, $v1
    ctx->pc = 0x1345b0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1345b4: 0x34488e39  ori         $t0, $v0, 0x8E39
    ctx->pc = 0x1345b4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36409);
    // 0x1345b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1345b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1345bc: 0x240a0038  addiu       $t2, $zero, 0x38
    ctx->pc = 0x1345bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1345c0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1345c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1345c4: 0x27a402c8  addiu       $a0, $sp, 0x2C8
    ctx->pc = 0x1345c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 712));
    // 0x1345c8: 0x24060145  addiu       $a2, $zero, 0x145
    ctx->pc = 0x1345c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 325));
    // 0x1345cc: 0x240700cc  addiu       $a3, $zero, 0xCC
    ctx->pc = 0x1345ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
    // 0x1345d0: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x1345d0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1345d4: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x1345d4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x1345d8: 0x4810  mfhi        $t1
    ctx->pc = 0x1345d8u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x1345dc: 0xc1fc2  srl         $v1, $t4, 31
    ctx->pc = 0x1345dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 12), 31));
    // 0x1345e0: 0x10c0018  mult        $zero, $t0, $t4
    ctx->pc = 0x1345e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1345e4: 0x910c0  sll         $v0, $t1, 3
    ctx->pc = 0x1345e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x1345e8: 0x491023  subu        $v0, $v0, $t1
    ctx->pc = 0x1345e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1345ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1345ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1345f0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1345f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1345f4: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x1345f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1345f8: 0x1010  mfhi        $v0
    ctx->pc = 0x1345f8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1345fc: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1345fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x134600: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x134600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x134604: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x134604u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x134608: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x134608u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13460c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x13460cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x134610: 0x24420268  addiu       $v0, $v0, 0x268
    ctx->pc = 0x134610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 616));
    // 0x134614: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x134614u;
    SET_GPR_U32(ctx, 31, 0x13461Cu);
    ctx->pc = 0x134618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134614u;
    // 0x134618: 0x3049ffff  andi        $t1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ADF0u, 0x134614u, 0x13461Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13461Cu;
label_13461c:
    // 0x13461c: 0x86230004  lh          $v1, 0x4($s1)
    ctx->pc = 0x13461cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_134620:
    // 0x134620: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x134620u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x134624: 0x86220006  lh          $v0, 0x6($s1)
    ctx->pc = 0x134624u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x134628: 0xc62e0008  lwc1        $f14, 0x8($s1)
    ctx->pc = 0x134628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x13462c: 0x8fa602c8  lw          $a2, 0x2C8($sp)
    ctx->pc = 0x13462cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 712)));
    // 0x134630: 0x2484d840  addiu       $a0, $a0, -0x27C0
    ctx->pc = 0x134630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957120));
    // 0x134634: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x134634u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134638: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x134638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x13463c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x13463cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x134640: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x134640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134644: 0xc0c5368  jal         func_314DA0
    ctx->pc = 0x134644u;
    SET_GPR_U32(ctx, 31, 0x13464Cu);
    ctx->pc = 0x134648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134644u;
    // 0x134648: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x314DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314DA0u, 0x134644u, 0x13464Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13464Cu;
label_13464c:
    // 0x13464c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x13464cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x134650: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x134650u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x134654: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x134654u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x134658: 0x3e00008  jr          $ra
    ctx->pc = 0x134658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13465Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134658u;
        // 0x13465c: 0x27bd02d0  addiu       $sp, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134660u;
}
