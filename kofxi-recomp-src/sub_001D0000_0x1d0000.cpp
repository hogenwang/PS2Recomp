#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D0000
// Address: 0x1d0000 - 0x1d0208
void sub_001D0000_0x1d0000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0000_0x1d0000");
#endif

    switch (ctx->pc) {
        case 0x1d0000u: goto label_1d0000;
        case 0x1d0004u: goto label_1d0004;
        case 0x1d0008u: goto label_1d0008;
        case 0x1d000cu: goto label_1d000c;
        case 0x1d0010u: goto label_1d0010;
        case 0x1d0014u: goto label_1d0014;
        case 0x1d0018u: goto label_1d0018;
        case 0x1d001cu: goto label_1d001c;
        case 0x1d0020u: goto label_1d0020;
        case 0x1d0024u: goto label_1d0024;
        case 0x1d0028u: goto label_1d0028;
        case 0x1d002cu: goto label_1d002c;
        case 0x1d0030u: goto label_1d0030;
        case 0x1d0034u: goto label_1d0034;
        case 0x1d0038u: goto label_1d0038;
        case 0x1d003cu: goto label_1d003c;
        case 0x1d0040u: goto label_1d0040;
        case 0x1d0044u: goto label_1d0044;
        case 0x1d0048u: goto label_1d0048;
        case 0x1d004cu: goto label_1d004c;
        case 0x1d0050u: goto label_1d0050;
        case 0x1d0054u: goto label_1d0054;
        case 0x1d0058u: goto label_1d0058;
        case 0x1d005cu: goto label_1d005c;
        case 0x1d0060u: goto label_1d0060;
        case 0x1d0064u: goto label_1d0064;
        case 0x1d0068u: goto label_1d0068;
        case 0x1d006cu: goto label_1d006c;
        case 0x1d0070u: goto label_1d0070;
        case 0x1d0074u: goto label_1d0074;
        case 0x1d0078u: goto label_1d0078;
        case 0x1d007cu: goto label_1d007c;
        case 0x1d0080u: goto label_1d0080;
        case 0x1d0084u: goto label_1d0084;
        case 0x1d0088u: goto label_1d0088;
        case 0x1d008cu: goto label_1d008c;
        case 0x1d0090u: goto label_1d0090;
        case 0x1d0094u: goto label_1d0094;
        case 0x1d0098u: goto label_1d0098;
        case 0x1d009cu: goto label_1d009c;
        case 0x1d00a0u: goto label_1d00a0;
        case 0x1d00a4u: goto label_1d00a4;
        case 0x1d00a8u: goto label_1d00a8;
        case 0x1d00acu: goto label_1d00ac;
        case 0x1d00b0u: goto label_1d00b0;
        case 0x1d00b4u: goto label_1d00b4;
        case 0x1d00b8u: goto label_1d00b8;
        case 0x1d00bcu: goto label_1d00bc;
        case 0x1d00c0u: goto label_1d00c0;
        case 0x1d00c4u: goto label_1d00c4;
        case 0x1d00c8u: goto label_1d00c8;
        case 0x1d00ccu: goto label_1d00cc;
        case 0x1d00d0u: goto label_1d00d0;
        case 0x1d00d4u: goto label_1d00d4;
        case 0x1d00d8u: goto label_1d00d8;
        case 0x1d00dcu: goto label_1d00dc;
        case 0x1d00e0u: goto label_1d00e0;
        case 0x1d00e4u: goto label_1d00e4;
        case 0x1d00e8u: goto label_1d00e8;
        case 0x1d00ecu: goto label_1d00ec;
        case 0x1d00f0u: goto label_1d00f0;
        case 0x1d00f4u: goto label_1d00f4;
        case 0x1d00f8u: goto label_1d00f8;
        case 0x1d00fcu: goto label_1d00fc;
        case 0x1d0100u: goto label_1d0100;
        case 0x1d0104u: goto label_1d0104;
        case 0x1d0108u: goto label_1d0108;
        case 0x1d010cu: goto label_1d010c;
        case 0x1d0110u: goto label_1d0110;
        case 0x1d0114u: goto label_1d0114;
        case 0x1d0118u: goto label_1d0118;
        case 0x1d011cu: goto label_1d011c;
        case 0x1d0120u: goto label_1d0120;
        case 0x1d0124u: goto label_1d0124;
        case 0x1d0128u: goto label_1d0128;
        case 0x1d012cu: goto label_1d012c;
        case 0x1d0130u: goto label_1d0130;
        case 0x1d0134u: goto label_1d0134;
        case 0x1d0138u: goto label_1d0138;
        case 0x1d013cu: goto label_1d013c;
        case 0x1d0140u: goto label_1d0140;
        case 0x1d0144u: goto label_1d0144;
        case 0x1d0148u: goto label_1d0148;
        case 0x1d014cu: goto label_1d014c;
        case 0x1d0150u: goto label_1d0150;
        case 0x1d0154u: goto label_1d0154;
        case 0x1d0158u: goto label_1d0158;
        case 0x1d015cu: goto label_1d015c;
        case 0x1d0160u: goto label_1d0160;
        case 0x1d0164u: goto label_1d0164;
        case 0x1d0168u: goto label_1d0168;
        case 0x1d016cu: goto label_1d016c;
        case 0x1d0170u: goto label_1d0170;
        case 0x1d0174u: goto label_1d0174;
        case 0x1d0178u: goto label_1d0178;
        case 0x1d017cu: goto label_1d017c;
        case 0x1d0180u: goto label_1d0180;
        case 0x1d0184u: goto label_1d0184;
        case 0x1d0188u: goto label_1d0188;
        case 0x1d018cu: goto label_1d018c;
        case 0x1d0190u: goto label_1d0190;
        case 0x1d0194u: goto label_1d0194;
        case 0x1d0198u: goto label_1d0198;
        case 0x1d019cu: goto label_1d019c;
        case 0x1d01a0u: goto label_1d01a0;
        case 0x1d01a4u: goto label_1d01a4;
        case 0x1d01a8u: goto label_1d01a8;
        case 0x1d01acu: goto label_1d01ac;
        case 0x1d01b0u: goto label_1d01b0;
        case 0x1d01b4u: goto label_1d01b4;
        case 0x1d01b8u: goto label_1d01b8;
        case 0x1d01bcu: goto label_1d01bc;
        case 0x1d01c0u: goto label_1d01c0;
        case 0x1d01c4u: goto label_1d01c4;
        case 0x1d01c8u: goto label_1d01c8;
        case 0x1d01ccu: goto label_1d01cc;
        case 0x1d01d0u: goto label_1d01d0;
        case 0x1d01d4u: goto label_1d01d4;
        case 0x1d01d8u: goto label_1d01d8;
        case 0x1d01dcu: goto label_1d01dc;
        case 0x1d01e0u: goto label_1d01e0;
        case 0x1d01e4u: goto label_1d01e4;
        case 0x1d01e8u: goto label_1d01e8;
        case 0x1d01ecu: goto label_1d01ec;
        case 0x1d01f0u: goto label_1d01f0;
        case 0x1d01f4u: goto label_1d01f4;
        case 0x1d01f8u: goto label_1d01f8;
        case 0x1d01fcu: goto label_1d01fc;
        case 0x1d0200u: goto label_1d0200;
        case 0x1d0204u: goto label_1d0204;
        default: break;
    }

    ctx->pc = 0x1d0000u;

label_1d0000:
    // 0x1d0000: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1d0000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_1d0004:
    // 0x1d0004: 0x3e00008  jr          $ra
label_1d0008:
    if (ctx->pc == 0x1D0008u) {
        ctx->pc = 0x1D0008u;
            // 0x1d0008: 0x8c62e638  lw          $v0, -0x19C8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960696)));
        ctx->pc = 0x1D000Cu;
        goto label_1d000c;
    }
    ctx->pc = 0x1D0004u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0004u;
            // 0x1d0008: 0x8c62e638  lw          $v0, -0x19C8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960696)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D000Cu;
label_1d000c:
    // 0x1d000c: 0x0  nop
    ctx->pc = 0x1d000cu;
    // NOP
label_1d0010:
    // 0x1d0010: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1d0010u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_1d0014:
    // 0x1d0014: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0014u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d0018:
    // 0x1d0018: 0x8c63e63c  lw          $v1, -0x19C4($v1)
    ctx->pc = 0x1d0018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960700)));
label_1d001c:
    // 0x1d001c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d001cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0020:
    // 0x1d0020: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1d0024:
    if (ctx->pc == 0x1D0024u) {
        ctx->pc = 0x1D0024u;
            // 0x1d0024: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1D0028u;
        goto label_1d0028;
    }
    ctx->pc = 0x1D0020u;
    {
        const bool branch_taken_0x1d0020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0020u;
            // 0x1d0024: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0020) {
            ctx->pc = 0x1D0030u;
            goto label_1d0030;
        }
    }
    ctx->pc = 0x1D0028u;
label_1d0028:
    // 0x1d0028: 0x60f809  jalr        $v1
label_1d002c:
    if (ctx->pc == 0x1D002Cu) {
        ctx->pc = 0x1D0030u;
        goto label_1d0030;
    }
    ctx->pc = 0x1D0028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D0030u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D0030u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D0030u; }
            if (ctx->pc != 0x1D0030u) { return; }
        }
        }
    }
    ctx->pc = 0x1D0030u;
label_1d0030:
    // 0x1d0030: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d0034:
    // 0x1d0034: 0x3e00008  jr          $ra
label_1d0038:
    if (ctx->pc == 0x1D0038u) {
        ctx->pc = 0x1D0038u;
            // 0x1d0038: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1D003Cu;
        goto label_1d003c;
    }
    ctx->pc = 0x1D0034u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0034u;
            // 0x1d0038: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D003Cu;
label_1d003c:
    // 0x1d003c: 0x0  nop
    ctx->pc = 0x1d003cu;
    // NOP
label_1d0040:
    // 0x1d0040: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1d0040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_1d0044:
    // 0x1d0044: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0044u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d0048:
    // 0x1d0048: 0x8c63e640  lw          $v1, -0x19C0($v1)
    ctx->pc = 0x1d0048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960704)));
label_1d004c:
    // 0x1d004c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d004cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0050:
    // 0x1d0050: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1d0054:
    if (ctx->pc == 0x1D0054u) {
        ctx->pc = 0x1D0054u;
            // 0x1d0054: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1D0058u;
        goto label_1d0058;
    }
    ctx->pc = 0x1D0050u;
    {
        const bool branch_taken_0x1d0050 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0050u;
            // 0x1d0054: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0050) {
            ctx->pc = 0x1D0060u;
            goto label_1d0060;
        }
    }
    ctx->pc = 0x1D0058u;
label_1d0058:
    // 0x1d0058: 0x60f809  jalr        $v1
label_1d005c:
    if (ctx->pc == 0x1D005Cu) {
        ctx->pc = 0x1D0060u;
        goto label_1d0060;
    }
    ctx->pc = 0x1D0058u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D0060u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D0060u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D0060u; }
            if (ctx->pc != 0x1D0060u) { return; }
        }
        }
    }
    ctx->pc = 0x1D0060u;
label_1d0060:
    // 0x1d0060: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d0064:
    // 0x1d0064: 0x3e00008  jr          $ra
label_1d0068:
    if (ctx->pc == 0x1D0068u) {
        ctx->pc = 0x1D0068u;
            // 0x1d0068: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1D006Cu;
        goto label_1d006c;
    }
    ctx->pc = 0x1D0064u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0064u;
            // 0x1d0068: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D006Cu;
label_1d006c:
    // 0x1d006c: 0x0  nop
    ctx->pc = 0x1d006cu;
    // NOP
label_1d0070:
    // 0x1d0070: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1d0070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1d0074:
    // 0x1d0074: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0074u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d0078:
    // 0x1d0078: 0x8c42e644  lw          $v0, -0x19BC($v0)
    ctx->pc = 0x1d0078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960708)));
label_1d007c:
    // 0x1d007c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1d0080:
    if (ctx->pc == 0x1D0080u) {
        ctx->pc = 0x1D0080u;
            // 0x1d0080: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1D0084u;
        goto label_1d0084;
    }
    ctx->pc = 0x1D007Cu;
    {
        const bool branch_taken_0x1d007c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D007Cu;
            // 0x1d0080: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d007c) {
            ctx->pc = 0x1D008Cu;
            goto label_1d008c;
        }
    }
    ctx->pc = 0x1D0084u;
label_1d0084:
    // 0x1d0084: 0x40f809  jalr        $v0
label_1d0088:
    if (ctx->pc == 0x1D0088u) {
        ctx->pc = 0x1D008Cu;
        goto label_1d008c;
    }
    ctx->pc = 0x1D0084u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D008Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D008Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D008Cu; }
            if (ctx->pc != 0x1D008Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1D008Cu;
label_1d008c:
    // 0x1d008c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d008cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d0090:
    // 0x1d0090: 0x3e00008  jr          $ra
label_1d0094:
    if (ctx->pc == 0x1D0094u) {
        ctx->pc = 0x1D0094u;
            // 0x1d0094: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1D0098u;
        goto label_1d0098;
    }
    ctx->pc = 0x1D0090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0090u;
            // 0x1d0094: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D0098u;
label_1d0098:
    // 0x1d0098: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1d0098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1d009c:
    // 0x1d009c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d009cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d00a0:
    // 0x1d00a0: 0x8c42e648  lw          $v0, -0x19B8($v0)
    ctx->pc = 0x1d00a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960712)));
label_1d00a4:
    // 0x1d00a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1d00a8:
    if (ctx->pc == 0x1D00A8u) {
        ctx->pc = 0x1D00A8u;
            // 0x1d00a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1D00ACu;
        goto label_1d00ac;
    }
    ctx->pc = 0x1D00A4u;
    {
        const bool branch_taken_0x1d00a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D00A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D00A4u;
            // 0x1d00a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d00a4) {
            ctx->pc = 0x1D00B4u;
            goto label_1d00b4;
        }
    }
    ctx->pc = 0x1D00ACu;
label_1d00ac:
    // 0x1d00ac: 0x40f809  jalr        $v0
label_1d00b0:
    if (ctx->pc == 0x1D00B0u) {
        ctx->pc = 0x1D00B4u;
        goto label_1d00b4;
    }
    ctx->pc = 0x1D00ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D00B4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D00B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D00B4u; }
            if (ctx->pc != 0x1D00B4u) { return; }
        }
        }
    }
    ctx->pc = 0x1D00B4u;
label_1d00b4:
    // 0x1d00b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d00b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d00b8:
    // 0x1d00b8: 0x3e00008  jr          $ra
label_1d00bc:
    if (ctx->pc == 0x1D00BCu) {
        ctx->pc = 0x1D00BCu;
            // 0x1d00bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1D00C0u;
        goto label_1d00c0;
    }
    ctx->pc = 0x1D00B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D00BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D00B8u;
            // 0x1d00bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D00C0u;
label_1d00c0:
    // 0x1d00c0: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1d00c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_1d00c4:
    // 0x1d00c4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d00c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d00c8:
    // 0x1d00c8: 0x8c63e64c  lw          $v1, -0x19B4($v1)
    ctx->pc = 0x1d00c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960716)));
label_1d00cc:
    // 0x1d00cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d00ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d00d0:
    // 0x1d00d0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1d00d4:
    if (ctx->pc == 0x1D00D4u) {
        ctx->pc = 0x1D00D4u;
            // 0x1d00d4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1D00D8u;
        goto label_1d00d8;
    }
    ctx->pc = 0x1D00D0u;
    {
        const bool branch_taken_0x1d00d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D00D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D00D0u;
            // 0x1d00d4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d00d0) {
            ctx->pc = 0x1D00E0u;
            goto label_1d00e0;
        }
    }
    ctx->pc = 0x1D00D8u;
label_1d00d8:
    // 0x1d00d8: 0x60f809  jalr        $v1
label_1d00dc:
    if (ctx->pc == 0x1D00DCu) {
        ctx->pc = 0x1D00E0u;
        goto label_1d00e0;
    }
    ctx->pc = 0x1D00D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D00E0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D00E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D00E0u; }
            if (ctx->pc != 0x1D00E0u) { return; }
        }
        }
    }
    ctx->pc = 0x1D00E0u;
label_1d00e0:
    // 0x1d00e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d00e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d00e4:
    // 0x1d00e4: 0x3e00008  jr          $ra
label_1d00e8:
    if (ctx->pc == 0x1D00E8u) {
        ctx->pc = 0x1D00E8u;
            // 0x1d00e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1D00ECu;
        goto label_1d00ec;
    }
    ctx->pc = 0x1D00E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D00E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D00E4u;
            // 0x1d00e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D00ECu;
label_1d00ec:
    // 0x1d00ec: 0x0  nop
    ctx->pc = 0x1d00ecu;
    // NOP
label_1d00f0:
    // 0x1d00f0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1d00f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1d00f4:
    // 0x1d00f4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d00f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d00f8:
    // 0x1d00f8: 0x8c42e650  lw          $v0, -0x19B0($v0)
    ctx->pc = 0x1d00f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960720)));
label_1d00fc:
    // 0x1d00fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1d0100:
    if (ctx->pc == 0x1D0100u) {
        ctx->pc = 0x1D0100u;
            // 0x1d0100: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1D0104u;
        goto label_1d0104;
    }
    ctx->pc = 0x1D00FCu;
    {
        const bool branch_taken_0x1d00fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D00FCu;
            // 0x1d0100: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d00fc) {
            ctx->pc = 0x1D010Cu;
            goto label_1d010c;
        }
    }
    ctx->pc = 0x1D0104u;
label_1d0104:
    // 0x1d0104: 0x40f809  jalr        $v0
label_1d0108:
    if (ctx->pc == 0x1D0108u) {
        ctx->pc = 0x1D010Cu;
        goto label_1d010c;
    }
    ctx->pc = 0x1D0104u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D010Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D010Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D010Cu; }
            if (ctx->pc != 0x1D010Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1D010Cu;
label_1d010c:
    // 0x1d010c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d010cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d0110:
    // 0x1d0110: 0x3e00008  jr          $ra
label_1d0114:
    if (ctx->pc == 0x1D0114u) {
        ctx->pc = 0x1D0114u;
            // 0x1d0114: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1D0118u;
        goto label_1d0118;
    }
    ctx->pc = 0x1D0110u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0110u;
            // 0x1d0114: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D0118u;
label_1d0118:
    // 0x1d0118: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1d0118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1d011c:
    // 0x1d011c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d011cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d0120:
    // 0x1d0120: 0x8c42e654  lw          $v0, -0x19AC($v0)
    ctx->pc = 0x1d0120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960724)));
label_1d0124:
    // 0x1d0124: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1d0128:
    if (ctx->pc == 0x1D0128u) {
        ctx->pc = 0x1D0128u;
            // 0x1d0128: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1D012Cu;
        goto label_1d012c;
    }
    ctx->pc = 0x1D0124u;
    {
        const bool branch_taken_0x1d0124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0124u;
            // 0x1d0128: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0124) {
            ctx->pc = 0x1D0134u;
            goto label_1d0134;
        }
    }
    ctx->pc = 0x1D012Cu;
label_1d012c:
    // 0x1d012c: 0x40f809  jalr        $v0
label_1d0130:
    if (ctx->pc == 0x1D0130u) {
        ctx->pc = 0x1D0134u;
        goto label_1d0134;
    }
    ctx->pc = 0x1D012Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D0134u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D0134u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D0134u; }
            if (ctx->pc != 0x1D0134u) { return; }
        }
        }
    }
    ctx->pc = 0x1D0134u;
label_1d0134:
    // 0x1d0134: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d0138:
    // 0x1d0138: 0x3e00008  jr          $ra
label_1d013c:
    if (ctx->pc == 0x1D013Cu) {
        ctx->pc = 0x1D013Cu;
            // 0x1d013c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1D0140u;
        goto label_1d0140;
    }
    ctx->pc = 0x1D0138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D013Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0138u;
            // 0x1d013c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D0140u;
label_1d0140:
    // 0x1d0140: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1d0140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1d0144:
    // 0x1d0144: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0144u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d0148:
    // 0x1d0148: 0x8c42e658  lw          $v0, -0x19A8($v0)
    ctx->pc = 0x1d0148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960728)));
label_1d014c:
    // 0x1d014c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1d0150:
    if (ctx->pc == 0x1D0150u) {
        ctx->pc = 0x1D0150u;
            // 0x1d0150: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1D0154u;
        goto label_1d0154;
    }
    ctx->pc = 0x1D014Cu;
    {
        const bool branch_taken_0x1d014c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D014Cu;
            // 0x1d0150: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d014c) {
            ctx->pc = 0x1D015Cu;
            goto label_1d015c;
        }
    }
    ctx->pc = 0x1D0154u;
label_1d0154:
    // 0x1d0154: 0x40f809  jalr        $v0
label_1d0158:
    if (ctx->pc == 0x1D0158u) {
        ctx->pc = 0x1D015Cu;
        goto label_1d015c;
    }
    ctx->pc = 0x1D0154u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D015Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D015Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D015Cu; }
            if (ctx->pc != 0x1D015Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1D015Cu;
label_1d015c:
    // 0x1d015c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d015cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d0160:
    // 0x1d0160: 0x3e00008  jr          $ra
label_1d0164:
    if (ctx->pc == 0x1D0164u) {
        ctx->pc = 0x1D0164u;
            // 0x1d0164: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1D0168u;
        goto label_1d0168;
    }
    ctx->pc = 0x1D0160u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0160u;
            // 0x1d0164: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D0168u;
label_1d0168:
    // 0x1d0168: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1d0168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1d016c:
    // 0x1d016c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d016cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d0170:
    // 0x1d0170: 0x8c42e65c  lw          $v0, -0x19A4($v0)
    ctx->pc = 0x1d0170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960732)));
label_1d0174:
    // 0x1d0174: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1d0178:
    if (ctx->pc == 0x1D0178u) {
        ctx->pc = 0x1D0178u;
            // 0x1d0178: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1D017Cu;
        goto label_1d017c;
    }
    ctx->pc = 0x1D0174u;
    {
        const bool branch_taken_0x1d0174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0174u;
            // 0x1d0178: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0174) {
            ctx->pc = 0x1D0184u;
            goto label_1d0184;
        }
    }
    ctx->pc = 0x1D017Cu;
label_1d017c:
    // 0x1d017c: 0x40f809  jalr        $v0
label_1d0180:
    if (ctx->pc == 0x1D0180u) {
        ctx->pc = 0x1D0184u;
        goto label_1d0184;
    }
    ctx->pc = 0x1D017Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D0184u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D0184u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D0184u; }
            if (ctx->pc != 0x1D0184u) { return; }
        }
        }
    }
    ctx->pc = 0x1D0184u;
label_1d0184:
    // 0x1d0184: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d0188:
    // 0x1d0188: 0x3e00008  jr          $ra
label_1d018c:
    if (ctx->pc == 0x1D018Cu) {
        ctx->pc = 0x1D018Cu;
            // 0x1d018c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1D0190u;
        goto label_1d0190;
    }
    ctx->pc = 0x1D0188u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D018Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0188u;
            // 0x1d018c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D0190u;
label_1d0190:
    // 0x1d0190: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1d0190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1d0194:
    // 0x1d0194: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0194u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d0198:
    // 0x1d0198: 0x8c42e660  lw          $v0, -0x19A0($v0)
    ctx->pc = 0x1d0198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960736)));
label_1d019c:
    // 0x1d019c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1d01a0:
    if (ctx->pc == 0x1D01A0u) {
        ctx->pc = 0x1D01A0u;
            // 0x1d01a0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1D01A4u;
        goto label_1d01a4;
    }
    ctx->pc = 0x1D019Cu;
    {
        const bool branch_taken_0x1d019c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D01A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D019Cu;
            // 0x1d01a0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d019c) {
            ctx->pc = 0x1D01ACu;
            goto label_1d01ac;
        }
    }
    ctx->pc = 0x1D01A4u;
label_1d01a4:
    // 0x1d01a4: 0x40f809  jalr        $v0
label_1d01a8:
    if (ctx->pc == 0x1D01A8u) {
        ctx->pc = 0x1D01ACu;
        goto label_1d01ac;
    }
    ctx->pc = 0x1D01A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D01ACu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D01ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D01ACu; }
            if (ctx->pc != 0x1D01ACu) { return; }
        }
        }
    }
    ctx->pc = 0x1D01ACu;
label_1d01ac:
    // 0x1d01ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d01acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d01b0:
    // 0x1d01b0: 0x3e00008  jr          $ra
label_1d01b4:
    if (ctx->pc == 0x1D01B4u) {
        ctx->pc = 0x1D01B4u;
            // 0x1d01b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1D01B8u;
        goto label_1d01b8;
    }
    ctx->pc = 0x1D01B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D01B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D01B0u;
            // 0x1d01b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D01B8u;
label_1d01b8:
    // 0x1d01b8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1d01b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1d01bc:
    // 0x1d01bc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d01bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d01c0:
    // 0x1d01c0: 0x8c42e664  lw          $v0, -0x199C($v0)
    ctx->pc = 0x1d01c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960740)));
label_1d01c4:
    // 0x1d01c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1d01c8:
    if (ctx->pc == 0x1D01C8u) {
        ctx->pc = 0x1D01C8u;
            // 0x1d01c8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1D01CCu;
        goto label_1d01cc;
    }
    ctx->pc = 0x1D01C4u;
    {
        const bool branch_taken_0x1d01c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D01C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D01C4u;
            // 0x1d01c8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d01c4) {
            ctx->pc = 0x1D01D4u;
            goto label_1d01d4;
        }
    }
    ctx->pc = 0x1D01CCu;
label_1d01cc:
    // 0x1d01cc: 0x40f809  jalr        $v0
label_1d01d0:
    if (ctx->pc == 0x1D01D0u) {
        ctx->pc = 0x1D01D4u;
        goto label_1d01d4;
    }
    ctx->pc = 0x1D01CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D01D4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D01D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D01D4u; }
            if (ctx->pc != 0x1D01D4u) { return; }
        }
        }
    }
    ctx->pc = 0x1D01D4u;
label_1d01d4:
    // 0x1d01d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d01d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d01d8:
    // 0x1d01d8: 0x3e00008  jr          $ra
label_1d01dc:
    if (ctx->pc == 0x1D01DCu) {
        ctx->pc = 0x1D01DCu;
            // 0x1d01dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1D01E0u;
        goto label_1d01e0;
    }
    ctx->pc = 0x1D01D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D01DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D01D8u;
            // 0x1d01dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D01E0u;
label_1d01e0:
    // 0x1d01e0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1d01e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1d01e4:
    // 0x1d01e4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d01e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d01e8:
    // 0x1d01e8: 0x8c42e668  lw          $v0, -0x1998($v0)
    ctx->pc = 0x1d01e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960744)));
label_1d01ec:
    // 0x1d01ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1d01f0:
    if (ctx->pc == 0x1D01F0u) {
        ctx->pc = 0x1D01F0u;
            // 0x1d01f0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1D01F4u;
        goto label_1d01f4;
    }
    ctx->pc = 0x1D01ECu;
    {
        const bool branch_taken_0x1d01ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D01F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D01ECu;
            // 0x1d01f0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d01ec) {
            ctx->pc = 0x1D01FCu;
            goto label_1d01fc;
        }
    }
    ctx->pc = 0x1D01F4u;
label_1d01f4:
    // 0x1d01f4: 0x40f809  jalr        $v0
label_1d01f8:
    if (ctx->pc == 0x1D01F8u) {
        ctx->pc = 0x1D01FCu;
        goto label_1d01fc;
    }
    ctx->pc = 0x1D01F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D01FCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D01FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D01FCu; }
            if (ctx->pc != 0x1D01FCu) { return; }
        }
        }
    }
    ctx->pc = 0x1D01FCu;
label_1d01fc:
    // 0x1d01fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d01fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d0200:
    // 0x1d0200: 0x3e00008  jr          $ra
label_1d0204:
    if (ctx->pc == 0x1D0204u) {
        ctx->pc = 0x1D0204u;
            // 0x1d0204: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1D0208u;
        goto label_fallthrough_0x1d0200;
    }
    ctx->pc = 0x1D0200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0200u;
            // 0x1d0204: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1d0200:
    ctx->pc = 0x1D0208u;
    ctx->pc = 0x1d0208u;
}
