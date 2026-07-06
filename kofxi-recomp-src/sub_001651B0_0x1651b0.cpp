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

// Function: sub_001651B0
// Address: 0x1651b0 - 0x1654d0
void sub_001651B0_0x1651b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001651B0_0x1651b0");
#endif

    switch (ctx->pc) {
        case 0x1653b0u: goto label_1653b0;
        case 0x1653d8u: goto label_1653d8;
        default: break;
    }

    ctx->pc = 0x1651b0u;

    // 0x1651b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1651b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1651b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1651b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1651b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1651b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1651bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1651bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1651c0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1651c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1651c4: 0x32028000  andi        $v0, $s0, 0x8000
    ctx->pc = 0x1651c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32768);
    // 0x1651c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1651C8u;
    {
        const bool branch_taken_0x1651c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1651CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1651C8u;
        // 0x1651cc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1651c8) {
            ctx->pc = 0x1651D8u;
            goto label_1651d8;
        }
    }
    ctx->pc = 0x1651D0u;
    // 0x1651d0: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x1651D0u;
    {
        const bool branch_taken_0x1651d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1651D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1651D0u;
        // 0x1651d4: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1651d0) {
            ctx->pc = 0x1654B8u;
            goto label_1654b8;
        }
    }
    ctx->pc = 0x1651D8u;
label_1651d8:
    // 0x1651d8: 0x32024000  andi        $v0, $s0, 0x4000
    ctx->pc = 0x1651d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16384);
    // 0x1651dc: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1651DCu;
    {
        const bool branch_taken_0x1651dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1651dc) {
            ctx->pc = 0x1651E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1651DCu;
            // 0x1651e0: 0x32022000  andi        $v0, $s0, 0x2000 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8192);
            ctx->in_delay_slot = false;
            ctx->pc = 0x165200u;
            goto label_165200;
        }
    }
    ctx->pc = 0x1651E4u;
    // 0x1651e4: 0x8e220490  lw          $v0, 0x490($s1)
    ctx->pc = 0x1651e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1168)));
    // 0x1651e8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1651e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1651ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1651ECu;
    {
        const bool branch_taken_0x1651ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1651ec) {
            ctx->pc = 0x1651FCu;
            goto label_1651fc;
        }
    }
    ctx->pc = 0x1651F4u;
    // 0x1651f4: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x1651F4u;
    {
        const bool branch_taken_0x1651f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1651F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1651F4u;
        // 0x1651f8: 0x24024000  addiu       $v0, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1651f4) {
            ctx->pc = 0x1654B8u;
            goto label_1654b8;
        }
    }
    ctx->pc = 0x1651FCu;
label_1651fc:
    // 0x1651fc: 0x32022000  andi        $v0, $s0, 0x2000
    ctx->pc = 0x1651fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8192);
label_165200:
    // 0x165200: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x165200u;
    {
        const bool branch_taken_0x165200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165200) {
            ctx->pc = 0x165204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165200u;
            // 0x165204: 0x32021000  andi        $v0, $s0, 0x1000 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4096);
            ctx->in_delay_slot = false;
            ctx->pc = 0x165248u;
            goto label_165248;
        }
    }
    ctx->pc = 0x165208u;
    // 0x165208: 0x8e230494  lw          $v1, 0x494($s1)
    ctx->pc = 0x165208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1172)));
    // 0x16520c: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x16520cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x165210: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x165210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x165214: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x165214u;
    {
        const bool branch_taken_0x165214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165214) {
            ctx->pc = 0x165244u;
            goto label_165244;
        }
    }
    ctx->pc = 0x16521Cu;
    // 0x16521c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x16521cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x165220: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x165220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x165224: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x165224u;
    {
        const bool branch_taken_0x165224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165224) {
            ctx->pc = 0x165244u;
            goto label_165244;
        }
    }
    ctx->pc = 0x16522Cu;
    // 0x16522c: 0x8e220490  lw          $v0, 0x490($s1)
    ctx->pc = 0x16522cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1168)));
    // 0x165230: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x165230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x165234: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x165234u;
    {
        const bool branch_taken_0x165234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165234) {
            ctx->pc = 0x165244u;
            goto label_165244;
        }
    }
    ctx->pc = 0x16523Cu;
    // 0x16523c: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x16523Cu;
    {
        const bool branch_taken_0x16523c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16523Cu;
        // 0x165240: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16523c) {
            ctx->pc = 0x1654B8u;
            goto label_1654b8;
        }
    }
    ctx->pc = 0x165244u;
label_165244:
    // 0x165244: 0x32021000  andi        $v0, $s0, 0x1000
    ctx->pc = 0x165244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4096);
label_165248:
    // 0x165248: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x165248u;
    {
        const bool branch_taken_0x165248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165248) {
            ctx->pc = 0x16524Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165248u;
            // 0x16524c: 0x32020800  andi        $v0, $s0, 0x800 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2048);
            ctx->in_delay_slot = false;
            ctx->pc = 0x165290u;
            goto label_165290;
        }
    }
    ctx->pc = 0x165250u;
    // 0x165250: 0x8e230494  lw          $v1, 0x494($s1)
    ctx->pc = 0x165250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1172)));
    // 0x165254: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x165254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x165258: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x165258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x16525c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x16525Cu;
    {
        const bool branch_taken_0x16525c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16525c) {
            ctx->pc = 0x16528Cu;
            goto label_16528c;
        }
    }
    ctx->pc = 0x165264u;
    // 0x165264: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x165264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x165268: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x165268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x16526c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16526Cu;
    {
        const bool branch_taken_0x16526c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16526c) {
            ctx->pc = 0x16528Cu;
            goto label_16528c;
        }
    }
    ctx->pc = 0x165274u;
    // 0x165274: 0x8e220490  lw          $v0, 0x490($s1)
    ctx->pc = 0x165274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1168)));
    // 0x165278: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x165278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x16527c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16527Cu;
    {
        const bool branch_taken_0x16527c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16527c) {
            ctx->pc = 0x16528Cu;
            goto label_16528c;
        }
    }
    ctx->pc = 0x165284u;
    // 0x165284: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x165284u;
    {
        const bool branch_taken_0x165284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165284u;
        // 0x165288: 0x24021000  addiu       $v0, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165284) {
            ctx->pc = 0x1654B8u;
            goto label_1654b8;
        }
    }
    ctx->pc = 0x16528Cu;
label_16528c:
    // 0x16528c: 0x32020800  andi        $v0, $s0, 0x800
    ctx->pc = 0x16528cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2048);
label_165290:
    // 0x165290: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x165290u;
    {
        const bool branch_taken_0x165290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165290) {
            ctx->pc = 0x165294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165290u;
            // 0x165294: 0x32020400  andi        $v0, $s0, 0x400 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1024);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1652D4u;
            goto label_1652d4;
        }
    }
    ctx->pc = 0x165298u;
    // 0x165298: 0x8e230494  lw          $v1, 0x494($s1)
    ctx->pc = 0x165298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1172)));
    // 0x16529c: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x16529cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1652a0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1652a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1652a4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1652A4u;
    {
        const bool branch_taken_0x1652a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1652a4) {
            ctx->pc = 0x1652D0u;
            goto label_1652d0;
        }
    }
    ctx->pc = 0x1652ACu;
    // 0x1652ac: 0x30620800  andi        $v0, $v1, 0x800
    ctx->pc = 0x1652acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x1652b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1652B0u;
    {
        const bool branch_taken_0x1652b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1652b0) {
            ctx->pc = 0x1652D0u;
            goto label_1652d0;
        }
    }
    ctx->pc = 0x1652B8u;
    // 0x1652b8: 0x8e220490  lw          $v0, 0x490($s1)
    ctx->pc = 0x1652b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1168)));
    // 0x1652bc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1652bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1652c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1652C0u;
    {
        const bool branch_taken_0x1652c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1652c0) {
            ctx->pc = 0x1652D0u;
            goto label_1652d0;
        }
    }
    ctx->pc = 0x1652C8u;
    // 0x1652c8: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x1652C8u;
    {
        const bool branch_taken_0x1652c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1652CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1652C8u;
        // 0x1652cc: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1652c8) {
            ctx->pc = 0x1654B8u;
            goto label_1654b8;
        }
    }
    ctx->pc = 0x1652D0u;
label_1652d0:
    // 0x1652d0: 0x32020400  andi        $v0, $s0, 0x400
    ctx->pc = 0x1652d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1024);
label_1652d4:
    // 0x1652d4: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1652D4u;
    {
        const bool branch_taken_0x1652d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1652d4) {
            ctx->pc = 0x1652D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1652D4u;
            // 0x1652d8: 0x32020200  andi        $v0, $s0, 0x200 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)512);
            ctx->in_delay_slot = false;
            ctx->pc = 0x16530Cu;
            goto label_16530c;
        }
    }
    ctx->pc = 0x1652DCu;
    // 0x1652dc: 0x8e230494  lw          $v1, 0x494($s1)
    ctx->pc = 0x1652dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1172)));
    // 0x1652e0: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1652e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1652e4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1652e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1652e8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1652E8u;
    {
        const bool branch_taken_0x1652e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1652e8) {
            ctx->pc = 0x165308u;
            goto label_165308;
        }
    }
    ctx->pc = 0x1652F0u;
    // 0x1652f0: 0x8e220490  lw          $v0, 0x490($s1)
    ctx->pc = 0x1652f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1168)));
    // 0x1652f4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1652f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1652f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1652F8u;
    {
        const bool branch_taken_0x1652f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1652f8) {
            ctx->pc = 0x165308u;
            goto label_165308;
        }
    }
    ctx->pc = 0x165300u;
    // 0x165300: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x165300u;
    {
        const bool branch_taken_0x165300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165300u;
        // 0x165304: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165300) {
            ctx->pc = 0x1654B8u;
            goto label_1654b8;
        }
    }
    ctx->pc = 0x165308u;
label_165308:
    // 0x165308: 0x32020200  andi        $v0, $s0, 0x200
    ctx->pc = 0x165308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)512);
label_16530c:
    // 0x16530c: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x16530Cu;
    {
        const bool branch_taken_0x16530c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16530c) {
            ctx->pc = 0x165310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16530Cu;
            // 0x165310: 0x32020080  andi        $v0, $s0, 0x80 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)128);
            ctx->in_delay_slot = false;
            ctx->pc = 0x165358u;
            goto label_165358;
        }
    }
    ctx->pc = 0x165314u;
    // 0x165314: 0x8e230494  lw          $v1, 0x494($s1)
    ctx->pc = 0x165314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1172)));
    // 0x165318: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x165318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x16531c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16531cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x165320: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x165320u;
    {
        const bool branch_taken_0x165320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165320) {
            ctx->pc = 0x165354u;
            goto label_165354;
        }
    }
    ctx->pc = 0x165328u;
    // 0x165328: 0x8e220490  lw          $v0, 0x490($s1)
    ctx->pc = 0x165328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1168)));
    // 0x16532c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x16532cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x165330: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x165330u;
    {
        const bool branch_taken_0x165330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165330) {
            ctx->pc = 0x165354u;
            goto label_165354;
        }
    }
    ctx->pc = 0x165338u;
    // 0x165338: 0x8e23049c  lw          $v1, 0x49C($s1)
    ctx->pc = 0x165338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1180)));
    // 0x16533c: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x16533cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x165340: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x165340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x165344: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x165344u;
    {
        const bool branch_taken_0x165344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165344) {
            ctx->pc = 0x165354u;
            goto label_165354;
        }
    }
    ctx->pc = 0x16534Cu;
    // 0x16534c: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x16534Cu;
    {
        const bool branch_taken_0x16534c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16534Cu;
        // 0x165350: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16534c) {
            ctx->pc = 0x1654B8u;
            goto label_1654b8;
        }
    }
    ctx->pc = 0x165354u;
label_165354:
    // 0x165354: 0x32020080  andi        $v0, $s0, 0x80
    ctx->pc = 0x165354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)128);
label_165358:
    // 0x165358: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x165358u;
    {
        const bool branch_taken_0x165358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165358) {
            ctx->pc = 0x16535Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165358u;
            // 0x16535c: 0x32020100  andi        $v0, $s0, 0x100 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)256);
            ctx->in_delay_slot = false;
            ctx->pc = 0x16537Cu;
            goto label_16537c;
        }
    }
    ctx->pc = 0x165360u;
    // 0x165360: 0x8e220494  lw          $v0, 0x494($s1)
    ctx->pc = 0x165360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1172)));
    // 0x165364: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x165364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x165368: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x165368u;
    {
        const bool branch_taken_0x165368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165368) {
            ctx->pc = 0x165378u;
            goto label_165378;
        }
    }
    ctx->pc = 0x165370u;
    // 0x165370: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x165370u;
    {
        const bool branch_taken_0x165370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165370u;
        // 0x165374: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165370) {
            ctx->pc = 0x1654B8u;
            goto label_1654b8;
        }
    }
    ctx->pc = 0x165378u;
label_165378:
    // 0x165378: 0x32020100  andi        $v0, $s0, 0x100
    ctx->pc = 0x165378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)256);
label_16537c:
    // 0x16537c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x16537Cu;
    {
        const bool branch_taken_0x16537c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16537c) {
            ctx->pc = 0x165380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16537Cu;
            // 0x165380: 0x32020040  andi        $v0, $s0, 0x40 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)64);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1653A0u;
            goto label_1653a0;
        }
    }
    ctx->pc = 0x165384u;
    // 0x165384: 0x8e220494  lw          $v0, 0x494($s1)
    ctx->pc = 0x165384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1172)));
    // 0x165388: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x165388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x16538c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16538Cu;
    {
        const bool branch_taken_0x16538c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16538c) {
            ctx->pc = 0x16539Cu;
            goto label_16539c;
        }
    }
    ctx->pc = 0x165394u;
    // 0x165394: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x165394u;
    {
        const bool branch_taken_0x165394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165394u;
        // 0x165398: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165394) {
            ctx->pc = 0x1654B8u;
            goto label_1654b8;
        }
    }
    ctx->pc = 0x16539Cu;
label_16539c:
    // 0x16539c: 0x32020040  andi        $v0, $s0, 0x40
    ctx->pc = 0x16539cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)64);
label_1653a0:
    // 0x1653a0: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1653A0u;
    {
        const bool branch_taken_0x1653a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1653a0) {
            ctx->pc = 0x1653A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1653A0u;
            // 0x1653a4: 0x32020020  andi        $v0, $s0, 0x20 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1653C8u;
            goto label_1653c8;
        }
    }
    ctx->pc = 0x1653A8u;
    // 0x1653a8: 0xc059534  jal         func_1654D0
    ctx->pc = 0x1653A8u;
    SET_GPR_U32(ctx, 31, 0x1653B0u);
    ctx->pc = 0x1653ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1653A8u;
    // 0x1653ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1654D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1654D0u, 0x1653A8u, 0x1653B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1653B0u;
label_1653b0:
    // 0x1653b0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1653b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1653b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1653B4u;
    {
        const bool branch_taken_0x1653b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1653b4) {
            ctx->pc = 0x1653C4u;
            goto label_1653c4;
        }
    }
    ctx->pc = 0x1653BCu;
    // 0x1653bc: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x1653BCu;
    {
        const bool branch_taken_0x1653bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1653C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1653BCu;
        // 0x1653c0: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1653bc) {
            ctx->pc = 0x1654B8u;
            goto label_1654b8;
        }
    }
    ctx->pc = 0x1653C4u;
label_1653c4:
    // 0x1653c4: 0x32020020  andi        $v0, $s0, 0x20
    ctx->pc = 0x1653c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
label_1653c8:
    // 0x1653c8: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1653C8u;
    {
        const bool branch_taken_0x1653c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1653c8) {
            ctx->pc = 0x1653CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1653C8u;
            // 0x1653cc: 0x32020010  andi        $v0, $s0, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1653F0u;
            goto label_1653f0;
        }
    }
    ctx->pc = 0x1653D0u;
    // 0x1653d0: 0xc059534  jal         func_1654D0
    ctx->pc = 0x1653D0u;
    SET_GPR_U32(ctx, 31, 0x1653D8u);
    ctx->pc = 0x1653D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1653D0u;
    // 0x1653d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1654D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1654D0u, 0x1653D0u, 0x1653D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1653D8u;
label_1653d8:
    // 0x1653d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1653d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1653dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1653DCu;
    {
        const bool branch_taken_0x1653dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1653dc) {
            ctx->pc = 0x1653ECu;
            goto label_1653ec;
        }
    }
    ctx->pc = 0x1653E4u;
    // 0x1653e4: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x1653E4u;
    {
        const bool branch_taken_0x1653e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1653E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1653E4u;
        // 0x1653e8: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1653e4) {
            ctx->pc = 0x1654B8u;
            goto label_1654b8;
        }
    }
    ctx->pc = 0x1653ECu;
label_1653ec:
    // 0x1653ec: 0x32020010  andi        $v0, $s0, 0x10
    ctx->pc = 0x1653ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
label_1653f0:
    // 0x1653f0: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1653F0u;
    {
        const bool branch_taken_0x1653f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1653f0) {
            ctx->pc = 0x1653F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1653F0u;
            // 0x1653f4: 0x32020008  andi        $v0, $s0, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x165438u;
            goto label_165438;
        }
    }
    ctx->pc = 0x1653F8u;
    // 0x1653f8: 0x8e230494  lw          $v1, 0x494($s1)
    ctx->pc = 0x1653f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1172)));
    // 0x1653fc: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1653fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x165400: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x165400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x165404: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x165404u;
    {
        const bool branch_taken_0x165404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165404) {
            ctx->pc = 0x165434u;
            goto label_165434;
        }
    }
    ctx->pc = 0x16540Cu;
    // 0x16540c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x16540cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x165410: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x165410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x165414: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x165414u;
    {
        const bool branch_taken_0x165414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165414) {
            ctx->pc = 0x165434u;
            goto label_165434;
        }
    }
    ctx->pc = 0x16541Cu;
    // 0x16541c: 0x8e220490  lw          $v0, 0x490($s1)
    ctx->pc = 0x16541cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1168)));
    // 0x165420: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x165420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x165424: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x165424u;
    {
        const bool branch_taken_0x165424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165424) {
            ctx->pc = 0x165434u;
            goto label_165434;
        }
    }
    ctx->pc = 0x16542Cu;
    // 0x16542c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x16542Cu;
    {
        const bool branch_taken_0x16542c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16542Cu;
        // 0x165430: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16542c) {
            ctx->pc = 0x1654B8u;
            goto label_1654b8;
        }
    }
    ctx->pc = 0x165434u;
label_165434:
    // 0x165434: 0x32020008  andi        $v0, $s0, 0x8
    ctx->pc = 0x165434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
label_165438:
    // 0x165438: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x165438u;
    {
        const bool branch_taken_0x165438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165438) {
            ctx->pc = 0x16543Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165438u;
            // 0x16543c: 0x32020004  andi        $v0, $s0, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x16546Cu;
            goto label_16546c;
        }
    }
    ctx->pc = 0x165440u;
    // 0x165440: 0x8e230494  lw          $v1, 0x494($s1)
    ctx->pc = 0x165440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1172)));
    // 0x165444: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x165444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x165448: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x165448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x16544c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16544Cu;
    {
        const bool branch_taken_0x16544c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16544c) {
            ctx->pc = 0x165468u;
            goto label_165468;
        }
    }
    ctx->pc = 0x165454u;
    // 0x165454: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x165454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x165458: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x165458u;
    {
        const bool branch_taken_0x165458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165458) {
            ctx->pc = 0x165468u;
            goto label_165468;
        }
    }
    ctx->pc = 0x165460u;
    // 0x165460: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x165460u;
    {
        const bool branch_taken_0x165460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165460u;
        // 0x165464: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165460) {
            ctx->pc = 0x1654B8u;
            goto label_1654b8;
        }
    }
    ctx->pc = 0x165468u;
label_165468:
    // 0x165468: 0x32020004  andi        $v0, $s0, 0x4
    ctx->pc = 0x165468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
label_16546c:
    // 0x16546c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x16546Cu;
    {
        const bool branch_taken_0x16546c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16546c) {
            ctx->pc = 0x165470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16546Cu;
            // 0x165470: 0x32020002  andi        $v0, $s0, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x165490u;
            goto label_165490;
        }
    }
    ctx->pc = 0x165474u;
    // 0x165474: 0x8e220494  lw          $v0, 0x494($s1)
    ctx->pc = 0x165474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1172)));
    // 0x165478: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x165478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x16547c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16547Cu;
    {
        const bool branch_taken_0x16547c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16547c) {
            ctx->pc = 0x16548Cu;
            goto label_16548c;
        }
    }
    ctx->pc = 0x165484u;
    // 0x165484: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x165484u;
    {
        const bool branch_taken_0x165484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165484u;
        // 0x165488: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165484) {
            ctx->pc = 0x1654B8u;
            goto label_1654b8;
        }
    }
    ctx->pc = 0x16548Cu;
label_16548c:
    // 0x16548c: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x16548cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
label_165490:
    // 0x165490: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x165490u;
    {
        const bool branch_taken_0x165490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165490) {
            ctx->pc = 0x165494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165490u;
            // 0x165494: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1654B8u;
            goto label_1654b8;
        }
    }
    ctx->pc = 0x165498u;
    // 0x165498: 0x8e230498  lw          $v1, 0x498($s1)
    ctx->pc = 0x165498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1176)));
    // 0x16549c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x16549cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1654a0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1654a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1654a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1654A4u;
    {
        const bool branch_taken_0x1654a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1654a4) {
            ctx->pc = 0x1654B4u;
            goto label_1654b4;
        }
    }
    ctx->pc = 0x1654ACu;
    // 0x1654ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1654ACu;
    {
        const bool branch_taken_0x1654ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1654B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1654ACu;
        // 0x1654b0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1654ac) {
            ctx->pc = 0x1654B8u;
            goto label_1654b8;
        }
    }
    ctx->pc = 0x1654B4u;
label_1654b4:
    // 0x1654b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1654b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1654b8:
    // 0x1654b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1654b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1654bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1654bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1654c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1654c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1654c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1654C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1654C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1654C4u;
        // 0x1654c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1654C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1654CCu;
    // 0x1654cc: 0x0  nop
    ctx->pc = 0x1654ccu;
    // NOP
}
