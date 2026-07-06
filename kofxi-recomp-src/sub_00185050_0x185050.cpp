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

// Function: sub_00185050
// Address: 0x185050 - 0x1852a0
void sub_00185050_0x185050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00185050_0x185050");
#endif

    switch (ctx->pc) {
        case 0x18511cu: goto label_18511c;
        case 0x1851e0u: goto label_1851e0;
        case 0x185220u: goto label_185220;
        case 0x185284u: goto label_185284;
        default: break;
    }

    ctx->pc = 0x185050u;

    // 0x185050: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x185050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x185054: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x185054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x185058: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x185058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18505c: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x18505cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x185060: 0x8c46d918  lw          $a2, -0x26E8($v0)
    ctx->pc = 0x185060u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
    // 0x185064: 0xc31024  and         $v0, $a2, $v1
    ctx->pc = 0x185064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x185068: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x185068u;
    {
        const bool branch_taken_0x185068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18506Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185068u;
        // 0x18506c: 0x8c870010  lw          $a3, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185068) {
            ctx->pc = 0x185078u;
            goto label_185078;
        }
    }
    ctx->pc = 0x185070u;
    // 0x185070: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x185070u;
    {
        const bool branch_taken_0x185070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185070u;
        // 0x185074: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185070) {
            ctx->pc = 0x185290u;
            goto label_185290;
        }
    }
    ctx->pc = 0x185078u;
label_185078:
    // 0x185078: 0x90e50000  lbu         $a1, 0x0($a3)
    ctx->pc = 0x185078u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x18507c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x18507cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x185080: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x185080u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x185084: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x185084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x185088: 0x2463db53  addiu       $v1, $v1, -0x24AD
    ctx->pc = 0x185088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957907));
    // 0x18508c: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x18508cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x185090: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x185090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x185094: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x185094u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x185098: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x185098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x18509c: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x18509cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1850a0: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x1850a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1850a4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1850a4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1850a8: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x1850a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1850ac: 0x10c0002a  beqz        $a2, . + 4 + (0x2A << 2)
    ctx->pc = 0x1850ACu;
    {
        const bool branch_taken_0x1850ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1850B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1850ACu;
        // 0x1850b0: 0x90420004  lbu         $v0, 0x4($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1850ac) {
            ctx->pc = 0x185158u;
            goto label_185158;
        }
    }
    ctx->pc = 0x1850B4u;
    // 0x1850b4: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x1850b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x1850b8: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x1850b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x1850bc: 0x24e7db78  addiu       $a3, $a3, -0x2488
    ctx->pc = 0x1850bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957944));
    // 0x1850c0: 0x24c6dbc8  addiu       $a2, $a2, -0x2438
    ctx->pc = 0x1850c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958024));
    // 0x1850c4: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x1850c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1850c8: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x1850c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1850cc: 0x90e70000  lbu         $a3, 0x0($a3)
    ctx->pc = 0x1850ccu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1850d0: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1850d0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1850d4: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x1850d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1850d8: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x1850d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1850dc: 0x8cc60010  lw          $a2, 0x10($a2)
    ctx->pc = 0x1850dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1850e0: 0x90c604f0  lbu         $a2, 0x4F0($a2)
    ctx->pc = 0x1850e0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1264)));
    // 0x1850e4: 0x30c60080  andi        $a2, $a2, 0x80
    ctx->pc = 0x1850e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
    // 0x1850e8: 0x10c0001b  beqz        $a2, . + 4 + (0x1B << 2)
    ctx->pc = 0x1850E8u;
    {
        const bool branch_taken_0x1850e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1850e8) {
            ctx->pc = 0x185158u;
            goto label_185158;
        }
    }
    ctx->pc = 0x1850F0u;
    // 0x1850f0: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x1850f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x1850f4: 0x24c6db55  addiu       $a2, $a2, -0x24AB
    ctx->pc = 0x1850f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957909));
    // 0x1850f8: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x1850f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1850fc: 0x90c80000  lbu         $t0, 0x0($a2)
    ctx->pc = 0x1850fcu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x185100: 0x29010002  slti        $at, $t0, 0x2
    ctx->pc = 0x185100u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x185104: 0x14200014  bnez        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x185104u;
    {
        const bool branch_taken_0x185104 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x185108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185104u;
        // 0x185108: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185104) {
            ctx->pc = 0x185158u;
            goto label_185158;
        }
    }
    ctx->pc = 0x18510Cu;
    // 0x18510c: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x18510cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x185110: 0x24c6db50  addiu       $a2, $a2, -0x24B0
    ctx->pc = 0x185110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957904));
    // 0x185114: 0xc53821  addu        $a3, $a2, $a1
    ctx->pc = 0x185114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x185118: 0x24e90001  addiu       $t1, $a3, 0x1
    ctx->pc = 0x185118u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_18511c:
    // 0x18511c: 0x91260028  lbu         $a2, 0x28($t1)
    ctx->pc = 0x18511cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 40)));
    // 0x185120: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x185120u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x185124: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x185124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x185128: 0x8cc60078  lw          $a2, 0x78($a2)
    ctx->pc = 0x185128u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 120)));
    // 0x18512c: 0x8cc60010  lw          $a2, 0x10($a2)
    ctx->pc = 0x18512cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x185130: 0x90c604f0  lbu         $a2, 0x4F0($a2)
    ctx->pc = 0x185130u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1264)));
    // 0x185134: 0x30c60080  andi        $a2, $a2, 0x80
    ctx->pc = 0x185134u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
    // 0x185138: 0x54c00003  bnel        $a2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x185138u;
    {
        const bool branch_taken_0x185138 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x185138) {
            ctx->pc = 0x18513Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x185138u;
            // 0x18513c: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185148u;
            goto label_185148;
        }
    }
    ctx->pc = 0x185140u;
    // 0x185140: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x185140u;
    {
        const bool branch_taken_0x185140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185140u;
        // 0x185144: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185140) {
            ctx->pc = 0x185290u;
            goto label_185290;
        }
    }
    ctx->pc = 0x185148u;
label_185148:
    // 0x185148: 0x148302a  slt         $a2, $t2, $t0
    ctx->pc = 0x185148u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x18514c: 0x14c0fff3  bnez        $a2, . + 4 + (-0xD << 2)
    ctx->pc = 0x18514Cu;
    {
        const bool branch_taken_0x18514c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x185150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18514Cu;
        // 0x185150: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18514c) {
            ctx->pc = 0x18511Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18511c;
        }
    }
    ctx->pc = 0x185154u;
    // 0x185154: 0x0  nop
    ctx->pc = 0x185154u;
    // NOP
label_185158:
    // 0x185158: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x185158u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18515c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x18515cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x185160: 0x54c20031  bnel        $a2, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x185160u;
    {
        const bool branch_taken_0x185160 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x185160) {
            ctx->pc = 0x185164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x185160u;
            // 0x185164: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185228u;
            goto label_185228;
        }
    }
    ctx->pc = 0x185168u;
    // 0x185168: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x185168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x18516c: 0x9042f35a  lbu         $v0, -0xCA6($v0)
    ctx->pc = 0x18516cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964058)));
    // 0x185170: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x185170u;
    {
        const bool branch_taken_0x185170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x185170) {
            ctx->pc = 0x185218u;
            goto label_185218;
        }
    }
    ctx->pc = 0x185178u;
    // 0x185178: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x185178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18517c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18517cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x185180: 0x2463db78  addiu       $v1, $v1, -0x2488
    ctx->pc = 0x185180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957944));
    // 0x185184: 0x2442dbc8  addiu       $v0, $v0, -0x2438
    ctx->pc = 0x185184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958024));
    // 0x185188: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x185188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x18518c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x18518cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x185190: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x185190u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x185194: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x185194u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x185198: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x185198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18519c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18519cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1851a0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1851a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1851a4: 0x904204f0  lbu         $v0, 0x4F0($v0)
    ctx->pc = 0x1851a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1264)));
    // 0x1851a8: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1851a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1851ac: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1851ACu;
    {
        const bool branch_taken_0x1851ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1851ac) {
            ctx->pc = 0x185218u;
            goto label_185218;
        }
    }
    ctx->pc = 0x1851B4u;
    // 0x1851b4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1851b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1851b8: 0x2442db55  addiu       $v0, $v0, -0x24AB
    ctx->pc = 0x1851b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957909));
    // 0x1851bc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1851bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1851c0: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x1851c0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1851c4: 0x28c10002  slti        $at, $a2, 0x2
    ctx->pc = 0x1851c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1851c8: 0x14200013  bnez        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x1851C8u;
    {
        const bool branch_taken_0x1851c8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1851CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1851C8u;
        // 0x1851cc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1851c8) {
            ctx->pc = 0x185218u;
            goto label_185218;
        }
    }
    ctx->pc = 0x1851D0u;
    // 0x1851d0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1851d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1851d4: 0x2442db50  addiu       $v0, $v0, -0x24B0
    ctx->pc = 0x1851d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957904));
    // 0x1851d8: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x1851d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1851dc: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x1851dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1851e0:
    // 0x1851e0: 0x90a20028  lbu         $v0, 0x28($a1)
    ctx->pc = 0x1851e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x1851e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1851e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1851e8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1851e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1851ec: 0x8c420078  lw          $v0, 0x78($v0)
    ctx->pc = 0x1851ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x1851f0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1851f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1851f4: 0x904204f0  lbu         $v0, 0x4F0($v0)
    ctx->pc = 0x1851f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1264)));
    // 0x1851f8: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1851f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1851fc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1851FCu;
    {
        const bool branch_taken_0x1851fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1851fc) {
            ctx->pc = 0x185200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1851FCu;
            // 0x185200: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18520Cu;
            goto label_18520c;
        }
    }
    ctx->pc = 0x185204u;
    // 0x185204: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x185204u;
    {
        const bool branch_taken_0x185204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185204u;
        // 0x185208: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185204) {
            ctx->pc = 0x185290u;
            goto label_185290;
        }
    }
    ctx->pc = 0x18520Cu;
label_18520c:
    // 0x18520c: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x18520cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x185210: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x185210u;
    {
        const bool branch_taken_0x185210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x185214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185210u;
        // 0x185214: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185210) {
            ctx->pc = 0x1851E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1851e0;
        }
    }
    ctx->pc = 0x185218u;
label_185218:
    // 0x185218: 0xc05f6b0  jal         func_17DAC0
    ctx->pc = 0x185218u;
    SET_GPR_U32(ctx, 31, 0x185220u);
    ctx->pc = 0x17DAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DAC0u, 0x185218u, 0x185220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185220u;
label_185220:
    // 0x185220: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x185220u;
    {
        const bool branch_taken_0x185220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185220u;
        // 0x185224: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185220) {
            ctx->pc = 0x185290u;
            goto label_185290;
        }
    }
    ctx->pc = 0x185228u;
label_185228:
    // 0x185228: 0x54c20019  bnel        $a2, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x185228u;
    {
        const bool branch_taken_0x185228 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x185228) {
            ctx->pc = 0x18522Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x185228u;
            // 0x18522c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185290u;
            goto label_185290;
        }
    }
    ctx->pc = 0x185230u;
    // 0x185230: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x185230u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x185234: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x185234u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x185238: 0x24c6dbc8  addiu       $a2, $a2, -0x2438
    ctx->pc = 0x185238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958024));
    // 0x18523c: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x18523cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x185240: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x185240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x185244: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x185244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x185248: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x185248u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x18524c: 0x94c200ec  lhu         $v0, 0xEC($a2)
    ctx->pc = 0x18524cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 236)));
    // 0x185250: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x185250u;
    {
        const bool branch_taken_0x185250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x185250) {
            ctx->pc = 0x18528Cu;
            goto label_18528c;
        }
    }
    ctx->pc = 0x185258u;
    // 0x185258: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x185258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x18525c: 0x94c600ea  lhu         $a2, 0xEA($a2)
    ctx->pc = 0x18525cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 234)));
    // 0x185260: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x185260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x185264: 0x2463dc9d  addiu       $v1, $v1, -0x2363
    ctx->pc = 0x185264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958237));
    // 0x185268: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x185268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x18526c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18526cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x185270: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x185270u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x185274: 0x14c20005  bne         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x185274u;
    {
        const bool branch_taken_0x185274 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x185274) {
            ctx->pc = 0x18528Cu;
            goto label_18528c;
        }
    }
    ctx->pc = 0x18527Cu;
    // 0x18527c: 0xc05f6b0  jal         func_17DAC0
    ctx->pc = 0x18527Cu;
    SET_GPR_U32(ctx, 31, 0x185284u);
    ctx->pc = 0x17DAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DAC0u, 0x18527Cu, 0x185284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185284u;
label_185284:
    // 0x185284: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x185284u;
    {
        const bool branch_taken_0x185284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185284u;
        // 0x185288: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185284) {
            ctx->pc = 0x185290u;
            goto label_185290;
        }
    }
    ctx->pc = 0x18528Cu;
label_18528c:
    // 0x18528c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18528cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_185290:
    // 0x185290: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x185290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x185294: 0x3e00008  jr          $ra
    ctx->pc = 0x185294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185294u;
        // 0x185298: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18529Cu;
    // 0x18529c: 0x0  nop
    ctx->pc = 0x18529cu;
    // NOP
}
