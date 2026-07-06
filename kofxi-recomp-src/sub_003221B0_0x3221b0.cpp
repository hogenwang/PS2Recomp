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

// Function: sub_003221B0
// Address: 0x3221b0 - 0x3225e0
void sub_003221B0_0x3221b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003221B0_0x3221b0");
#endif

    switch (ctx->pc) {
        case 0x322340u: goto label_322340;
        case 0x322558u: goto label_322558;
        default: break;
    }

    ctx->pc = 0x3221b0u;

    // 0x3221b0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3221b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3221b4: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x3221b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x3221b8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3221b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x3221bc: 0x968c0  sll         $t5, $t1, 3
    ctx->pc = 0x3221bcu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x3221c0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3221c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3221c4: 0x2463f040  addiu       $v1, $v1, -0xFC0
    ctx->pc = 0x3221c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963264));
    // 0x3221c8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3221c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3221cc: 0x6d1821  addu        $v1, $v1, $t5
    ctx->pc = 0x3221ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x3221d0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3221d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3221d4: 0x96080  sll         $t4, $t1, 2
    ctx->pc = 0x3221d4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x3221d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3221d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3221dc: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x3221dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3221e0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3221e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3221e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3221e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3221e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3221e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3221ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3221ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3221f0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x3221f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x3221f4: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x3221f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x3221f8: 0x2463f044  addiu       $v1, $v1, -0xFBC
    ctx->pc = 0x3221f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963268));
    // 0x3221fc: 0x6d4821  addu        $t1, $v1, $t5
    ctx->pc = 0x3221fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x322200: 0xa12b0000  sb          $t3, 0x0($t1)
    ctx->pc = 0x322200u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 11));
    // 0x322204: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x322204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x322208: 0x946bf010  lhu         $t3, -0xFF0($v1)
    ctx->pc = 0x322208u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294963216)));
    // 0x32220c: 0x3c0901dd  lui         $t1, 0x1DD
    ctx->pc = 0x32220cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)477 << 16));
    // 0x322210: 0x2529f028  addiu       $t1, $t1, -0xFD8
    ctx->pc = 0x322210u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294963240));
    // 0x322214: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x322214u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
    // 0x322218: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x322218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x32221c: 0xad2b0000  sw          $t3, 0x0($t1)
    ctx->pc = 0x32221cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 11));
    // 0x322220: 0x2463f018  addiu       $v1, $v1, -0xFE8
    ctx->pc = 0x322220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963224));
    // 0x322224: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x322224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x322228: 0xac6a0000  sw          $t2, 0x0($v1)
    ctx->pc = 0x322228u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 10));
    // 0x32222c: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x32222cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x322230: 0x1c5082a  slt         $at, $t6, $a1
    ctx->pc = 0x322230u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x322234: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x322234u;
    {
        const bool branch_taken_0x322234 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x322234) {
            ctx->pc = 0x322238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x322234u;
            // 0x322238: 0xae082a  slt         $at, $a1, $t6 (Delay Slot)
            SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x322244u;
            goto label_322244;
        }
    }
    ctx->pc = 0x32223Cu;
    // 0x32223c: 0x1c0282d  daddu       $a1, $t6, $zero
    ctx->pc = 0x32223cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322240: 0xae082a  slt         $at, $a1, $t6
    ctx->pc = 0x322240u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
label_322244:
    // 0x322244: 0x102000d8  beqz        $at, . + 4 + (0xD8 << 2)
    ctx->pc = 0x322244u;
    {
        const bool branch_taken_0x322244 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x322244) {
            ctx->pc = 0x3225A8u;
            goto label_3225a8;
        }
    }
    ctx->pc = 0x32224Cu;
    // 0x32224c: 0x1c55823  subu        $t3, $t6, $a1
    ctx->pc = 0x32224cu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x322250: 0x29610009  slti        $at, $t3, 0x9
    ctx->pc = 0x322250u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x322254: 0x142000b6  bnez        $at, . + 4 + (0xB6 << 2)
    ctx->pc = 0x322254u;
    {
        const bool branch_taken_0x322254 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x322258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322254u;
        // 0x322258: 0x25cdfff8  addiu       $t5, $t6, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322254) {
            ctx->pc = 0x322530u;
            goto label_322530;
        }
    }
    ctx->pc = 0x32225Cu;
    // 0x32225c: 0x1c5082a  slt         $at, $t6, $a1
    ctx->pc = 0x32225cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x322260: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x322260u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322264: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x322264u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322268: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x322268u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32226c: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x32226Cu;
    {
        const bool branch_taken_0x32226c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x322270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32226Cu;
        // 0x322270: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32226c) {
            ctx->pc = 0x32228Cu;
            goto label_32228c;
        }
    }
    ctx->pc = 0x322274u;
    // 0x322274: 0x3c017fff  lui         $at, 0x7FFF
    ctx->pc = 0x322274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32767 << 16));
    // 0x322278: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x322278u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x32227c: 0x1c1082a  slt         $at, $t6, $at
    ctx->pc = 0x32227cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x322280: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x322280u;
    {
        const bool branch_taken_0x322280 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x322280) {
            ctx->pc = 0x32228Cu;
            goto label_32228c;
        }
    }
    ctx->pc = 0x322288u;
    // 0x322288: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x322288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32228c:
    // 0x32228c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x32228Cu;
    {
        const bool branch_taken_0x32228c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32228c) {
            ctx->pc = 0x3222ACu;
            goto label_3222ac;
        }
    }
    ctx->pc = 0x322294u;
    // 0x322294: 0x3c017fff  lui         $at, 0x7FFF
    ctx->pc = 0x322294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32767 << 16));
    // 0x322298: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x322298u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x32229c: 0xa1082a  slt         $at, $a1, $at
    ctx->pc = 0x32229cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x3222a0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x3222A0u;
    {
        const bool branch_taken_0x3222a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3222a0) {
            ctx->pc = 0x3222ACu;
            goto label_3222ac;
        }
    }
    ctx->pc = 0x3222A8u;
    // 0x3222a8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3222a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3222ac:
    // 0x3222ac: 0x11200005  beqz        $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3222ACu;
    {
        const bool branch_taken_0x3222ac = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x3222ac) {
            ctx->pc = 0x3222C4u;
            goto label_3222c4;
        }
    }
    ctx->pc = 0x3222B4u;
    // 0x3222b4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3222b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3222b8: 0x10a30002  beq         $a1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3222B8u;
    {
        const bool branch_taken_0x3222b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3222b8) {
            ctx->pc = 0x3222C4u;
            goto label_3222c4;
        }
    }
    ctx->pc = 0x3222C0u;
    // 0x3222c0: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x3222c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3222c4:
    // 0x3222c4: 0x1140000e  beqz        $t2, . + 4 + (0xE << 2)
    ctx->pc = 0x3222C4u;
    {
        const bool branch_taken_0x3222c4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x3222c4) {
            ctx->pc = 0x322300u;
            goto label_322300;
        }
    }
    ctx->pc = 0x3222CCu;
    // 0x3222cc: 0x3c0a8000  lui         $t2, 0x8000
    ctx->pc = 0x3222ccu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32768 << 16));
    // 0x3222d0: 0x51823  negu        $v1, $a1
    ctx->pc = 0x3222d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x3222d4: 0x1ca4824  and         $t1, $t6, $t2
    ctx->pc = 0x3222d4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 14) & GPR_U64(ctx, 10));
    // 0x3222d8: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x3222d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x3222dc: 0x15230005  bne         $t1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3222DCu;
    {
        const bool branch_taken_0x3222dc = (GPR_U64(ctx, 9) != GPR_U64(ctx, 3));
        ctx->pc = 0x3222E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3222DCu;
        // 0x3222e0: 0x240c0001  addiu       $t4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3222dc) {
            ctx->pc = 0x3222F4u;
            goto label_3222f4;
        }
    }
    ctx->pc = 0x3222E4u;
    // 0x3222e4: 0x16a1824  and         $v1, $t3, $t2
    ctx->pc = 0x3222e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & GPR_U64(ctx, 10));
    // 0x3222e8: 0x11230002  beq         $t1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3222E8u;
    {
        const bool branch_taken_0x3222e8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        if (branch_taken_0x3222e8) {
            ctx->pc = 0x3222F4u;
            goto label_3222f4;
        }
    }
    ctx->pc = 0x3222F0u;
    // 0x3222f0: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x3222f0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3222f4:
    // 0x3222f4: 0x11800002  beqz        $t4, . + 4 + (0x2 << 2)
    ctx->pc = 0x3222F4u;
    {
        const bool branch_taken_0x3222f4 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x3222f4) {
            ctx->pc = 0x322300u;
            goto label_322300;
        }
    }
    ctx->pc = 0x3222FCu;
    // 0x3222fc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x3222fcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_322300:
    // 0x322300: 0x11e0008b  beqz        $t7, . + 4 + (0x8B << 2)
    ctx->pc = 0x322300u;
    {
        const bool branch_taken_0x322300 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x322300) {
            ctx->pc = 0x322530u;
            goto label_322530;
        }
    }
    ctx->pc = 0x322308u;
    // 0x322308: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x322308u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x32230c: 0x3c0c01dd  lui         $t4, 0x1DD
    ctx->pc = 0x32230cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)477 << 16));
    // 0x322310: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x322310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x322314: 0x3c1401dd  lui         $s4, 0x1DD
    ctx->pc = 0x322314u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)477 << 16));
    // 0x322318: 0x246f0004  addiu       $t7, $v1, 0x4
    ctx->pc = 0x322318u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x32231c: 0x258cd810  addiu       $t4, $t4, -0x27F0
    ctx->pc = 0x32231cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294957072));
    // 0x322320: 0x3c1301dd  lui         $s3, 0x1DD
    ctx->pc = 0x322320u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)477 << 16));
    // 0x322324: 0x3c1201dd  lui         $s2, 0x1DD
    ctx->pc = 0x322324u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)477 << 16));
    // 0x322328: 0x3c1101dd  lui         $s1, 0x1DD
    ctx->pc = 0x322328u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)477 << 16));
    // 0x32232c: 0x3c1001dd  lui         $s0, 0x1DD
    ctx->pc = 0x32232cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)477 << 16));
    // 0x322330: 0x3c1901dd  lui         $t9, 0x1DD
    ctx->pc = 0x322330u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)477 << 16));
    // 0x322334: 0x3c1801dd  lui         $t8, 0x1DD
    ctx->pc = 0x322334u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)477 << 16));
    // 0x322338: 0x3c1701dd  lui         $s7, 0x1DD
    ctx->pc = 0x322338u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)477 << 16));
    // 0x32233c: 0x3c1e01dd  lui         $fp, 0x1DD
    ctx->pc = 0x32233cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)477 << 16));
label_322340:
    // 0x322340: 0x968af010  lhu         $t2, -0xFF0($s4)
    ctx->pc = 0x322340u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294963216)));
    // 0x322344: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x322344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x322348: 0x8de30000  lw          $v1, 0x0($t7)
    ctx->pc = 0x322348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x32234c: 0xadb02a  slt         $s6, $a1, $t5
    ctx->pc = 0x32234cu;
    SET_GPR_U64(ctx, 22, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x322350: 0xa4840  sll         $t1, $t2, 1
    ctx->pc = 0x322350u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x322354: 0x25550001  addiu       $s5, $t2, 0x1
    ctx->pc = 0x322354u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x322358: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x322358u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x32235c: 0x31a3c  dsll32      $v1, $v1, 8
    ctx->pc = 0x32235cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
    // 0x322360: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x322360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x322364: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x322364u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x322368: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x322368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x32236c: 0x1894821  addu        $t1, $t4, $t1
    ctx->pc = 0x32236cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
    // 0x322370: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x322370u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x322374: 0x32aaffff  andi        $t2, $s5, 0xFFFF
    ctx->pc = 0x322374u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x322378: 0xad280014  sw          $t0, 0x14($t1)
    ctx->pc = 0x322378u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 8));
    // 0x32237c: 0xa1840  sll         $v1, $t2, 1
    ctx->pc = 0x32237cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x322380: 0xa675f010  sh          $s5, -0xFF0($s3)
    ctx->pc = 0x322380u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4294963216), (uint16_t)GPR_U32(ctx, 21));
    // 0x322384: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x322384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x322388: 0xad260004  sw          $a2, 0x4($t1)
    ctx->pc = 0x322388u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 6));
    // 0x32238c: 0x25550001  addiu       $s5, $t2, 0x1
    ctx->pc = 0x32238cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x322390: 0xad27000c  sw          $a3, 0xC($t1)
    ctx->pc = 0x322390u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 7));
    // 0x322394: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x322394u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x322398: 0x8dea0004  lw          $t2, 0x4($t7)
    ctx->pc = 0x322398u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4)));
    // 0x32239c: 0x1835821  addu        $t3, $t4, $v1
    ctx->pc = 0x32239cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x3223a0: 0x32a9ffff  andi        $t1, $s5, 0xFFFF
    ctx->pc = 0x3223a0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x3223a4: 0x91840  sll         $v1, $t1, 1
    ctx->pc = 0x3223a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x3223a8: 0xa523c  dsll32      $t2, $t2, 8
    ctx->pc = 0x3223a8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 8));
    // 0x3223ac: 0xa655f010  sh          $s5, -0xFF0($s2)
    ctx->pc = 0x3223acu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4294963216), (uint16_t)GPR_U32(ctx, 21));
    // 0x3223b0: 0xa523e  dsrl32      $t2, $t2, 8
    ctx->pc = 0x3223b0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> (32 + 8));
    // 0x3223b4: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x3223b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x3223b8: 0x8a5021  addu        $t2, $a0, $t2
    ctx->pc = 0x3223b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x3223bc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3223bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3223c0: 0xad6a0000  sw          $t2, 0x0($t3)
    ctx->pc = 0x3223c0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 10));
    // 0x3223c4: 0x25350001  addiu       $s5, $t1, 0x1
    ctx->pc = 0x3223c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3223c8: 0xad680014  sw          $t0, 0x14($t3)
    ctx->pc = 0x3223c8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 20), GPR_U32(ctx, 8));
    // 0x3223cc: 0x32aaffff  andi        $t2, $s5, 0xFFFF
    ctx->pc = 0x3223ccu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x3223d0: 0xad660004  sw          $a2, 0x4($t3)
    ctx->pc = 0x3223d0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 6));
    // 0x3223d4: 0xa4840  sll         $t1, $t2, 1
    ctx->pc = 0x3223d4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x3223d8: 0xad67000c  sw          $a3, 0xC($t3)
    ctx->pc = 0x3223d8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 7));
    // 0x3223dc: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x3223dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x3223e0: 0x8deb0008  lw          $t3, 0x8($t7)
    ctx->pc = 0x3223e0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x3223e4: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x3223e4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x3223e8: 0x1831821  addu        $v1, $t4, $v1
    ctx->pc = 0x3223e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x3223ec: 0x1894821  addu        $t1, $t4, $t1
    ctx->pc = 0x3223ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
    // 0x3223f0: 0xb5a3c  dsll32      $t3, $t3, 8
    ctx->pc = 0x3223f0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 8));
    // 0x3223f4: 0xa635f010  sh          $s5, -0xFF0($s1)
    ctx->pc = 0x3223f4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4294963216), (uint16_t)GPR_U32(ctx, 21));
    // 0x3223f8: 0xb5a3e  dsrl32      $t3, $t3, 8
    ctx->pc = 0x3223f8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) >> (32 + 8));
    // 0x3223fc: 0x25550001  addiu       $s5, $t2, 0x1
    ctx->pc = 0x3223fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x322400: 0x8b5821  addu        $t3, $a0, $t3
    ctx->pc = 0x322400u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x322404: 0x32aaffff  andi        $t2, $s5, 0xFFFF
    ctx->pc = 0x322404u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x322408: 0xac6b0000  sw          $t3, 0x0($v1)
    ctx->pc = 0x322408u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 11));
    // 0x32240c: 0xac680014  sw          $t0, 0x14($v1)
    ctx->pc = 0x32240cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 8));
    // 0x322410: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x322410u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x322414: 0xac67000c  sw          $a3, 0xC($v1)
    ctx->pc = 0x322414u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
    // 0x322418: 0x8deb000c  lw          $t3, 0xC($t7)
    ctx->pc = 0x322418u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 12)));
    // 0x32241c: 0xa1840  sll         $v1, $t2, 1
    ctx->pc = 0x32241cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x322420: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x322420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x322424: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x322424u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x322428: 0xb5a3c  dsll32      $t3, $t3, 8
    ctx->pc = 0x322428u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 8));
    // 0x32242c: 0xa615f010  sh          $s5, -0xFF0($s0)
    ctx->pc = 0x32242cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4294963216), (uint16_t)GPR_U32(ctx, 21));
    // 0x322430: 0xb5a3e  dsrl32      $t3, $t3, 8
    ctx->pc = 0x322430u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) >> (32 + 8));
    // 0x322434: 0x25550001  addiu       $s5, $t2, 0x1
    ctx->pc = 0x322434u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x322438: 0x8b5821  addu        $t3, $a0, $t3
    ctx->pc = 0x322438u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x32243c: 0x1831821  addu        $v1, $t4, $v1
    ctx->pc = 0x32243cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x322440: 0xad2b0000  sw          $t3, 0x0($t1)
    ctx->pc = 0x322440u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 11));
    // 0x322444: 0x32aaffff  andi        $t2, $s5, 0xFFFF
    ctx->pc = 0x322444u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x322448: 0xad280014  sw          $t0, 0x14($t1)
    ctx->pc = 0x322448u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 8));
    // 0x32244c: 0xad260004  sw          $a2, 0x4($t1)
    ctx->pc = 0x32244cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 6));
    // 0x322450: 0xad27000c  sw          $a3, 0xC($t1)
    ctx->pc = 0x322450u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 7));
    // 0x322454: 0x8deb0010  lw          $t3, 0x10($t7)
    ctx->pc = 0x322454u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 16)));
    // 0x322458: 0xa4840  sll         $t1, $t2, 1
    ctx->pc = 0x322458u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x32245c: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x32245cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x322460: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x322460u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x322464: 0xb5a3c  dsll32      $t3, $t3, 8
    ctx->pc = 0x322464u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 8));
    // 0x322468: 0xa735f010  sh          $s5, -0xFF0($t9)
    ctx->pc = 0x322468u;
    WRITE16(ADD32(GPR_U32(ctx, 25), 4294963216), (uint16_t)GPR_U32(ctx, 21));
    // 0x32246c: 0xb5a3e  dsrl32      $t3, $t3, 8
    ctx->pc = 0x32246cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) >> (32 + 8));
    // 0x322470: 0x25550001  addiu       $s5, $t2, 0x1
    ctx->pc = 0x322470u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x322474: 0x8b5821  addu        $t3, $a0, $t3
    ctx->pc = 0x322474u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x322478: 0x1894821  addu        $t1, $t4, $t1
    ctx->pc = 0x322478u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
    // 0x32247c: 0xac6b0000  sw          $t3, 0x0($v1)
    ctx->pc = 0x32247cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 11));
    // 0x322480: 0x32aaffff  andi        $t2, $s5, 0xFFFF
    ctx->pc = 0x322480u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x322484: 0xac680014  sw          $t0, 0x14($v1)
    ctx->pc = 0x322484u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 8));
    // 0x322488: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x322488u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x32248c: 0xac67000c  sw          $a3, 0xC($v1)
    ctx->pc = 0x32248cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
    // 0x322490: 0x8deb0014  lw          $t3, 0x14($t7)
    ctx->pc = 0x322490u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 20)));
    // 0x322494: 0xa1840  sll         $v1, $t2, 1
    ctx->pc = 0x322494u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x322498: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x322498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x32249c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x32249cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3224a0: 0xb5a3c  dsll32      $t3, $t3, 8
    ctx->pc = 0x3224a0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 8));
    // 0x3224a4: 0xa715f010  sh          $s5, -0xFF0($t8)
    ctx->pc = 0x3224a4u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 4294963216), (uint16_t)GPR_U32(ctx, 21));
    // 0x3224a8: 0xb5a3e  dsrl32      $t3, $t3, 8
    ctx->pc = 0x3224a8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) >> (32 + 8));
    // 0x3224ac: 0x25550001  addiu       $s5, $t2, 0x1
    ctx->pc = 0x3224acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3224b0: 0x8b5821  addu        $t3, $a0, $t3
    ctx->pc = 0x3224b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x3224b4: 0x1831821  addu        $v1, $t4, $v1
    ctx->pc = 0x3224b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x3224b8: 0xad2b0000  sw          $t3, 0x0($t1)
    ctx->pc = 0x3224b8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 11));
    // 0x3224bc: 0x32aaffff  andi        $t2, $s5, 0xFFFF
    ctx->pc = 0x3224bcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x3224c0: 0xad280014  sw          $t0, 0x14($t1)
    ctx->pc = 0x3224c0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 8));
    // 0x3224c4: 0xad260004  sw          $a2, 0x4($t1)
    ctx->pc = 0x3224c4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 6));
    // 0x3224c8: 0xad27000c  sw          $a3, 0xC($t1)
    ctx->pc = 0x3224c8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 7));
    // 0x3224cc: 0x8deb0018  lw          $t3, 0x18($t7)
    ctx->pc = 0x3224ccu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 24)));
    // 0x3224d0: 0xa4840  sll         $t1, $t2, 1
    ctx->pc = 0x3224d0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x3224d4: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x3224d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x3224d8: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x3224d8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x3224dc: 0xb5a3c  dsll32      $t3, $t3, 8
    ctx->pc = 0x3224dcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 8));
    // 0x3224e0: 0xa6f5f010  sh          $s5, -0xFF0($s7)
    ctx->pc = 0x3224e0u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 4294963216), (uint16_t)GPR_U32(ctx, 21));
    // 0x3224e4: 0xb5a3e  dsrl32      $t3, $t3, 8
    ctx->pc = 0x3224e4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) >> (32 + 8));
    // 0x3224e8: 0x1894821  addu        $t1, $t4, $t1
    ctx->pc = 0x3224e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
    // 0x3224ec: 0x8b5821  addu        $t3, $a0, $t3
    ctx->pc = 0x3224ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x3224f0: 0x25550001  addiu       $s5, $t2, 0x1
    ctx->pc = 0x3224f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3224f4: 0xac6b0000  sw          $t3, 0x0($v1)
    ctx->pc = 0x3224f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 11));
    // 0x3224f8: 0xac680014  sw          $t0, 0x14($v1)
    ctx->pc = 0x3224f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 8));
    // 0x3224fc: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x3224fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x322500: 0xac67000c  sw          $a3, 0xC($v1)
    ctx->pc = 0x322500u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
    // 0x322504: 0x8de3001c  lw          $v1, 0x1C($t7)
    ctx->pc = 0x322504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 28)));
    // 0x322508: 0x31a3c  dsll32      $v1, $v1, 8
    ctx->pc = 0x322508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
    // 0x32250c: 0xa7d5f010  sh          $s5, -0xFF0($fp)
    ctx->pc = 0x32250cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 4294963216), (uint16_t)GPR_U32(ctx, 21));
    // 0x322510: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x322510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x322514: 0x25ef0020  addiu       $t7, $t7, 0x20
    ctx->pc = 0x322514u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 32));
    // 0x322518: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x322518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x32251c: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x32251cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x322520: 0xad280014  sw          $t0, 0x14($t1)
    ctx->pc = 0x322520u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 8));
    // 0x322524: 0xad260004  sw          $a2, 0x4($t1)
    ctx->pc = 0x322524u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 6));
    // 0x322528: 0x16c0ff85  bnez        $s6, . + 4 + (-0x7B << 2)
    ctx->pc = 0x322528u;
    {
        const bool branch_taken_0x322528 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x32252Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322528u;
        // 0x32252c: 0xad27000c  sw          $a3, 0xC($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322528) {
            ctx->pc = 0x322340u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_322340;
        }
    }
    ctx->pc = 0x322530u;
label_322530:
    // 0x322530: 0xae082a  slt         $at, $a1, $t6
    ctx->pc = 0x322530u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x322534: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x322534u;
    {
        const bool branch_taken_0x322534 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x322534) {
            ctx->pc = 0x3225A8u;
            goto label_3225a8;
        }
    }
    ctx->pc = 0x32253Cu;
    // 0x32253c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x32253cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x322540: 0x3c0d01dd  lui         $t5, 0x1DD
    ctx->pc = 0x322540u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)477 << 16));
    // 0x322544: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x322544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x322548: 0x3c0901dd  lui         $t1, 0x1DD
    ctx->pc = 0x322548u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)477 << 16));
    // 0x32254c: 0x24700004  addiu       $s0, $v1, 0x4
    ctx->pc = 0x32254cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x322550: 0x25add810  addiu       $t5, $t5, -0x27F0
    ctx->pc = 0x322550u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294957072));
    // 0x322554: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x322554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
label_322558:
    // 0x322558: 0x952ff010  lhu         $t7, -0xFF0($t1)
    ctx->pc = 0x322558u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4294963216)));
    // 0x32255c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x32255cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x322560: 0x8e0b0000  lw          $t3, 0x0($s0)
    ctx->pc = 0x322560u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x322564: 0xae502a  slt         $t2, $a1, $t6
    ctx->pc = 0x322564u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x322568: 0xf6040  sll         $t4, $t7, 1
    ctx->pc = 0x322568u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 15), 1));
    // 0x32256c: 0x25f50001  addiu       $s5, $t7, 0x1
    ctx->pc = 0x32256cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x322570: 0x18f6021  addu        $t4, $t4, $t7
    ctx->pc = 0x322570u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
    // 0x322574: 0xb5a3c  dsll32      $t3, $t3, 8
    ctx->pc = 0x322574u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 8));
    // 0x322578: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x322578u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x32257c: 0xb5a3e  dsrl32      $t3, $t3, 8
    ctx->pc = 0x32257cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) >> (32 + 8));
    // 0x322580: 0x1ac6021  addu        $t4, $t5, $t4
    ctx->pc = 0x322580u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x322584: 0x8b5821  addu        $t3, $a0, $t3
    ctx->pc = 0x322584u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x322588: 0xad8b0000  sw          $t3, 0x0($t4)
    ctx->pc = 0x322588u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 11));
    // 0x32258c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x32258cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x322590: 0xad880014  sw          $t0, 0x14($t4)
    ctx->pc = 0x322590u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 20), GPR_U32(ctx, 8));
    // 0x322594: 0xad860004  sw          $a2, 0x4($t4)
    ctx->pc = 0x322594u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 6));
    // 0x322598: 0xa475f010  sh          $s5, -0xFF0($v1)
    ctx->pc = 0x322598u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294963216), (uint16_t)GPR_U32(ctx, 21));
    // 0x32259c: 0x1540ffee  bnez        $t2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x32259Cu;
    {
        const bool branch_taken_0x32259c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x3225A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32259Cu;
        // 0x3225a0: 0xad87000c  sw          $a3, 0xC($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32259c) {
            ctx->pc = 0x322558u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_322558;
        }
    }
    ctx->pc = 0x3225A4u;
    // 0x3225a4: 0x0  nop
    ctx->pc = 0x3225a4u;
    // NOP
label_3225a8:
    // 0x3225a8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3225a8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3225ac: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3225acu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3225b0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3225b0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3225b4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3225b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3225b8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3225b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3225bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3225bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3225c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3225c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3225c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3225c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3225c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3225c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3225cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3225CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3225D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3225CCu;
        // 0x3225d0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3225CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3225D4u;
    // 0x3225d4: 0x0  nop
    ctx->pc = 0x3225d4u;
    // NOP
    // 0x3225d8: 0x0  nop
    ctx->pc = 0x3225d8u;
    // NOP
    // 0x3225dc: 0x0  nop
    ctx->pc = 0x3225dcu;
    // NOP
    if (ctx->pc == 0x3225dcu) { ctx->pc = 0x3225e0u; }
}
