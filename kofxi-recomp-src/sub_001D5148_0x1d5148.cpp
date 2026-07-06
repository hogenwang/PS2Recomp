#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D5148
// Address: 0x1d5148 - 0x1d5820
void sub_001D5148_0x1d5148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5148_0x1d5148");
#endif

    switch (ctx->pc) {
        case 0x1d56b8u: goto label_1d56b8;
        default: break;
    }

    ctx->pc = 0x1d5148u;

    // 0x1d5148: 0x248b0180  addiu       $t3, $a0, 0x180
    ctx->pc = 0x1d5148u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x1d514c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1d514cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d5150: 0x8d620440  lw          $v0, 0x440($t3)
    ctx->pc = 0x1d5150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1088)));
    // 0x1d5154: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x1d5154u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5158: 0x8d640308  lw          $a0, 0x308($t3)
    ctx->pc = 0x1d5158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 776)));
    // 0x1d515c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d515cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d5160: 0xad630420  sw          $v1, 0x420($t3)
    ctx->pc = 0x1d5160u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1056), GPR_U32(ctx, 3));
    // 0x1d5164: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5164u;
    {
        const bool branch_taken_0x1d5164 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5164u;
            // 0x1d5168: 0xad620440  sw          $v0, 0x440($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 1088), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5164) {
            ctx->pc = 0x1D5178u;
            goto label_1d5178;
        }
    }
    ctx->pc = 0x1D516Cu;
    // 0x1d516c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1d516cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d5170: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D5170u;
    {
        const bool branch_taken_0x1d5170 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d5170) {
            ctx->pc = 0x1D5174u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5170u;
            // 0x1d5174: 0x8d620494  lw          $v0, 0x494($t3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1172)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D5188u;
            goto label_1d5188;
        }
    }
    ctx->pc = 0x1D5178u;
label_1d5178:
    // 0x1d5178: 0x8d62030c  lw          $v0, 0x30C($t3)
    ctx->pc = 0x1d5178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 780)));
    // 0x1d517c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D517Cu;
    {
        const bool branch_taken_0x1d517c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D517Cu;
            // 0x1d5180: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d517c) {
            ctx->pc = 0x1D5194u;
            goto label_1d5194;
        }
    }
    ctx->pc = 0x1D5184u;
    // 0x1d5184: 0x8d620494  lw          $v0, 0x494($t3)
    ctx->pc = 0x1d5184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1172)));
label_1d5188:
    // 0x1d5188: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d5188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d518c: 0xad620494  sw          $v0, 0x494($t3)
    ctx->pc = 0x1d518cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1172), GPR_U32(ctx, 2));
    // 0x1d5190: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x1d5190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_1d5194:
    // 0x1d5194: 0x1824024  and         $t0, $t4, $v0
    ctx->pc = 0x1d5194u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 12) & GPR_U64(ctx, 2));
    // 0x1d5198: 0x1881823  subu        $v1, $t4, $t0
    ctx->pc = 0x1d5198u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
    // 0x1d519c: 0x81090000  lb          $t1, 0x0($t0)
    ctx->pc = 0x1d519cu;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d51a0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d51a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d51a4: 0x350c0  sll         $t2, $v1, 3
    ctx->pc = 0x1d51a4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1d51a8: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x1d51a8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d51ac: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d51acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d51b0: 0x91050000  lbu         $a1, 0x0($t0)
    ctx->pc = 0x1d51b0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d51b4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d51b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d51b8: 0x91060000  lbu         $a2, 0x0($t0)
    ctx->pc = 0x1d51b8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d51bc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d51bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d51c0: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1d51c0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d51c4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d51c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d51c8: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d51c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d51cc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d51ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d51d0: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x1d51d0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
    // 0x1d51d4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d51d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d51d8: 0x1244825  or          $t1, $t1, $a0
    ctx->pc = 0x1d51d8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 4));
    // 0x1d51dc: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d51dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d51e0: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1d51e0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d51e4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d51e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d51e8: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x1d51e8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
    // 0x1d51ec: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d51ecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d51f0: 0x1254825  or          $t1, $t1, $a1
    ctx->pc = 0x1d51f0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 5));
    // 0x1d51f4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d51f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d51f8: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d51f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1d51fc: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x1d51fcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
    // 0x1d5200: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d5200u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d5204: 0x1264825  or          $t1, $t1, $a2
    ctx->pc = 0x1d5204u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
    // 0x1d5208: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d5208u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d520c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d520cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d5210: 0x11400007  beqz        $t2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D5210u;
    {
        const bool branch_taken_0x1d5210 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5210u;
            // 0x1d5214: 0x1494804  sllv        $t1, $t1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 10) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5210) {
            ctx->pc = 0x1D5230u;
            goto label_1d5230;
        }
    }
    ctx->pc = 0x1D5218u;
    // 0x1d5218: 0xa1023  negu        $v0, $t2
    ctx->pc = 0x1d5218u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 10)));
    // 0x1d521c: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1d521cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d5220: 0x1221025  or          $v0, $t1, $v0
    ctx->pc = 0x1d5220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x1d5224: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x1d5224u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x1d5228: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D5228u;
    {
        const bool branch_taken_0x1d5228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D522Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5228u;
            // 0x1d522c: 0xad6200d8  sw          $v0, 0xD8($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5228) {
            ctx->pc = 0x1D5238u;
            goto label_1d5238;
        }
    }
    ctx->pc = 0x1D5230u;
label_1d5230:
    // 0x1d5230: 0xad6900d8  sw          $t1, 0xD8($t3)
    ctx->pc = 0x1d5230u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 216), GPR_U32(ctx, 9));
    // 0x1d5234: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1d5234u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1d5238:
    // 0x1d5238: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1d5238u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d523c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d523cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d5240: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d5240u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d5244: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d5244u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d5248: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d5248u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d524c: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1d524cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d5250: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d5250u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d5254: 0x29420016  slti        $v0, $t2, 0x16
    ctx->pc = 0x1d5254u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x1d5258: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d5258u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d525c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d525cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d5260: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x1d5260u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d5264: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d5264u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d5268: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d5268u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1d526c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d526cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d5270: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D5270u;
    {
        const bool branch_taken_0x1d5270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5270u;
            // 0x1d5274: 0xe43825  or          $a3, $a3, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5270) {
            ctx->pc = 0x1D52E8u;
            goto label_1d52e8;
        }
    }
    ctx->pc = 0x1D5278u;
    // 0x1d5278: 0x254affea  addiu       $t2, $t2, -0x16
    ctx->pc = 0x1d5278u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967274));
    // 0x1d527c: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D527Cu;
    {
        const bool branch_taken_0x1d527c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D527Cu;
            // 0x1d5280: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d527c) {
            ctx->pc = 0x1D52A0u;
            goto label_1d52a0;
        }
    }
    ctx->pc = 0x1D5284u;
    // 0x1d5284: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x1d5284u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1d5288: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1d5288u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d528c: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x1d528cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x1d5290: 0x91d82  srl         $v1, $t1, 22
    ctx->pc = 0x1d5290u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 22));
    // 0x1d5294: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x1d5294u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x1d5298: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5298u;
    {
        const bool branch_taken_0x1d5298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D529Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5298u;
            // 0x1d529c: 0xad6300dc  sw          $v1, 0xDC($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 220), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5298) {
            ctx->pc = 0x1D52ACu;
            goto label_1d52ac;
        }
    }
    ctx->pc = 0x1D52A0u;
label_1d52a0:
    // 0x1d52a0: 0x91582  srl         $v0, $t1, 22
    ctx->pc = 0x1d52a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 22));
    // 0x1d52a4: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1d52a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52a8: 0xad6200dc  sw          $v0, 0xDC($t3)
    ctx->pc = 0x1d52a8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 220), GPR_U32(ctx, 2));
label_1d52ac:
    // 0x1d52ac: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1d52acu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d52b0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d52b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d52b4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d52b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d52b8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d52b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d52bc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d52bcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d52c0: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1d52c0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d52c4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d52c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d52c8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d52c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d52cc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d52ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d52d0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d52d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d52d4: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d52d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1d52d8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d52d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d52dc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d52dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d52e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D52E0u;
    {
        const bool branch_taken_0x1d52e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D52E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D52E0u;
            // 0x1d52e4: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d52e0) {
            ctx->pc = 0x1D52F8u;
            goto label_1d52f8;
        }
    }
    ctx->pc = 0x1D52E8u;
label_1d52e8:
    // 0x1d52e8: 0x91582  srl         $v0, $t1, 22
    ctx->pc = 0x1d52e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 22));
    // 0x1d52ec: 0x94a80  sll         $t1, $t1, 10
    ctx->pc = 0x1d52ecu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 10));
    // 0x1d52f0: 0xad6200dc  sw          $v0, 0xDC($t3)
    ctx->pc = 0x1d52f0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 220), GPR_U32(ctx, 2));
    // 0x1d52f4: 0x254a000a  addiu       $t2, $t2, 0xA
    ctx->pc = 0x1d52f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 10));
label_1d52f8:
    // 0x1d52f8: 0x2942001d  slti        $v0, $t2, 0x1D
    ctx->pc = 0x1d52f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x1d52fc: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1D52FCu;
    {
        const bool branch_taken_0x1d52fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D52FCu;
            // 0x1d5300: 0x91742  srl         $v0, $t1, 29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d52fc) {
            ctx->pc = 0x1D5378u;
            goto label_1d5378;
        }
    }
    ctx->pc = 0x1D5304u;
    // 0x1d5304: 0x254affe3  addiu       $t2, $t2, -0x1D
    ctx->pc = 0x1d5304u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967267));
    // 0x1d5308: 0x11400009  beqz        $t2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D5308u;
    {
        const bool branch_taken_0x1d5308 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D530Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5308u;
            // 0x1d530c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5308) {
            ctx->pc = 0x1D5330u;
            goto label_1d5330;
        }
    }
    ctx->pc = 0x1D5310u;
    // 0x1d5310: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x1d5310u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1d5314: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1d5314u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d5318: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x1d5318u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x1d531c: 0x91f42  srl         $v1, $t1, 29
    ctx->pc = 0x1d531cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 29));
    // 0x1d5320: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x1d5320u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x1d5324: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D5324u;
    {
        const bool branch_taken_0x1d5324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5324u;
            // 0x1d5328: 0xad6300e0  sw          $v1, 0xE0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5324) {
            ctx->pc = 0x1D533Cu;
            goto label_1d533c;
        }
    }
    ctx->pc = 0x1D532Cu;
    // 0x1d532c: 0x0  nop
    ctx->pc = 0x1d532cu;
    // NOP
label_1d5330:
    // 0x1d5330: 0x91742  srl         $v0, $t1, 29
    ctx->pc = 0x1d5330u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 29));
    // 0x1d5334: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1d5334u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5338: 0xad6200e0  sw          $v0, 0xE0($t3)
    ctx->pc = 0x1d5338u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 224), GPR_U32(ctx, 2));
label_1d533c:
    // 0x1d533c: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1d533cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d5340: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d5340u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d5344: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d5344u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d5348: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d5348u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d534c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d534cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d5350: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1d5350u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d5354: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d5354u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d5358: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d5358u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d535c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d535cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d5360: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d5360u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d5364: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d5364u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1d5368: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d5368u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d536c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d536cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d5370: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5370u;
    {
        const bool branch_taken_0x1d5370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5370u;
            // 0x1d5374: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5370) {
            ctx->pc = 0x1D5384u;
            goto label_1d5384;
        }
    }
    ctx->pc = 0x1D5378u;
label_1d5378:
    // 0x1d5378: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x1d5378u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x1d537c: 0xad6200e0  sw          $v0, 0xE0($t3)
    ctx->pc = 0x1d537cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 224), GPR_U32(ctx, 2));
    // 0x1d5380: 0x254a0003  addiu       $t2, $t2, 0x3
    ctx->pc = 0x1d5380u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 3));
label_1d5384:
    // 0x1d5384: 0x29420010  slti        $v0, $t2, 0x10
    ctx->pc = 0x1d5384u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1d5388: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D5388u;
    {
        const bool branch_taken_0x1d5388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D538Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5388u;
            // 0x1d538c: 0x91402  srl         $v0, $t1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5388) {
            ctx->pc = 0x1D5400u;
            goto label_1d5400;
        }
    }
    ctx->pc = 0x1D5390u;
    // 0x1d5390: 0x254afff0  addiu       $t2, $t2, -0x10
    ctx->pc = 0x1d5390u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967280));
    // 0x1d5394: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D5394u;
    {
        const bool branch_taken_0x1d5394 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5394u;
            // 0x1d5398: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5394) {
            ctx->pc = 0x1D53B8u;
            goto label_1d53b8;
        }
    }
    ctx->pc = 0x1D539Cu;
    // 0x1d539c: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x1d539cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1d53a0: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1d53a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d53a4: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x1d53a4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x1d53a8: 0x91c02  srl         $v1, $t1, 16
    ctx->pc = 0x1d53a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x1d53ac: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x1d53acu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x1d53b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D53B0u;
    {
        const bool branch_taken_0x1d53b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D53B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D53B0u;
            // 0x1d53b4: 0xad6300e4  sw          $v1, 0xE4($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 228), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d53b0) {
            ctx->pc = 0x1D53C4u;
            goto label_1d53c4;
        }
    }
    ctx->pc = 0x1D53B8u;
label_1d53b8:
    // 0x1d53b8: 0x91402  srl         $v0, $t1, 16
    ctx->pc = 0x1d53b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x1d53bc: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1d53bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d53c0: 0xad6200e4  sw          $v0, 0xE4($t3)
    ctx->pc = 0x1d53c0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 228), GPR_U32(ctx, 2));
label_1d53c4:
    // 0x1d53c4: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1d53c4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d53c8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d53c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d53cc: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d53ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d53d0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d53d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d53d4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d53d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d53d8: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1d53d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d53dc: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d53dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d53e0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d53e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d53e4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d53e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d53e8: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d53e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d53ec: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d53ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1d53f0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d53f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d53f4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d53f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d53f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D53F8u;
    {
        const bool branch_taken_0x1d53f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D53FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D53F8u;
            // 0x1d53fc: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d53f8) {
            ctx->pc = 0x1D540Cu;
            goto label_1d540c;
        }
    }
    ctx->pc = 0x1D5400u;
label_1d5400:
    // 0x1d5400: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x1d5400u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x1d5404: 0xad6200e4  sw          $v0, 0xE4($t3)
    ctx->pc = 0x1d5404u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 228), GPR_U32(ctx, 2));
    // 0x1d5408: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x1d5408u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
label_1d540c:
    // 0x1d540c: 0x8d6600e0  lw          $a2, 0xE0($t3)
    ctx->pc = 0x1d540cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 224)));
    // 0x1d5410: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x1d5410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1d5414: 0x2c620003  sltiu       $v0, $v1, 0x3
    ctx->pc = 0x1d5414u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1d5418: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D5418u;
    {
        const bool branch_taken_0x1d5418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D541Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5418u;
            // 0x1d541c: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5418) {
            ctx->pc = 0x1D5430u;
            goto label_1d5430;
        }
    }
    ctx->pc = 0x1D5420u;
    // 0x1d5420: 0x8d620494  lw          $v0, 0x494($t3)
    ctx->pc = 0x1d5420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1172)));
    // 0x1d5424: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d5424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d5428: 0xad620494  sw          $v0, 0x494($t3)
    ctx->pc = 0x1d5428u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1172), GPR_U32(ctx, 2));
    // 0x1d542c: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x1d542cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1d5430:
    // 0x1d5430: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D5430u;
    {
        const bool branch_taken_0x1d5430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5430u;
            // 0x1d5434: 0x8d6204a4  lw          $v0, 0x4A4($t3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5430) {
            ctx->pc = 0x1D5450u;
            goto label_1d5450;
        }
    }
    ctx->pc = 0x1D5438u;
    // 0x1d5438: 0xad6004a8  sw          $zero, 0x4A8($t3)
    ctx->pc = 0x1d5438u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1192), GPR_U32(ctx, 0));
    // 0x1d543c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d543cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d5440: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1d5440u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1d5444: 0xad6204a4  sw          $v0, 0x4A4($t3)
    ctx->pc = 0x1d5444u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1188), GPR_U32(ctx, 2));
    // 0x1d5448: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1D5448u;
    {
        const bool branch_taken_0x1d5448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D544Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5448u;
            // 0x1d544c: 0xad6304ac  sw          $v1, 0x4AC($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 1196), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5448) {
            ctx->pc = 0x1D546Cu;
            goto label_1d546c;
        }
    }
    ctx->pc = 0x1D5450u;
label_1d5450:
    // 0x1d5450: 0x8d6304a8  lw          $v1, 0x4A8($t3)
    ctx->pc = 0x1d5450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1192)));
    // 0x1d5454: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d5454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d5458: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d5458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d545c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1d545cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1d5460: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1d5460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d5464: 0xad6304a8  sw          $v1, 0x4A8($t3)
    ctx->pc = 0x1d5464u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1192), GPR_U32(ctx, 3));
    // 0x1d5468: 0xad6204ac  sw          $v0, 0x4AC($t3)
    ctx->pc = 0x1d5468u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1196), GPR_U32(ctx, 2));
label_1d546c:
    // 0x1d546c: 0x24c2fffe  addiu       $v0, $a2, -0x2
    ctx->pc = 0x1d546cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
    // 0x1d5470: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1d5470u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d5474: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x1D5474u;
    {
        const bool branch_taken_0x1d5474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5474u;
            // 0x1d5478: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5474) {
            ctx->pc = 0x1D5590u;
            goto label_1d5590;
        }
    }
    ctx->pc = 0x1D547Cu;
    // 0x1d547c: 0x2942001f  slti        $v0, $t2, 0x1F
    ctx->pc = 0x1d547cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1d5480: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D5480u;
    {
        const bool branch_taken_0x1d5480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5480u;
            // 0x1d5484: 0x917c2  srl         $v0, $t1, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5480) {
            ctx->pc = 0x1D54F8u;
            goto label_1d54f8;
        }
    }
    ctx->pc = 0x1D5488u;
    // 0x1d5488: 0x254affe1  addiu       $t2, $t2, -0x1F
    ctx->pc = 0x1d5488u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967265));
    // 0x1d548c: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D548Cu;
    {
        const bool branch_taken_0x1d548c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D548Cu;
            // 0x1d5490: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d548c) {
            ctx->pc = 0x1D54B0u;
            goto label_1d54b0;
        }
    }
    ctx->pc = 0x1D5494u;
    // 0x1d5494: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x1d5494u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1d5498: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1d5498u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d549c: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x1d549cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x1d54a0: 0x91fc2  srl         $v1, $t1, 31
    ctx->pc = 0x1d54a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x1d54a4: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x1d54a4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x1d54a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D54A8u;
    {
        const bool branch_taken_0x1d54a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D54ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D54A8u;
            // 0x1d54ac: 0xad6300e8  sw          $v1, 0xE8($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d54a8) {
            ctx->pc = 0x1D54BCu;
            goto label_1d54bc;
        }
    }
    ctx->pc = 0x1D54B0u;
label_1d54b0:
    // 0x1d54b0: 0x917c2  srl         $v0, $t1, 31
    ctx->pc = 0x1d54b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x1d54b4: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1d54b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d54b8: 0xad6200e8  sw          $v0, 0xE8($t3)
    ctx->pc = 0x1d54b8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 232), GPR_U32(ctx, 2));
label_1d54bc:
    // 0x1d54bc: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1d54bcu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d54c0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d54c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d54c4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d54c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d54c8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d54c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d54cc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d54ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d54d0: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1d54d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d54d4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d54d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d54d8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d54d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d54dc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d54dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d54e0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d54e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d54e4: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d54e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1d54e8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d54e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d54ec: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d54ecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d54f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D54F0u;
    {
        const bool branch_taken_0x1d54f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D54F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D54F0u;
            // 0x1d54f4: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d54f0) {
            ctx->pc = 0x1D5504u;
            goto label_1d5504;
        }
    }
    ctx->pc = 0x1D54F8u;
label_1d54f8:
    // 0x1d54f8: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x1d54f8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x1d54fc: 0xad6200e8  sw          $v0, 0xE8($t3)
    ctx->pc = 0x1d54fcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 232), GPR_U32(ctx, 2));
    // 0x1d5500: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1d5500u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1d5504:
    // 0x1d5504: 0x2942001d  slti        $v0, $t2, 0x1D
    ctx->pc = 0x1d5504u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x1d5508: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D5508u;
    {
        const bool branch_taken_0x1d5508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D550Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5508u;
            // 0x1d550c: 0x91742  srl         $v0, $t1, 29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5508) {
            ctx->pc = 0x1D5580u;
            goto label_1d5580;
        }
    }
    ctx->pc = 0x1D5510u;
    // 0x1d5510: 0x254affe3  addiu       $t2, $t2, -0x1D
    ctx->pc = 0x1d5510u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967267));
    // 0x1d5514: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D5514u;
    {
        const bool branch_taken_0x1d5514 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5514u;
            // 0x1d5518: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5514) {
            ctx->pc = 0x1D5538u;
            goto label_1d5538;
        }
    }
    ctx->pc = 0x1D551Cu;
    // 0x1d551c: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x1d551cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1d5520: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1d5520u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d5524: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x1d5524u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x1d5528: 0x91f42  srl         $v1, $t1, 29
    ctx->pc = 0x1d5528u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 29));
    // 0x1d552c: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x1d552cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x1d5530: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5530u;
    {
        const bool branch_taken_0x1d5530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5530u;
            // 0x1d5534: 0xad6300ec  sw          $v1, 0xEC($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 236), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5530) {
            ctx->pc = 0x1D5544u;
            goto label_1d5544;
        }
    }
    ctx->pc = 0x1D5538u;
label_1d5538:
    // 0x1d5538: 0x91742  srl         $v0, $t1, 29
    ctx->pc = 0x1d5538u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 29));
    // 0x1d553c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1d553cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5540: 0xad6200ec  sw          $v0, 0xEC($t3)
    ctx->pc = 0x1d5540u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 236), GPR_U32(ctx, 2));
label_1d5544:
    // 0x1d5544: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1d5544u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d5548: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d5548u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d554c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d554cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d5550: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d5550u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d5554: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d5554u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d5558: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1d5558u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d555c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d555cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d5560: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d5560u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d5564: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d5564u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d5568: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d5568u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d556c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d556cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1d5570: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d5570u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d5574: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d5574u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d5578: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5578u;
    {
        const bool branch_taken_0x1d5578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D557Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5578u;
            // 0x1d557c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5578) {
            ctx->pc = 0x1D558Cu;
            goto label_1d558c;
        }
    }
    ctx->pc = 0x1D5580u;
label_1d5580:
    // 0x1d5580: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x1d5580u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x1d5584: 0xad6200ec  sw          $v0, 0xEC($t3)
    ctx->pc = 0x1d5584u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 236), GPR_U32(ctx, 2));
    // 0x1d5588: 0x254a0003  addiu       $t2, $t2, 0x3
    ctx->pc = 0x1d5588u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 3));
label_1d558c:
    // 0x1d558c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d558cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d5590:
    // 0x1d5590: 0x14c20047  bne         $a2, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x1D5590u;
    {
        const bool branch_taken_0x1d5590 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D5594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5590u;
            // 0x1d5594: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5590) {
            ctx->pc = 0x1D56B0u;
            goto label_1d56b0;
        }
    }
    ctx->pc = 0x1D5598u;
    // 0x1d5598: 0x2942001f  slti        $v0, $t2, 0x1F
    ctx->pc = 0x1d5598u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1d559c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1D559Cu;
    {
        const bool branch_taken_0x1d559c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D55A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D559Cu;
            // 0x1d55a0: 0x917c2  srl         $v0, $t1, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d559c) {
            ctx->pc = 0x1D5618u;
            goto label_1d5618;
        }
    }
    ctx->pc = 0x1D55A4u;
    // 0x1d55a4: 0x254affe1  addiu       $t2, $t2, -0x1F
    ctx->pc = 0x1d55a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967265));
    // 0x1d55a8: 0x11400009  beqz        $t2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D55A8u;
    {
        const bool branch_taken_0x1d55a8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D55ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D55A8u;
            // 0x1d55ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d55a8) {
            ctx->pc = 0x1D55D0u;
            goto label_1d55d0;
        }
    }
    ctx->pc = 0x1D55B0u;
    // 0x1d55b0: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x1d55b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1d55b4: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1d55b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d55b8: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x1d55b8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x1d55bc: 0x91fc2  srl         $v1, $t1, 31
    ctx->pc = 0x1d55bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x1d55c0: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x1d55c0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x1d55c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D55C4u;
    {
        const bool branch_taken_0x1d55c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D55C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D55C4u;
            // 0x1d55c8: 0xad6300f0  sw          $v1, 0xF0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 240), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d55c4) {
            ctx->pc = 0x1D55DCu;
            goto label_1d55dc;
        }
    }
    ctx->pc = 0x1D55CCu;
    // 0x1d55cc: 0x0  nop
    ctx->pc = 0x1d55ccu;
    // NOP
label_1d55d0:
    // 0x1d55d0: 0x917c2  srl         $v0, $t1, 31
    ctx->pc = 0x1d55d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x1d55d4: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1d55d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d55d8: 0xad6200f0  sw          $v0, 0xF0($t3)
    ctx->pc = 0x1d55d8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 240), GPR_U32(ctx, 2));
label_1d55dc:
    // 0x1d55dc: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1d55dcu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d55e0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d55e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d55e4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d55e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d55e8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d55e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d55ec: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d55ecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d55f0: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1d55f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d55f4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d55f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d55f8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d55f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d55fc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d55fcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d5600: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d5600u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d5604: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d5604u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1d5608: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d5608u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d560c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d560cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d5610: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5610u;
    {
        const bool branch_taken_0x1d5610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5610u;
            // 0x1d5614: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5610) {
            ctx->pc = 0x1D5624u;
            goto label_1d5624;
        }
    }
    ctx->pc = 0x1D5618u;
label_1d5618:
    // 0x1d5618: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x1d5618u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x1d561c: 0xad6200f0  sw          $v0, 0xF0($t3)
    ctx->pc = 0x1d561cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 240), GPR_U32(ctx, 2));
    // 0x1d5620: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1d5620u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1d5624:
    // 0x1d5624: 0x2942001d  slti        $v0, $t2, 0x1D
    ctx->pc = 0x1d5624u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x1d5628: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D5628u;
    {
        const bool branch_taken_0x1d5628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D562Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5628u;
            // 0x1d562c: 0x91742  srl         $v0, $t1, 29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5628) {
            ctx->pc = 0x1D56A0u;
            goto label_1d56a0;
        }
    }
    ctx->pc = 0x1D5630u;
    // 0x1d5630: 0x254affe3  addiu       $t2, $t2, -0x1D
    ctx->pc = 0x1d5630u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967267));
    // 0x1d5634: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D5634u;
    {
        const bool branch_taken_0x1d5634 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5634u;
            // 0x1d5638: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5634) {
            ctx->pc = 0x1D5658u;
            goto label_1d5658;
        }
    }
    ctx->pc = 0x1D563Cu;
    // 0x1d563c: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x1d563cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1d5640: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1d5640u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d5644: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x1d5644u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x1d5648: 0x91f42  srl         $v1, $t1, 29
    ctx->pc = 0x1d5648u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 29));
    // 0x1d564c: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x1d564cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x1d5650: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5650u;
    {
        const bool branch_taken_0x1d5650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5650u;
            // 0x1d5654: 0xad6300f4  sw          $v1, 0xF4($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 244), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5650) {
            ctx->pc = 0x1D5664u;
            goto label_1d5664;
        }
    }
    ctx->pc = 0x1D5658u;
label_1d5658:
    // 0x1d5658: 0x91742  srl         $v0, $t1, 29
    ctx->pc = 0x1d5658u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 29));
    // 0x1d565c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1d565cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5660: 0xad6200f4  sw          $v0, 0xF4($t3)
    ctx->pc = 0x1d5660u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 244), GPR_U32(ctx, 2));
label_1d5664:
    // 0x1d5664: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1d5664u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d5668: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d5668u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d566c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d566cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d5670: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d5670u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d5674: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d5674u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d5678: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1d5678u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d567c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d567cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d5680: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d5680u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d5684: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d5684u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d5688: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d5688u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d568c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d568cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1d5690: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d5690u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d5694: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d5694u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d5698: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5698u;
    {
        const bool branch_taken_0x1d5698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D569Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5698u;
            // 0x1d569c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5698) {
            ctx->pc = 0x1D56ACu;
            goto label_1d56ac;
        }
    }
    ctx->pc = 0x1D56A0u;
label_1d56a0:
    // 0x1d56a0: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x1d56a0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x1d56a4: 0xad6200f4  sw          $v0, 0xF4($t3)
    ctx->pc = 0x1d56a4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 244), GPR_U32(ctx, 2));
    // 0x1d56a8: 0x254a0003  addiu       $t2, $t2, 0x3
    ctx->pc = 0x1d56a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 3));
label_1d56ac:
    // 0x1d56ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d56acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d56b0:
    // 0x1d56b0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1D56B0u;
    {
        const bool branch_taken_0x1d56b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D56B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D56B0u;
            // 0x1d56b4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d56b0) {
            ctx->pc = 0x1D573Cu;
            goto label_1d573c;
        }
    }
    ctx->pc = 0x1D56B8u;
label_1d56b8:
    // 0x1d56b8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D56B8u;
    {
        const bool branch_taken_0x1d56b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D56BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D56B8u;
            // 0x1d56bc: 0x91602  srl         $v0, $t1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d56b8) {
            ctx->pc = 0x1D5730u;
            goto label_1d5730;
        }
    }
    ctx->pc = 0x1D56C0u;
    // 0x1d56c0: 0x254affe8  addiu       $t2, $t2, -0x18
    ctx->pc = 0x1d56c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967272));
    // 0x1d56c4: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D56C4u;
    {
        const bool branch_taken_0x1d56c4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D56C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D56C4u;
            // 0x1d56c8: 0xaa1023  subu        $v0, $a1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d56c4) {
            ctx->pc = 0x1D56E8u;
            goto label_1d56e8;
        }
    }
    ctx->pc = 0x1D56CCu;
    // 0x1d56cc: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1d56ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d56d0: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x1d56d0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x1d56d4: 0x91e02  srl         $v1, $t1, 24
    ctx->pc = 0x1d56d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 24));
    // 0x1d56d8: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x1d56d8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x1d56dc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D56DCu;
    {
        const bool branch_taken_0x1d56dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D56E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D56DCu;
            // 0x1d56e0: 0xad6300fc  sw          $v1, 0xFC($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 252), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d56dc) {
            ctx->pc = 0x1D56F4u;
            goto label_1d56f4;
        }
    }
    ctx->pc = 0x1D56E4u;
    // 0x1d56e4: 0x0  nop
    ctx->pc = 0x1d56e4u;
    // NOP
label_1d56e8:
    // 0x1d56e8: 0x91602  srl         $v0, $t1, 24
    ctx->pc = 0x1d56e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 24));
    // 0x1d56ec: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1d56ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d56f0: 0xad6200fc  sw          $v0, 0xFC($t3)
    ctx->pc = 0x1d56f0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 252), GPR_U32(ctx, 2));
label_1d56f4:
    // 0x1d56f4: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1d56f4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d56f8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d56f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d56fc: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d56fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d5700: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d5700u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d5704: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d5704u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d5708: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1d5708u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d570c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d570cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d5710: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d5710u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d5714: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d5714u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d5718: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d5718u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d571c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d571cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1d5720: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d5720u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d5724: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d5724u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d5728: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5728u;
    {
        const bool branch_taken_0x1d5728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D572Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5728u;
            // 0x1d572c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5728) {
            ctx->pc = 0x1D573Cu;
            goto label_1d573c;
        }
    }
    ctx->pc = 0x1D5730u;
label_1d5730:
    // 0x1d5730: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x1d5730u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
    // 0x1d5734: 0xad6200fc  sw          $v0, 0xFC($t3)
    ctx->pc = 0x1d5734u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 252), GPR_U32(ctx, 2));
    // 0x1d5738: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x1d5738u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
label_1d573c:
    // 0x1d573c: 0x2942001f  slti        $v0, $t2, 0x1F
    ctx->pc = 0x1d573cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1d5740: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D5740u;
    {
        const bool branch_taken_0x1d5740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5740u;
            // 0x1d5744: 0x917c2  srl         $v0, $t1, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5740) {
            ctx->pc = 0x1D57B8u;
            goto label_1d57b8;
        }
    }
    ctx->pc = 0x1D5748u;
    // 0x1d5748: 0x254affe1  addiu       $t2, $t2, -0x1F
    ctx->pc = 0x1d5748u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967265));
    // 0x1d574c: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D574Cu;
    {
        const bool branch_taken_0x1d574c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D574Cu;
            // 0x1d5750: 0x8a1023  subu        $v0, $a0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d574c) {
            ctx->pc = 0x1D5770u;
            goto label_1d5770;
        }
    }
    ctx->pc = 0x1D5754u;
    // 0x1d5754: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1d5754u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d5758: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x1d5758u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x1d575c: 0x91fc2  srl         $v1, $t1, 31
    ctx->pc = 0x1d575cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x1d5760: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x1d5760u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x1d5764: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D5764u;
    {
        const bool branch_taken_0x1d5764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5764u;
            // 0x1d5768: 0xad6300f8  sw          $v1, 0xF8($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 248), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5764) {
            ctx->pc = 0x1D577Cu;
            goto label_1d577c;
        }
    }
    ctx->pc = 0x1D576Cu;
    // 0x1d576c: 0x0  nop
    ctx->pc = 0x1d576cu;
    // NOP
label_1d5770:
    // 0x1d5770: 0x917c2  srl         $v0, $t1, 31
    ctx->pc = 0x1d5770u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x1d5774: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1d5774u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5778: 0xad6200f8  sw          $v0, 0xF8($t3)
    ctx->pc = 0x1d5778u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 248), GPR_U32(ctx, 2));
label_1d577c:
    // 0x1d577c: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1d577cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d5780: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d5780u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d5784: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d5784u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d5788: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d5788u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d578c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d578cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d5790: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1d5790u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d5794: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d5794u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d5798: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d5798u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d579c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d579cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d57a0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d57a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d57a4: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d57a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1d57a8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d57a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d57ac: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d57acu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d57b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D57B0u;
    {
        const bool branch_taken_0x1d57b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D57B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D57B0u;
            // 0x1d57b4: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d57b0) {
            ctx->pc = 0x1D57C4u;
            goto label_1d57c4;
        }
    }
    ctx->pc = 0x1D57B8u;
label_1d57b8:
    // 0x1d57b8: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x1d57b8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x1d57bc: 0xad6200f8  sw          $v0, 0xF8($t3)
    ctx->pc = 0x1d57bcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 248), GPR_U32(ctx, 2));
    // 0x1d57c0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1d57c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1d57c4:
    // 0x1d57c4: 0x8d6200f8  lw          $v0, 0xF8($t3)
    ctx->pc = 0x1d57c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 248)));
    // 0x1d57c8: 0x5440ffbb  bnel        $v0, $zero, . + 4 + (-0x45 << 2)
    ctx->pc = 0x1D57C8u;
    {
        const bool branch_taken_0x1d57c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d57c8) {
            ctx->pc = 0x1D57CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D57C8u;
            // 0x1d57cc: 0x29420018  slti        $v0, $t2, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)24) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D56B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d56b8;
        }
    }
    ctx->pc = 0x1D57D0u;
    // 0x1d57d0: 0x10c1823  subu        $v1, $t0, $t4
    ctx->pc = 0x1d57d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x1d57d4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1d57d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1d57d8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1d57d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1d57dc: 0xcb3021  addu        $a2, $a2, $t3
    ctx->pc = 0x1d57dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x1d57e0: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x1d57e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x1d57e4: 0x24c60444  addiu       $a2, $a2, 0x444
    ctx->pc = 0x1d57e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1092));
    // 0x1d57e8: 0x2462ffc7  addiu       $v0, $v1, -0x39
    ctx->pc = 0x1d57e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967239));
    // 0x1d57ec: 0x2463ffce  addiu       $v1, $v1, -0x32
    ctx->pc = 0x1d57ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967246));
    // 0x1d57f0: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1d57f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1d57f4: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x1d57f4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1d57f8: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x1d57f8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1d57fc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1d57fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d5800: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1d5800u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d5804: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d5804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d5808: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1d5808u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x1d580c: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x1d580cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x1d5810: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x1d5810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x1d5814: 0xad63030c  sw          $v1, 0x30C($t3)
    ctx->pc = 0x1d5814u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 780), GPR_U32(ctx, 3));
    // 0x1d5818: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D581Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5818u;
            // 0x1d581c: 0xad670308  sw          $a3, 0x308($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 776), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D5820u;
    ctx->pc = 0x1d5820u;
}
